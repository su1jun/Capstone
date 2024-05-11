// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vizanti_msgs:srv/GetNodeParameters.idl
// generated code does not contain a copyright notice

#ifndef VIZANTI_MSGS__SRV__DETAIL__GET_NODE_PARAMETERS__TRAITS_HPP_
#define VIZANTI_MSGS__SRV__DETAIL__GET_NODE_PARAMETERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "vizanti_msgs/srv/detail/get_node_parameters__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace vizanti_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetNodeParameters_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: node
  {
    out << "node: ";
    rosidl_generator_traits::value_to_yaml(msg.node, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetNodeParameters_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: node
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node: ";
    rosidl_generator_traits::value_to_yaml(msg.node, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetNodeParameters_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace vizanti_msgs

namespace rosidl_generator_traits
{

[[deprecated("use vizanti_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vizanti_msgs::srv::GetNodeParameters_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  vizanti_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vizanti_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const vizanti_msgs::srv::GetNodeParameters_Request & msg)
{
  return vizanti_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<vizanti_msgs::srv::GetNodeParameters_Request>()
{
  return "vizanti_msgs::srv::GetNodeParameters_Request";
}

template<>
inline const char * name<vizanti_msgs::srv::GetNodeParameters_Request>()
{
  return "vizanti_msgs/srv/GetNodeParameters_Request";
}

template<>
struct has_fixed_size<vizanti_msgs::srv::GetNodeParameters_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vizanti_msgs::srv::GetNodeParameters_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vizanti_msgs::srv::GetNodeParameters_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace vizanti_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetNodeParameters_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: parameters
  {
    out << "parameters: ";
    rosidl_generator_traits::value_to_yaml(msg.parameters, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetNodeParameters_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: parameters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parameters: ";
    rosidl_generator_traits::value_to_yaml(msg.parameters, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetNodeParameters_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace vizanti_msgs

namespace rosidl_generator_traits
{

[[deprecated("use vizanti_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vizanti_msgs::srv::GetNodeParameters_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  vizanti_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vizanti_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const vizanti_msgs::srv::GetNodeParameters_Response & msg)
{
  return vizanti_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<vizanti_msgs::srv::GetNodeParameters_Response>()
{
  return "vizanti_msgs::srv::GetNodeParameters_Response";
}

template<>
inline const char * name<vizanti_msgs::srv::GetNodeParameters_Response>()
{
  return "vizanti_msgs/srv/GetNodeParameters_Response";
}

template<>
struct has_fixed_size<vizanti_msgs::srv::GetNodeParameters_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vizanti_msgs::srv::GetNodeParameters_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vizanti_msgs::srv::GetNodeParameters_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vizanti_msgs::srv::GetNodeParameters>()
{
  return "vizanti_msgs::srv::GetNodeParameters";
}

template<>
inline const char * name<vizanti_msgs::srv::GetNodeParameters>()
{
  return "vizanti_msgs/srv/GetNodeParameters";
}

template<>
struct has_fixed_size<vizanti_msgs::srv::GetNodeParameters>
  : std::integral_constant<
    bool,
    has_fixed_size<vizanti_msgs::srv::GetNodeParameters_Request>::value &&
    has_fixed_size<vizanti_msgs::srv::GetNodeParameters_Response>::value
  >
{
};

template<>
struct has_bounded_size<vizanti_msgs::srv::GetNodeParameters>
  : std::integral_constant<
    bool,
    has_bounded_size<vizanti_msgs::srv::GetNodeParameters_Request>::value &&
    has_bounded_size<vizanti_msgs::srv::GetNodeParameters_Response>::value
  >
{
};

template<>
struct is_service<vizanti_msgs::srv::GetNodeParameters>
  : std::true_type
{
};

template<>
struct is_service_request<vizanti_msgs::srv::GetNodeParameters_Request>
  : std::true_type
{
};

template<>
struct is_service_response<vizanti_msgs::srv::GetNodeParameters_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // VIZANTI_MSGS__SRV__DETAIL__GET_NODE_PARAMETERS__TRAITS_HPP_
