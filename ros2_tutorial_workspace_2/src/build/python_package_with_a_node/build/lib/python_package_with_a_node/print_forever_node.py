import rclpy
from rclpy.node import Node


class PrintForever(Node):
    """A ROS2 node that prints to the console periodically."""
    def __init__(self):
        super().__init__('print_forever')
        timer_period: float = 0.5
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.print_count: int = 0

    def timer_callback(self):
        """The method that is called by the timer"""
        self.get_logger().info(f'Printed {self.print_count} times.')
        self.print_count = self.print_count + 1


def main(args=None):
    """
    The main function
    :param args: not used directly by user
    """

    try:
        rclpy.init(args=args)

        print_forever_node = PrintForever()

        rclpy.spin(print_forever_node)
    except KeyboardInterrupt:
        pass
    except Exception as e:
        print(e)


if __name__ == '__main__':
    main()
