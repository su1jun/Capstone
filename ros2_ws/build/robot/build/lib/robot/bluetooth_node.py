import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import RPi.GPIO as GPIO
import time, threading, serial
from .const import *

class BluetoothNode(Node):
    def __init__(self):
        super().__init__('bluetooth_input_node')
        self.setup_bluetooth()
        self.is_running = True
        task1 = threading.Thread(target=self.serial_thread)
        task1.start()

        self.publisher_ = self.create_publisher(String, 'bluetooth_topic', 10)
        self.timer = self.create_timer(0.2, self.timer_callback)
        self.get_logger().info('Bluetooth Node has been started')

    def __del__(self):
        self.is_running = False
        self.bleSerial.close()

    def timer_callback(self):
        try:
            bluetooth_state = self.read_bluetooth()
        except Exception as e:
            self.get_logger().info(f"bluetooth decode err : {e}")

        msg = String(data=bluetooth_state)
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % bluetooth_state)

    def setup_bluetooth(self):
        try:
            # print(BLUETHOOTH)
            self.bleSerial = serial.Serial(BLUETHOOTH, baudrate=9600, timeout=0.2)
            self.gData = ""
        except serial.SerialException as e:
            self.get_logger().info(f"bluetooth connect err: {e}")

    def read_bluetooth(self):
        res = ''
        self.gData = self.bleSerial.readline().decode()
        if "go" in self.gData:
            self.gData = ""
            res = "go"
        elif "back" in self.gData:
            self.gData = ""
            res = "back"
        elif "left" in self.gData:
            self.gData = ""
            res = "left"
        elif "right" in self.gData:
            self.gData = ""
            res = "right"
        elif "stop" in self.gData:
            self.gData = ""
            res = "stop"
        return res
    
    def serial_thread(self):
        while self.is_running:
            try:
                data = self.bleSerial.readline()
                data = data.decode()
                self.gData = data
            except Exception as e:
                self.get_logger().info(f"thread err: {e}")
                self.is_running = False

def main(args=None):
    rclpy.init(args=args)
    bluetooth_node = BluetoothNode()

    rclpy.spin(bluetooth_node)

    bluetooth_node.destroy_node()
    rclpy.shutdown()
    GPIO.cleanup()

if __name__ == '__main__':
    main()
    