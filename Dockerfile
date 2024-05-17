FROM su1jun/ros_image:latest

WORKDIR /home/user/ros2_ws

COPY entrypoint.sh /home/user/ros2_ws/entrypoint.sh
RUN chmod +x /home/user/ros2_ws/entrypoint.sh

ENTRYPOINT ["/home/user/ros2_ws/entrypoint.sh"]
