import rclpy
from rclpy.node import Node
import camera, motor, const
# 필요한 메시지 타입 import

def main(args=None):
    rclpy.init(args=args)
    camera_node = CameraNode()
    motor_node = MotorNode()

    executor = rclpy.executors.MultiThreadedExecutor()
    executor.add_node(camera_node)
    executor.add_node(motor_node)

    try:
        executor.spin()
    finally:
        camera_node.destroy_node()
        motor_node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()