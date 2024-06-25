import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import RPi.GPIO as GPIO
from .const import *

class MotorSpeedController(Node):
    def __init__(self, test):
        super().__init__('motor_speed_controller')

        self.setup_gpio(test)

        self.subscription = self.create_subscription(
            Twist,
            '/cmd_vel',
            self.listener_callback,
            10)
        # self.subscription # prevent unused variable warning

        self.left_vel = 0.0
        self.right_vel = 0.0
        
        self.last_cmd_vel_time = self.get_clock().now()
        self.cmd_vel_timeout = 0.6  # Stop motors if no cmd_vel received for 0.1 seconds
        
        self.timer = self.create_timer(0.1, self.timer_callback)  # Check every 0.1 seconds

        self.get_logger().info('Motor Node has been started')

    def __del__(self):
        pass
    
    def listener_callback(self, msg):
        linear_vel = msg.linear.x
        angular_vel = msg.angular.z

        diff = angular_vel * P

        left_vel = linear_vel * K - diff
        right_vel = linear_vel * K + diff

        left_vel = min(max(left_vel, -100), 100)
        right_vel = min(max(right_vel, -100), 100)

        self.motor_go(left_vel, right_vel)
        self.get_logger().info(f'left = {left_vel:+3.0f}, right = {right_vel:+3.0f}')

        self.last_cmd_vel_time = self.get_clock().now()  # Update last time cmd_vel was received

    def timer_callback(self):
        if (self.get_clock().now() - self.last_cmd_vel_time).nanoseconds * 1e-9 > self.cmd_vel_timeout:
            self.motor_go(0, 0)  # Stop motors
    
    def setup_gpio(self, test=False):
        self.SH = test
        
        GPIO.setwarnings(False)
        GPIO.setmode(GPIO.BCM)
        
        GPIO.setup(PWMA, GPIO.OUT)
        GPIO.setup(AIN[0], GPIO.OUT)
        GPIO.setup(AIN[1], GPIO.OUT)
        
        GPIO.setup(PWMB, GPIO.OUT)
        GPIO.setup(BIN[0], GPIO.OUT)
        GPIO.setup(BIN[1], GPIO.OUT)

        GPIO.setup(LED[0], GPIO.OUT)
        GPIO.setup(LED[1], GPIO.OUT)
        GPIO.setup(LED[2], GPIO.OUT)
        GPIO.setup(LED[3], GPIO.OUT)

        self.L_Motor = GPIO.PWM(PWMA,500)
        self.L_Motor.start(0)

        self.R_Motor = GPIO.PWM(PWMB,500)
        self.R_Motor.start(0)

        GPIO.output(LED[0], GPIO.HIGH)
        GPIO.output(LED[1], GPIO.HIGH)
        GPIO.output(LED[2], GPIO.LOW)
        GPIO.output(LED[3], GPIO.LOW)

        GPIO.output(AIN[0], 0)
        GPIO.output(AIN[1], 1)
        GPIO.output(BIN[0], 0)
        GPIO.output(BIN[1], 1)
        
        if not self.SH:
            self.L_Motor.ChangeDutyCycle(START_SPEED)
            self.R_Motor.ChangeDutyCycle(START_SPEED)

    def motor_go(self, l_speed, r_speed):
        if l_speed > r_speed:
            GPIO.output(LED[0],GPIO.HIGH)
            GPIO.output(LED[1],GPIO.LOW)
            GPIO.output(LED[2],GPIO.HIGH)
            GPIO.output(LED[3],GPIO.LOW)

        elif l_speed < r_speed:
            GPIO.output(LED[0],GPIO.LOW)
            GPIO.output(LED[1],GPIO.HIGH)
            GPIO.output(LED[2],GPIO.LOW)
            GPIO.output(LED[3],GPIO.HIGH)

        else:
            GPIO.output(LED[0],GPIO.HIGH)
            GPIO.output(LED[1],GPIO.HIGH)
            GPIO.output(LED[2],GPIO.LOW)
            GPIO.output(LED[3],GPIO.LOW)

        if l_speed >= 0:
            GPIO.output(AIN[0], 0)
            GPIO.output(AIN[1], 1)
        else:
            GPIO.output(AIN[0], 1)
            GPIO.output(AIN[1], 0)
            l_speed = -l_speed 
        
        if r_speed >= 0:
            GPIO.output(BIN[0], 0)
            GPIO.output(BIN[1], 1)
        else:
            GPIO.output(BIN[0], 1)
            GPIO.output(BIN[1], 0)
            r_speed = -r_speed 
            
        # l_speed = min(l_speed, 100)
        # r_speed = min(r_speed, 100)
        
        if not self.SH:
            self.L_Motor.ChangeDutyCycle(l_speed)
            self.R_Motor.ChangeDutyCycle(r_speed)
             
    def motor_left(self, speed=100):
        GPIO.output(LED[0],GPIO.HIGH)
        GPIO.output(LED[1],GPIO.LOW)
        GPIO.output(LED[2],GPIO.HIGH)
        GPIO.output(LED[3],GPIO.LOW)

        GPIO.output(AIN[0],1)
        GPIO.output(AIN[1],0)
        GPIO.output(BIN[0],0)
        GPIO.output(BIN[1],1)

        if not self.SH:
            self.L_Motor.ChangeDutyCycle(speed)
            self.R_Motor.ChangeDutyCycle(speed)
        
    def motor_right(self, speed=100):
        GPIO.output(LED[0],GPIO.LOW)
        GPIO.output(LED[1],GPIO.HIGH)
        GPIO.output(LED[2],GPIO.LOW)
        GPIO.output(LED[3],GPIO.HIGH)
        
        GPIO.output(AIN[0],0)
        GPIO.output(AIN[1],1)
        GPIO.output(BIN[0],1)
        GPIO.output(BIN[1],0)

        if not self.SH:
            self.L_Motor.ChangeDutyCycle(speed)
            self.R_Motor.ChangeDutyCycle(speed)

    def motor_back(self, speed=100):
        GPIO.output(LED[0],GPIO.LOW)
        GPIO.output(LED[1],GPIO.LOW)
        GPIO.output(LED[2],GPIO.HIGH)
        GPIO.output(LED[3],GPIO.HIGH)
        
        GPIO.output(AIN[0], 1)
        GPIO.output(AIN[1], 0)
        GPIO.output(BIN[0], 1)
        GPIO.output(BIN[1], 0)

        if not self.SH:
            self.L_Motor.ChangeDutyCycle(speed)
            self.R_Motor.ChangeDutyCycle(speed)

    def motor_stop(self):
        GPIO.output(LED[0],GPIO.LOW)
        GPIO.output(LED[1],GPIO.LOW)
        GPIO.output(LED[2],GPIO.LOW)
        GPIO.output(LED[3],GPIO.LOW)
        
        GPIO.output(AIN[0],0)
        GPIO.output(AIN[1],1)
        GPIO.output(BIN[0],0)
        GPIO.output(BIN[1],1)

        if not self.SH:
            self.L_Motor.ChangeDutyCycle(0)
            self.R_Motor.ChangeDutyCycle(0)

def main(args=None):
    rclpy.init(args=args)
    motor_speed_controller = MotorSpeedController(SH)

    rclpy.spin(motor_speed_controller)

    motor_speed_controller.destroy_node()
    rclpy.shutdown()
    GPIO.cleanup()

if __name__ == '__main__':
    main()