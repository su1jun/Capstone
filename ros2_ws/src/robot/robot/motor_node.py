import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from chip_bldc_driver.msg import Command # 모터 드라이버에 맞는 메시지 타입으로 변경

class MotorSpeedController(Node):
    def __init__(self):
        super().__init__('motor_speed_controller')
        self.subscription = self.create_subscription(
            Twist,
            '/cmd_vel',
            self.listener_callback,
            10)
        self.subscription # prevent unused variable warning

        self.left_motor_pub = self.create_publisher(Command, 'left/motor_command', 10)
        self.right_motor_pub = self.create_publisher(Command, 'right/motor_command', 10)

    def listener_callback(self, msg):
        # 여기서는 간단히 선형 속도만을 사용하여 모터 명령을 생성합니다.
        # 실제 로봇의 구조에 따라 적절히 조정해야 합니다.
        left_command = Command()
        right_command = Command()

        # 선형 속도를 모터 명령으로 변환하는 로직을 구현합니다.
        # 예를 들어, 선형 속도를 모터의 RPM으로 변환하는 경우 다음과 같이 할 수 있습니다.
        # 이 부분은 모터 드라이버의 명령 형식에 따라 변경해야 합니다.
        left_command.motor_command = msg.linear.x * 1000 # 예시: 선형 속도를 RPM으로 변환
        right_command.motor_command = msg.linear.x * 1000 # 예시: 선형 속도를 RPM으로 변환

        self.left_motor_pub.publish(left_command)
        self.right_motor_pub.publish(right_command)

def main(args=None):
    rclpy.init(args=args)

    motor_speed_controller = MotorSpeedController()

    rclpy.spin(motor_speed_controller)

    # Destroy the node explicitly
    motor_speed_controller.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()