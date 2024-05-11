// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vizanti_msgs:srv/ListPackages.idl
// generated code does not contain a copyright notice

#ifndef VIZANTI_MSGS__SRV__DETAIL__LIST_PACKAGES__TRAITS_HPP_
#define VIZANTI_MSGS__SRV__DETAIL__LIST_PACKAGES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "vizanti_msgs/srv/detail/list_packages__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace vizanti_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ListPackages_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ListPackages_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListPackages_Request & msg, bool use_flow_style = false)
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
  const vizanti_msgs::srv::ListPackages_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  vizanti_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vizanti_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const vizanti_msgs::srv::ListPackages_Request & msg)
{
  return vizanti_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<vizanti_msgs::srv::ListPackages_Request>()
{
  return "vizanti_msgs::srv::ListPackages_Request";
}

template<>
inline const char * name<vizanti_msgs::srv::ListPackages_Request>()
{
  return "vizanti_msgs/srv/ListPackages_Request";
}

template<>
struct has_fixed_size<vizanti_msgs::srv::ListPackages_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<vizanti_msgs::srv::ListPackages_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<vizanti_msgs::srv::ListPackages_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace vizanti_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ListPackages_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: packages
  {
    if (msg.packages.size() == 0) {
      out << "packages: []";
    } else {
      out << "packages: [";
      size_t pending_items = msg.packages.size();
      for (auto item : msg.packages) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ListPackages_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: packages
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.packages.size() == 0) {
      out << "packages: []\n";
    } else {
      out << "packages:\n";
      for (auto item : msg.packages) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListPackages_Response & msg, bool use_flow_style = false)
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
  const vizanti_msgs::srv::ListPackages_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  vizanti_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vizanti_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const vizanti_msgs::srv::ListPackages_Response & msg)
{
  return vizanti_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<vizanti_msgs::srv::ListPackages_Response>()
{
  return "vizanti_msgs::srv::ListPackages_Response";
}

template<>
inline const char * name<vizanti_msgs::srv::ListPackages_Response>()
{
  return "vizanti_msgs/srv/ListPackages_Response";
}

template<>
struct has_fixed_size<vizanti_msgs::srv::ListPackages_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vizanti_msgs::srv::ListPackages_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vizanti_msgs::srv::ListPackages_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vizanti_msgs::srv::ListPackages>()
{
  return "vizanti_msgs::srv::ListPackages";
}

template<>
inline const char * name<vizanti_msgs::srv::ListPackages>()
{
  return "vizanti_msgs/srv/ListPackages";
}

template<>
struct has_fixed_size<vizanti_msgs::srv::ListPackages>
  : std::integral_constant<
    bool,
    has_fixed_size<vizanti_msgs::srv::ListPackages_Request>::value &&
    has_fixed_size<vizanti_msgs::srv::ListPackages_Response>::value
  >
{
};

template<>
struct has_bounded_size<vizanti_msgs::srv::ListPackages>
  : std::integral_constant<
    bool,
    has_bounded_size<vizanti_msgs::srv::ListPackages_Request>::value &&
    has_bounded_size<vizanti_msgs::srv::ListPackages_Response>::value
  >
{
};

template<>
struct is_service<vizanti_msgs::srv::ListPackages>
  : std::true_type
{
};

template<>
struct is_service_request<vizanti_msgs::srv::ListPackages_Request>
  : std::true_type
{
};

template<>
struct is_service_response<vizanti_msgs::srv::ListPackages_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // VIZANTI_MSGS__SRV__DETAIL__LIST_PACKAGES__TRAITS_HPP_
