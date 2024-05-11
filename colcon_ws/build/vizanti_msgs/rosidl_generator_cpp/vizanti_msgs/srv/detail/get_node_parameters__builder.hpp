// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vizanti_msgs:srv/GetNodeParameters.idl
// generated code does not contain a copyright notice

#ifndef VIZANTI_MSGS__SRV__DETAIL__GET_NODE_PARAMETERS__BUILDER_HPP_
#define VIZANTI_MSGS__SRV__DETAIL__GET_NODE_PARAMETERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vizanti_msgs/srv/detail/get_node_parameters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vizanti_msgs
{

namespace srv
{

namespace builder
{

class Init_GetNodeParameters_Request_node
{
public:
  Init_GetNodeParameters_Request_node()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::vizanti_msgs::srv::GetNodeParameters_Request node(::vizanti_msgs::srv::GetNodeParameters_Request::_node_type arg)
  {
    msg_.node = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vizanti_msgs::srv::GetNodeParameters_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vizanti_msgs::srv::GetNodeParameters_Request>()
{
  return vizanti_msgs::srv::builder::Init_GetNodeParameters_Request_node();
}

}  // namespace vizanti_msgs


namespace vizanti_msgs
{

namespace srv
{

namespace builder
{

class Init_GetNodeParameters_Response_parameters
{
public:
  Init_GetNodeParameters_Response_parameters()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::vizanti_msgs::srv::GetNodeParameters_Response parameters(::vizanti_msgs::srv::GetNodeParameters_Response::_parameters_type arg)
  {
    msg_.parameters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vizanti_msgs::srv::GetNodeParameters_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vizanti_msgs::srv::GetNodeParameters_Response>()
{
  return vizanti_msgs::srv::builder::Init_GetNodeParameters_Response_parameters();
}

}  // namespace vizanti_msgs

#endif  // VIZANTI_MSGS__SRV__DETAIL__GET_NODE_PARAMETERS__BUILDER_HPP_
