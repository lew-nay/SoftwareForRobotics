import rclpy
from rclpy.node import Node
from package_with_interfaces.msg import AmazingQuote


class AmazingQuoteSubscriberNode(Node):
    """A ROS2 Node that receives an AmazingQuote and prints out its info"""

    def __init__(self):
        super().__init__('amazing_quote_subscriber_node')
        self.amazing_quote_subscriber = self.create_subscription(
            msg_type=AmazingQuote,
            topic='/amazing_quote',
            callback=self.amazing_quote_subscriber_callback,
            qos_profile=1)

    def amazing_quote_subscriber_callback(self, msg: AmazingQuote):
        """Method that is called when a new msg is received by the node."""

        self.get_logger().info(f"""
        I have received the most amazing of quotes.
        It says
                '{msg.quote}
        
        And it was thought by the following genius
        --- {msg.philosopher_name}
        
        This latest quote had the id={msg.id}.""")


def main(args=None):

    try:
        rclpy.init(args=args)

        amazing_quote_subscriber_node = AmazingQuoteSubscriberNode()

        rclpy.spin(amazing_quote_subscriber_node)
    except KeyboardInterrupt:
        pass
    except Exception as e:
        print(e)


if __name__ == '__main__':
    main()
