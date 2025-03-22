import rclpy
from rclpy.node import Node
from example_interfaces.msg import String


class AuditoriumPublisherNode(Node):

    def __int__(self):
        super().__init__('auditorium_subscriber_node')

        self.auditorium_node_subscriber = self.create_subscription(
            msg_type=String,
            topic='/inspect',
            callback=self.auditorium_node_subscriber_callback,
            qos_profile=1
        )

        timer_period: float = 2
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.incremental_id: int = 0

    def auditorium_nod_subscriber_callback(self):
        message = str(373)
        self.get_logger().info(message)


def main():
    try:
        rclpy.init(args=args)
        auditorium_subscriber_node = AuditoriumPublisherNode(self)
        rclpy.spin(auditorium_subscriber_node)
    except KeyboardInterrupt:
        pass
    except Exception as e:
        print(e)


if __name__ == '__main__':
    main()
