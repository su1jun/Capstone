// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vizanti_msgs:srv/SetNodeParameter.idl
// generated code does not contain a copyright notice

#ifndef VIZANTI_MSGS__SRV__DETAIL__SET_NODE_PARAMETER__BUILDER_HPP_
#define VIZANTI_MSGS__SRV__DETAIL__SET_NODE_PARAMETER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vizanti_msgs/srv/detail/set_node_parameter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vizanti_msgs
{

namespace srv
{

namespace builder
{

class Init_SetNodeParameter_Request_value
{
public:
  explicit Init_SetNodeParameter_Request_value(::vizanti_msgs::srv::SetNodeParameter_Request & msg)
  : msg_(msg)
  {}
  ::vizanti_msgs::srv::SetNodeParameter_Request value(::vizanti_msgs::srv::SetNodeParameter_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vizanti_msgs::srv::SetNodeParameter_Request msg_;
};

class Init_SetNodeParameter_Request_param
{
public:
  explicit Init_SetNodeParameter_Request_param(::vizanti_msgs::srv::SetNodeParameter_Request & msg)
  : msg_(msg)
  {}
  Init_SetNodeParameter_Request_value param(::vizanti_msgs::srv::SetNodeParameter_Request::_param_type arg)
  {
    msg_.param = std::move(arg);
    return Init_SetNodeParameter_Request_value(msg_);
  }

private:
  ::vizanti_msgs::srv::SetNodeParameter_Request msg_;
};

class Init_SetNodeParameter_Request_node
{
public:
  Init_SetNodeParameter_Request_node()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetNodeParameter_Request_param node(::vizanti_msgs::srv::SetNodeParameter_Request::_node_type arg)
  {
    msg_.node = std::move(arg);
    return Init_SetNodeParameter_Request_param(msg_);
  }

private:
  ::vizanti_msgs::srv::SetNodeParameter_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vizanti_msgs::srv::SetNodeParameter_Request>()
{
  return vizanti_msgs::srv::builder::Init_SetNodeParameter_Request_node();
}

}  // namespace vizanti_msgs


namespace vizanti_msgs
{

namespace srv
{

namespace builder
{

class Init_SetNodeParameter_Response_status
{
public:
  Init_SetNodeParameter_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::vizanti_msgs::srv::SetNodeParameter_Response status(::vizanti_msgs::srv::SetNodeParameter_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vizanti_msgs::srv::SetNodeParameter_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vizanti_msgs::srv::SetNodeParameter_Response>()
{
  return vizanti_msgs::srv::builder::Init_SetNodeParameter_Response_status();
}

}  // namespace vizanti_msgs

#endif  // VIZANTI_MSGS__SRV__DETAIL__SET_NODE_PARAMETER__BUILDER_HPP_
