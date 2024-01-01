import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import RPi.GPIO as GPIO
import time
from const import *

class SwitchInputNode(Node):
    def __init__(self):
        super().__init__('switch_input_node')
        self.setup_gpio()

        self.publisher_ = self.create_publisher(String, 'switch_topic', 10)
        self.timer = self.create_timer(0.1, self.timer_callback)

    def __del__(self):
        GPIO.cleanup()

    def timer_callback(self):
        switch_state = self.read_switches()
        msg = String(data=switch_state)
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % switch_state)

    def setup_gpio(self):
        GPIO.setwarnings(False)
        GPIO.setmode(GPIO.BCM)
        GPIO.setup(SW[0],GPIO.IN,pull_up_down=GPIO.PUD_DOWN)
        GPIO.setup(SW[1],GPIO.IN,pull_up_down=GPIO.PUD_DOWN)
        GPIO.setup(SW[2],GPIO.IN,pull_up_down=GPIO.PUD_DOWN)
        GPIO.setup(SW[3],GPIO.IN,pull_up_down=GPIO.PUD_DOWN)

    def read_switches(self):
        res = ''
        if GPIO.input(SW[0]) == 1:
            res = "go"
        elif GPIO.input(SW[1]) == 1:
            res = "right"
        elif GPIO.input(SW[2]) == 1:
            res = "left"
        elif GPIO.input(SW[3]) == 1:
            res = "back"
        else:
            res = "stop"
        return res

def main(args=None):
    rclpy.init(args=args)
    switch_input_node = SwitchInputNode()

    rclpy.spin(switch_input_node)

    switch_input_node.destroy_node()
    rclpy.shutdown()
    GPIO.cleanup()

if __name__ == '__main__':
    main()
    