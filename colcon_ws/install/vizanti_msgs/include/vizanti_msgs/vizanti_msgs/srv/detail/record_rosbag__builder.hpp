// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vizanti_msgs:srv/RecordRosbag.idl
// generated code does not contain a copyright notice

#ifndef VIZANTI_MSGS__SRV__DETAIL__RECORD_ROSBAG__BUILDER_HPP_
#define VIZANTI_MSGS__SRV__DETAIL__RECORD_ROSBAG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vizanti_msgs/srv/detail/record_rosbag__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vizanti_msgs
{

namespace srv
{

namespace builder
{

class Init_RecordRosbag_Request_path
{
public:
  explicit Init_RecordRosbag_Request_path(::vizanti_msgs::srv::RecordRosbag_Request & msg)
  : msg_(msg)
  {}
  ::vizanti_msgs::srv::RecordRosbag_Request path(::vizanti_msgs::srv::RecordRosbag_Request::_path_type arg)
  {
    msg_.path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vizanti_msgs::srv::RecordRosbag_Request msg_;
};

class Init_RecordRosbag_Request_start
{
public:
  explicit Init_RecordRosbag_Request_start(::vizanti_msgs::srv::RecordRosbag_Request & msg)
  : msg_(msg)
  {}
  Init_RecordRosbag_Request_path start(::vizanti_msgs::srv::RecordRosbag_Request::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_RecordRosbag_Request_path(msg_);
  }

private:
  ::vizanti_msgs::srv::RecordRosbag_Request msg_;
};

class Init_RecordRosbag_Request_topics
{
public:
  Init_RecordRosbag_Request_topics()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecordRosbag_Request_start topics(::vizanti_msgs::srv::RecordRosbag_Request::_topics_type arg)
  {
    msg_.topics = std::move(arg);
    return Init_RecordRosbag_Request_start(msg_);
  }

private:
  ::vizanti_msgs::srv::RecordRosbag_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vizanti_msgs::srv::RecordRosbag_Request>()
{
  return vizanti_msgs::srv::builder::Init_RecordRosbag_Request_topics();
}

}  // namespace vizanti_msgs


namespace vizanti_msgs
{

namespace srv
{

namespace builder
{

class Init_RecordRosbag_Response_message
{
public:
  explicit Init_RecordRosbag_Response_message(::vizanti_msgs::srv::RecordRosbag_Response & msg)
  : msg_(msg)
  {}
  ::vizanti_msgs::srv::RecordRosbag_Response message(::vizanti_msgs::srv::RecordRosbag_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vizanti_msgs::srv::RecordRosbag_Response msg_;
};

class Init_RecordRosbag_Response_success
{
public:
  Init_RecordRosbag_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecordRosbag_Response_message success(::vizanti_msgs::srv::RecordRosbag_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_RecordRosbag_Response_message(msg_);
  }

private:
  ::vizanti_msgs::srv::RecordRosbag_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vizanti_msgs::srv::RecordRosbag_Response>()
{
  return vizanti_msgs::srv::builder::Init_RecordRosbag_Response_success();
}

}  // namespace vizanti_msgs

#endif  // VIZANTI_MSGS__SRV__DETAIL__RECORD_ROSBAG__BUILDER_HPP_
