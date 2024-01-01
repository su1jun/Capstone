import rclpy
from rclpy.node import Node
from std_msgs.msg import String  # Replace with appropriate message type
import RPi.GPIO as GPIO
from const import *

class MotorNode(Node):
    def __init__(self, test):
        super().__init__('motor_control_node')

        self.setup_gpio(test)
        # Update topic and message type
        self.subscription = self.create_subscription(
            String, 
            'switch_topic', 
            self.listener_callback, 
            10)
        self.subscription  # prevent unused variable warning

    def __del__(self):
        GPIO.cleanup()

    def timer_callback(self):
        # Implement logic here
        msg = String()  # Update with appropriate message type
        # Update msg data
        self.publisher_.publish(msg)

    def listener_callback(self, msg):
        switch_state = msg.data
        if switch_state == 'go':
            self.motor_go(50, 50)
        elif switch_state == 'left':
            self.motor_left(50)
        elif switch_state == 'right':
            self.motor_right(50)
        elif switch_state == 'back':
            self.motor_go(-50, -50)
        elif switch_state == 'stop':
            self.motor_stop(50, 50)

    def setup_gpio(self, test=False):
        # self.SW = [5, 6, 13, 19]
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

        if self.SH:
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
            
        l_speed = min(l_speed, 100)
        r_speed = min(r_speed, 100)
        
        if self.SH:
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

        if self.SH:
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

        if self.SH:
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

        if self.SH:
            self.L_Motor.ChangeDutyCycle(0)
            self.R_Motor.ChangeDutyCycle(0)

def main(args=None):
    rclpy.init(args=args)
    motor_control_node = MotorNode(SH)

    rclpy.spin(motor_control_node)

    motor_control_node.destroy_node()
    rclpy.shutdown()
    GPIO.cleanup()

if __name__ == '__main__':
    main()
    