import rclpy
from rclpy.node import Node
from cooing_code_interfaces.msg import WheelVelocities, TaskSpacePose
from cooing_code_interfaces.srv import TurnRobotOn, TurnRobotOff
import math


class CooingCode(Node):
    # CONSTANTS
    WHEEL_RADIUS: float = 0.09
    DIST_BETWEEN_WHEELS: float = 0.15
    MIN_WHEEL_VELOCITY: float = -0.1
    MAX_WHEEL_VELOCITY: float = 1
    POSE_UPDATE_INTERVAL: float = 0.01

    def __init__(self):
        super().__init__('cooing_node')

        self.turned_on: str = "OFF"
        self.x: float = 0.0
        self.y: float = 0.0
        self.phi_z: float = 0.0
        self.left_wheel_velocity: float = 0.0
        self.right_wheel_velocity: float = 0.0

        self.turn_robot_on = self.create_service(
            srv_type=TurnRobotOn,
            srv_name='cooing_code/turn_robot_on',
            callback=self.turn_on_service
        )

        self.turn_robot_off = self.create_service(
            srv_type=TurnRobotOff,
            srv_name='cooing_code/turn_robot_off',
            callback=self.turn_off_service
        )

        self.robot_pose_publisher = self.create_publisher(
            msg_type=TaskSpacePose,
            topic='cooing_code/task_space_pose',
            qos_profile=1
        )

        self.wheel_velocity_subscriber = self.create_subscription(
            msg_type=WheelVelocities,
            topic='cooing_code/wheel_velocities',
            callback=self.wheel_velocity_updater,
            qos_profile=1
        )

        self.pose_updater = self.create_timer(self.POSE_UPDATE_INTERVAL, self.robot_pose_updater)

        self.publisher_timer_period: float = 0.1
        self.publisher_timer = self.create_timer(self.publisher_timer_period, self.robot_publisher)

    def turn_on_service(self, request: TurnRobotOn.Request, response: TurnRobotOn.Response) -> TurnRobotOn.Response:
        """Service to turn on the robot"""

        if self.turned_on == "ON":
            self.get_logger().info("Already turned on")
            success: bool = False
            response.success = success
        else:
            success: bool = True
            response.success = success
            self.get_logger().info("Robot is now on.")
            self.turned_on = "ON"
        return response

    def turn_off_service(self, request: TurnRobotOff.Request, response: TurnRobotOff.Response) -> TurnRobotOff.Response:
        """Service to turn off the robot"""

        if self.turned_on == "OFF":
            self.get_logger().info("Already turned off")
            success: bool = False
            response.success = success
        else:
            success: bool = True
            response.success = success
            self.get_logger().info("Robot is now off.")
            self.left_wheel_velocity = 0
            self.right_wheel_velocity = 0
            self.turned_on = "OFF"
        return response

    def wheel_velocity_updater(self, msg: WheelVelocities):
        """Method called to update wheel velocities received"""

        if self.turned_on == "OFF":
            self.get_logger().info("Robot is off. wheel_velocity_updater ignoring topic")
        else:
            self.right_wheel_velocity = max(self.MIN_WHEEL_VELOCITY, min(msg.right_wheel_velocity, self.MAX_WHEEL_VELOCITY))
            self.left_wheel_velocity = max(self.MIN_WHEEL_VELOCITY, min(msg.left_wheel_velocity, self.MAX_WHEEL_VELOCITY))

    def robot_pose_updater(self):
        """Method called by timer at 10Hz to update the robot pose"""

        if self.turned_on == "OFF":
            self.get_logger().info("Robot is off. robot_pose_callback ignoring topic")
        else:
            linear_velocity = (self.WHEEL_RADIUS / 2)\
                              * (self.right_wheel_velocity + self.left_wheel_velocity)
            angular_velocity = (self.WHEEL_RADIUS / self.DIST_BETWEEN_WHEELS)\
                               * (self.right_wheel_velocity - self.left_wheel_velocity)

            updated_x = self.x + (linear_velocity * math.cos(self.phi_z) * self.POSE_UPDATE_INTERVAL)
            updated_y = self.y + (linear_velocity * math.sin(self.phi_z) * self.POSE_UPDATE_INTERVAL)
            updated_phi_z = self.phi_z + (angular_velocity * self.POSE_UPDATE_INTERVAL)

            self.x = updated_x
            self.y = updated_y
            self.phi_z = updated_phi_z

    def robot_publisher(self):
        robot_pose = TaskSpacePose()
        robot_pose.x = self.x
        robot_pose.y = self.y
        robot_pose.phi_z = self.phi_z

        self.robot_pose_publisher.publish(robot_pose)


def main(args=None):
    try:
        rclpy.init(args=args)

        cooing_code = CooingCode()

        rclpy.spin(cooing_code)
    except KeyboardInterrupt:
        pass
    except Exception as e:
        print(e)


if __name__ == '__main__':
    main()
