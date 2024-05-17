#!/bin/bash
set -e

# ROS 2 환경 설정
source ~/.bashrc

cd ~/ros2_ws

# 각 명령어를 백그라운드에서 실행
ros2 launch capstone launch_robot.launch.py &
ros2 launch slam_toolbox online_async_launch.py params_file:=./src/capstone/config/mapping_param.yaml use_sim_time:=false &
ros2 launch nav2_bringup navigation_launch.py use_sim_time:=false &
ros2 launch vizanti_server vizanti_server.launch.py &

# 모든 백그라운드 프로세스가 종료될 때까지 대기
wait -n

# 종료 코드 반환
exit $?