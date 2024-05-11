// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vizanti_msgs:srv/ListPackages.idl
// generated code does not contain a copyright notice

#ifndef VIZANTI_MSGS__SRV__DETAIL__LIST_PACKAGES__BUILDER_HPP_
#define VIZANTI_MSGS__SRV__DETAIL__LIST_PACKAGES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vizanti_msgs/srv/detail/list_packages__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vizanti_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vizanti_msgs::srv::ListPackages_Request>()
{
  return ::vizanti_msgs::srv::ListPackages_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace vizanti_msgs


namespace vizanti_msgs
{

namespace srv
{

namespace builder
{

class Init_ListPackages_Response_packages
{
public:
  Init_ListPackages_Response_packages()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::vizanti_msgs::srv::ListPackages_Response packages(::vizanti_msgs::srv::ListPackages_Response::_packages_type arg)
  {
    msg_.packages = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vizanti_msgs::srv::ListPackages_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vizanti_msgs::srv::ListPackages_Response>()
{
  return vizanti_msgs::srv::builder::Init_ListPackages_Response_packages();
}

}  // namespace vizanti_msgs

#endif  // VIZANTI_MSGS__SRV__DETAIL__LIST_PACKAGES__BUILDER_HPP_
