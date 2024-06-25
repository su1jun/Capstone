import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, ReliabilityPolicy
from cv_bridge import CvBridge
import cv2
import numpy as np
from nav_msgs.msg import OccupancyGrid
from sensor_msgs.msg import Image
import os

class MapToImageNode(Node):
    def __init__(self):
        super().__init__('map_to_image_node')

        qos_profile = QoSProfile(depth=10)
        qos_profile.reliability = ReliabilityPolicy.RELIABLE

        self.subscription = self.create_subscription(
            OccupancyGrid,
            'map',
            self.map_callback,
            1)
        
        self.publisher = self.create_publisher(Image, 'map_image', qos_profile)
        self.bridge = CvBridge()

    def map_callback(self, msg):
        width = msg.info.width
        height = msg.info.height
        data = np.array(msg.data, dtype=np.int8).reshape(height, width)
        # Normalize the data to 0-255
        data = ((data + 100) * 255 / 200).astype(np.uint8)
        # Convert to a grayscale image
        image = cv2.cvtColor(data, cv2.COLOR_GRAY2BGR)
        # Convert to ROS Image message and publish
        image_msg = self.bridge.cv2_to_imgmsg(image, encoding="bgr8") # mono8 < gray, bgr8 < color
        self.publisher.publish(image_msg)
        self.get_logger().info('Published map image')

        cv2.imwrite('map_image.png', image)

def main(args=None):
    rclpy.init(args=args)
    node = MapToImageNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()