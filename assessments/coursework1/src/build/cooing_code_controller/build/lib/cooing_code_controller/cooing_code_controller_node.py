from cooing_code_interfaces.srv import TurnRobotOn, TurnRobotOff
from cooing_code_interfaces.msg import TaskSpacePose, WheelVelocities
import rclpy
from rclpy.node import Node
from rclpy.task import Future
import math


class CooingCodeControllerNode(Node):

    MIN_WHEEL_VELOCITY: float = 0.1
    MAX_WHEEL_VELOCITY: float = 1.0
    DESIRED_ANGLE: float = -75.0
    DESIRED_DISTANCE: float = 1.0
    TOLERANCE: float = 0.001

    def __init__(self):
        super().__init__('cooing_code_controller_node')

        self.turned_on: str = "OFF"
        self.desired_angle_rad: float = math.radians(self.DESIRED_ANGLE)
        self.distance_travelled: float = 0
        self.x: float = 0
        self.y: float = 0
        self.phi_z: float = 0

        self.turn_on_robot_client = self.create_client(
            srv_type=TurnRobotOn,
            srv_name='cooing_code/turn_robot_on'
        )

        self.turn_off_robot_client = self.create_client(
            srv_type=TurnRobotOff,
            srv_name='cooing_code/turn_robot_off'
        )

        self.wheel_velocities_publisher = self.create_publisher(
            msg_type=WheelVelocities,
            topic='cooing_code/wheel_velocities',
            qos_profile=1
        )

        self.robot_pose_subscriber = self.create_subscription(
            msg_type=TaskSpacePose,
            topic='cooing_code/task_space_pose',
            qos_profile=1,
            callback=self.pose_updater_callback
        )

        while not self.turn_on_robot_client.wait_for_service(timeout_sec=2.0):
            self.get_logger().info('Turn on service unavailable')

        self.future: Future = None

        self.turn_on_robot()

        self.timer = self.create_timer(0.01, self.check_rotation)

    def turn_on_robot(self):
        request = TurnRobotOn.Request()

        self.future = self.turn_on_robot_client.call_async(request)
        self.future.add_done_callback(self.robot_turned_on)

    def robot_turned_on(self, future: Future):
        response = future.result()

        if response is not None and response.success:
            self.get_logger().info("Robot is now on")
            self.turned_on = "ON"

    def turn_off_robot(self):
        request = TurnRobotOff.Request()

        self.future = self.turn_off_robot_client.call_async(request)
        self.future.add_done_callback(self.robot_turned_off)
        self.turned_on = "OFF"

    def robot_turned_off(self, future: Future):
        response = future.result()

        if response is not None and response.success:
            self.get_logger().info("Robot is turned off")

    def rotate_to_angle(self):
        diff_between_angles = self.desired_angle_rad - self.phi_z
        angular_velocity: float

        # change the angular velocity based on how far away the robot is from its goal angle to speed up rotation
        angular_velocity = abs(diff_between_angles)
        angular_velocity = min(0.25 * angular_velocity, self.MAX_WHEEL_VELOCITY)

        wheel_velocities = WheelVelocities()

        if diff_between_angles < 0:  # clockwise turn
            wheel_velocities.right_wheel_velocity = -angular_velocity
            wheel_velocities.left_wheel_velocity = angular_velocity
        else:  # anti-clockwise turn
            wheel_velocities.right_wheel_velocity = angular_velocity
            wheel_velocities.left_wheel_velocity = -angular_velocity

        self.wheel_velocities_publisher.publish(wheel_velocities)

    def check_rotation(self):
        diff_between_angles = self.desired_angle_rad - self.phi_z

        wheel_velocities = WheelVelocities()

        if abs(diff_between_angles) <= 0.0001:
            wheel_velocities.right_wheel_velocity = 0.0
            wheel_velocities.left_wheel_velocity = 0.0
            self.wheel_velocities_publisher.publish(wheel_velocities)
            self.move_to_goal()
        else:
            self.rotate_to_angle()

    def move_to_goal(self):
        self.distance_travelled = math.sqrt(self.x**2 + self.y**2)
        wheel_velocities = WheelVelocities()

        if self.distance_travelled < self.DESIRED_DISTANCE:
            wheel_velocities.right_wheel_velocity = self.MAX_WHEEL_VELOCITY
            wheel_velocities.left_wheel_velocity = self.MAX_WHEEL_VELOCITY
            self.wheel_velocities_publisher.publish(wheel_velocities)
        else:
            wheel_velocities.right_wheel_velocity = 0.0
            wheel_velocities.left_wheel_velocity = 0.0
            self.wheel_velocities_publisher.publish(wheel_velocities)
            self.turn_off_robot()
            self.turned_on = False

    def pose_updater_callback(self, msg: TaskSpacePose):
        self.x = msg.x
        self.y = msg.y
        self.phi_z = msg.phi_z


def main(args=None):
    try:
        rclpy.init(args=args)

        cooing_code_controller_node = CooingCodeControllerNode()

        rclpy.spin(cooing_code_controller_node)
    except KeyboardInterrupt:
        pass
    except Exception as e:
        print(e)


if __name__ == '__main__':
    main()
