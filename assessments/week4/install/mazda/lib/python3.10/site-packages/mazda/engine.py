import rclpy
from rclpy.node import Node
from example_interfaces.msg import String


class EngineNode(Node):

    def __init__(self):
        super().__init__('engine_node')

        self.engine_node_publisher = self.create_publisher(
            msg_type=String,
            topic='/inspect',
            qos_profile=1)

        timer_period: float = 2
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.incremental_id: int = 0

    def timer_callback(self):
        engine = EngineNode()
        engine.id = self.incremental_id
        engine.data = str(373)

        self.engine_node_publisher.publish(engine)

        self.incremental_id = self.incremental_id + 1


def main(args=None):

    try:
        rclpy.init(args=args)

        engine_node_publisher_node = EngineNode()

        rclpy.spin(engine_node_publisher_node)
    except KeyboardInterrupt:
        pass
    except Exception as e:
        print(e)


if __name__ == '__main__':
    main()
