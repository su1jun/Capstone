// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vizanti_msgs:srv/RecordRosbag.idl
// generated code does not contain a copyright notice

#ifndef VIZANTI_MSGS__SRV__DETAIL__RECORD_ROSBAG__TRAITS_HPP_
#define VIZANTI_MSGS__SRV__DETAIL__RECORD_ROSBAG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "vizanti_msgs/srv/detail/record_rosbag__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace vizanti_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RecordRosbag_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: topics
  {
    if (msg.topics.size() == 0) {
      out << "topics: []";
    } else {
      out << "topics: [";
      size_t pending_items = msg.topics.size();
      for (auto item : msg.topics) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: start
  {
    out << "start: ";
    rosidl_generator_traits::value_to_yaml(msg.start, out);
    out << ", ";
  }

  // member: path
  {
    out << "path: ";
    rosidl_generator_traits::value_to_yaml(msg.path, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RecordRosbag_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: topics
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.topics.size() == 0) {
      out << "topics: []\n";
    } else {
      out << "topics:\n";
      for (auto item : msg.topics) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start: ";
    rosidl_generator_traits::value_to_yaml(msg.start, out);
    out << "\n";
  }

  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path: ";
    rosidl_generator_traits::value_to_yaml(msg.path, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RecordRosbag_Request & msg, bool use_flow_style = false)
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
  const vizanti_msgs::srv::RecordRosbag_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  vizanti_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vizanti_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const vizanti_msgs::srv::RecordRosbag_Request & msg)
{
  return vizanti_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<vizanti_msgs::srv::RecordRosbag_Request>()
{
  return "vizanti_msgs::srv::RecordRosbag_Request";
}

template<>
inline const char * name<vizanti_msgs::srv::RecordRosbag_Request>()
{
  return "vizanti_msgs/srv/RecordRosbag_Request";
}

template<>
struct has_fixed_size<vizanti_msgs::srv::RecordRosbag_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vizanti_msgs::srv::RecordRosbag_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vizanti_msgs::srv::RecordRosbag_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace vizanti_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RecordRosbag_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RecordRosbag_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RecordRosbag_Response & msg, bool use_flow_style = false)
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
  const vizanti_msgs::srv::RecordRosbag_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  vizanti_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vizanti_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const vizanti_msgs::srv::RecordRosbag_Response & msg)
{
  return vizanti_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<vizanti_msgs::srv::RecordRosbag_Response>()
{
  return "vizanti_msgs::srv::RecordRosbag_Response";
}

template<>
inline const char * name<vizanti_msgs::srv::RecordRosbag_Response>()
{
  return "vizanti_msgs/srv/RecordRosbag_Response";
}

template<>
struct has_fixed_size<vizanti_msgs::srv::RecordRosbag_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vizanti_msgs::srv::RecordRosbag_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vizanti_msgs::srv::RecordRosbag_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vizanti_msgs::srv::RecordRosbag>()
{
  return "vizanti_msgs::srv::RecordRosbag";
}

template<>
inline const char * name<vizanti_msgs::srv::RecordRosbag>()
{
  return "vizanti_msgs/srv/RecordRosbag";
}

template<>
struct has_fixed_size<vizanti_msgs::srv::RecordRosbag>
  : std::integral_constant<
    bool,
    has_fixed_size<vizanti_msgs::srv::RecordRosbag_Request>::value &&
    has_fixed_size<vizanti_msgs::srv::RecordRosbag_Response>::value
  >
{
};

template<>
struct has_bounded_size<vizanti_msgs::srv::RecordRosbag>
  : std::integral_constant<
    bool,
    has_bounded_size<vizanti_msgs::srv::RecordRosbag_Request>::value &&
    has_bounded_size<vizanti_msgs::srv::RecordRosbag_Response>::value
  >
{
};

template<>
struct is_service<vizanti_msgs::srv::RecordRosbag>
  : std::true_type
{
};

template<>
struct is_service_request<vizanti_msgs::srv::RecordRosbag_Request>
  : std::true_type
{
};

template<>
struct is_service_response<vizanti_msgs::srv::RecordRosbag_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // VIZANTI_MSGS__SRV__DETAIL__RECORD_ROSBAG__TRAITS_HPP_
