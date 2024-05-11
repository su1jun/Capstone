// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vizanti_msgs:srv/ManageNode.idl
// generated code does not contain a copyright notice

#ifndef VIZANTI_MSGS__SRV__DETAIL__MANAGE_NODE__BUILDER_HPP_
#define VIZANTI_MSGS__SRV__DETAIL__MANAGE_NODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vizanti_msgs/srv/detail/manage_node__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vizanti_msgs
{

namespace srv
{

namespace builder
{

class Init_ManageNode_Request_node
{
public:
  Init_ManageNode_Request_node()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::vizanti_msgs::srv::ManageNode_Request node(::vizanti_msgs::srv::ManageNode_Request::_node_type arg)
  {
    msg_.node = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vizanti_msgs::srv::ManageNode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vizanti_msgs::srv::ManageNode_Request>()
{
  return vizanti_msgs::srv::builder::Init_ManageNode_Request_node();
}

}  // namespace vizanti_msgs


namespace vizanti_msgs
{

namespace srv
{

namespace builder
{

class Init_ManageNode_Response_message
{
public:
  explicit Init_ManageNode_Response_message(::vizanti_msgs::srv::ManageNode_Response & msg)
  : msg_(msg)
  {}
  ::vizanti_msgs::srv::ManageNode_Response message(::vizanti_msgs::srv::ManageNode_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vizanti_msgs::srv::ManageNode_Response msg_;
};

class Init_ManageNode_Response_success
{
public:
  Init_ManageNode_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ManageNode_Response_message success(::vizanti_msgs::srv::ManageNode_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ManageNode_Response_message(msg_);
  }

private:
  ::vizanti_msgs::srv::ManageNode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vizanti_msgs::srv::ManageNode_Response>()
{
  return vizanti_msgs::srv::builder::Init_ManageNode_Response_success();
}

}  // namespace vizanti_msgs

#endif  // VIZANTI_MSGS__SRV__DETAIL__MANAGE_NODE__BUILDER_HPP_
