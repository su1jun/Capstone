import rclpy
from rclpy.node import Node
from std_msgs.msg import String  # 예시 메시지, 실제 메시지 타입은 사용자 정의 메시지로 변경 필요

class MotorNode(Node):
    def __init__(self):
        super().__init__('motor_node')
        self.subscription = self.create_subscription(
            String,  # 사용자 정의 메시지 타입으로 변경 필요
            'motor_control',  # 모터 제어 명령을 수신할 토픽 이름
            self.motor_callback,
            10)
        self.subscription  # prevent unused variable warning

    def motor_callback(self, msg):
        # 여기서 msg를 분석하여 motor_go, motor_left 등의 메소드 호출
        pass

def main(args=None):
    rclpy.init(args=args)
    motor_node = MotorNode()
    rclpy.spin(motor_node)
    motor_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()