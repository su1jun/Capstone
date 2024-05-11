// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vizanti_msgs:srv/ListExecutables.idl
// generated code does not contain a copyright notice

#ifndef VIZANTI_MSGS__SRV__DETAIL__LIST_EXECUTABLES__BUILDER_HPP_
#define VIZANTI_MSGS__SRV__DETAIL__LIST_EXECUTABLES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vizanti_msgs/srv/detail/list_executables__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vizanti_msgs
{

namespace srv
{

namespace builder
{

class Init_ListExecutables_Request_package
{
public:
  Init_ListExecutables_Request_package()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::vizanti_msgs::srv::ListExecutables_Request package(::vizanti_msgs::srv::ListExecutables_Request::_package_type arg)
  {
    msg_.package = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vizanti_msgs::srv::ListExecutables_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vizanti_msgs::srv::ListExecutables_Request>()
{
  return vizanti_msgs::srv::builder::Init_ListExecutables_Request_package();
}

}  // namespace vizanti_msgs


namespace vizanti_msgs
{

namespace srv
{

namespace builder
{

class Init_ListExecutables_Response_executables
{
public:
  Init_ListExecutables_Response_executables()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::vizanti_msgs::srv::ListExecutables_Response executables(::vizanti_msgs::srv::ListExecutables_Response::_executables_type arg)
  {
    msg_.executables = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vizanti_msgs::srv::ListExecutables_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vizanti_msgs::srv::ListExecutables_Response>()
{
  return vizanti_msgs::srv::builder::Init_ListExecutables_Response_executables();
}

}  // namespace vizanti_msgs

#endif  // VIZANTI_MSGS__SRV__DETAIL__LIST_EXECUTABLES__BUILDER_HPP_
