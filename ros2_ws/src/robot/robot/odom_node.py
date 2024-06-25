#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
import matplotlib.pyplot as plt
import matplotlib.image as mpimg
from nav_msgs.msg import Odometry
import numpy as np

class RobotPositionListener(Node):
    def __init__(self):
        super().__init__('robot_position_listener')
        self.subscription = self.create_subscription(
            Odometry,
            '/diff_cont/odom',
            self.listener_callback,
            10)
        self.subscription
        self.robot_position = None

    def listener_callback(self, msg):
        # 로봇의 현재 위치와 방향을 출력합니다.
        position = msg.pose.pose.position
        orientation = msg.pose.pose.orientation
        self.robot_position = (msg.pose.pose.position.x, msg.pose.pose.position.y)
        print(f"Position: x={position.x}, y={position.y}, z={position.z}")
        # print(f"Orientation: x={orientation.x}, y={orientation.y}, z={orientation.z}, w={orientation.w}")

        img = mpimg.imread('map_image.png')
        plt.imshow(img, origin='lower')

        # 로봇의 위치에 마커를 표시합니다.
        if self.robot_position is not None:
            plt.scatter(*self.robot_position, color='red', s=100, marker='x')

        # 축 라벨을 숨기고 이미지를 파일로 저장합니다.
        plt.axis('off')
        plt.savefig('map_marker.png', bbox_inches='tight', pad_inches=0)
        plt.close()

def main(args=None):
    rclpy.init(args=args)

    robot_position_listener = RobotPositionListener()
    rclpy.spin(robot_position_listener)

    # 노드 종료
    robot_position_listener.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()