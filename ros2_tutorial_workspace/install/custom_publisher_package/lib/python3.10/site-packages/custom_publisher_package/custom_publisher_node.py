from example_interfaces.msg import String 
import rclpy
from rclpy.node import Node



class CustomPublisherNode(Node):
    """A ROS2 Node that publishes an amazing quote."""

    def __init__(self):
        super().__init__('custom_publisher_node')

        self.custom_publisher = self.create_publisher(
            msg_type=String,
            topic='/custom_topic',
            qos_profile=1)

        timer_period: float = 0.5
        self.timer = self.create_timer(timer_period, self.timer_callback)

        self.incremental_id: int = 0

    def timer_callback(self):
        """Method that is periodically called by the timer."""

        custom_publisher = CustomPublisherNode()
        custom_publisher.id = self.incremental_id
        custom_publisher.data = 'custom_string'

        self.custom_publisher.publish(custom_publisher)

        self.incremental_id = self.incremental_id + 1


def main(args=None):
    """
    The main function.
    :param args: Not used directly by the user, but used by ROS2 to configure
    certain aspects of the Node.
    """
    try:
        rclpy.init(args=args)

        custom_publisher_node = CustomPublisherNode()

        rclpy.spin(custom_publisher_node)
    except KeyboardInterrupt:
        pass
    except Exception as e:
        print(e)


if __name__ == '__main__':
    main()
