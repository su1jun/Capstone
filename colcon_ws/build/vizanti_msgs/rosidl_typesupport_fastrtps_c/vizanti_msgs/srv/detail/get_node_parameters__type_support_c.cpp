// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from vizanti_msgs:srv/GetNodeParameters.idl
// generated code does not contain a copyright notice
#include "vizanti_msgs/srv/detail/get_node_parameters__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "vizanti_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "vizanti_msgs/srv/detail/get_node_parameters__struct.h"
#include "vizanti_msgs/srv/detail/get_node_parameters__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // node
#include "rosidl_runtime_c/string_functions.h"  // node

// forward declare type support functions


using _GetNodeParameters_Request__ros_msg_type = vizanti_msgs__srv__GetNodeParameters_Request;

static bool _GetNodeParameters_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetNodeParameters_Request__ros_msg_type * ros_message = static_cast<const _GetNodeParameters_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: node
  {
    const rosidl_runtime_c__String * str = &ros_message->node;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _GetNodeParameters_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetNodeParameters_Request__ros_msg_type * ros_message = static_cast<_GetNodeParameters_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: node
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->node.data) {
      rosidl_runtime_c__String__init(&ros_message->node);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->node,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'node'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vizanti_msgs
size_t get_serialized_size_vizanti_msgs__srv__GetNodeParameters_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetNodeParameters_Request__ros_msg_type * ros_message = static_cast<const _GetNodeParameters_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name node
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->node.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GetNodeParameters_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_vizanti_msgs__srv__GetNodeParameters_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vizanti_msgs
size_t max_serialized_size_vizanti_msgs__srv__GetNodeParameters_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: node
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = vizanti_msgs__srv__GetNodeParameters_Request;
    is_plain =
      (
      offsetof(DataType, node) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetNodeParameters_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_vizanti_msgs__srv__GetNodeParameters_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetNodeParameters_Request = {
  "vizanti_msgs::srv",
  "GetNodeParameters_Request",
  _GetNodeParameters_Request__cdr_serialize,
  _GetNodeParameters_Request__cdr_deserialize,
  _GetNodeParameters_Request__get_serialized_size,
  _GetNodeParameters_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetNodeParameters_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetNodeParameters_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vizanti_msgs, srv, GetNodeParameters_Request)() {
  return &_GetNodeParameters_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "vizanti_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "vizanti_msgs/srv/detail/get_node_parameters__struct.h"
// already included above
// #include "vizanti_msgs/srv/detail/get_node_parameters__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/string.h"  // parameters
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // parameters

// forward declare type support functions


using _GetNodeParameters_Response__ros_msg_type = vizanti_msgs__srv__GetNodeParameters_Response;

static bool _GetNodeParameters_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetNodeParameters_Response__ros_msg_type * ros_message = static_cast<const _GetNodeParameters_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: parameters
  {
    const rosidl_runtime_c__String * str = &ros_message->parameters;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _GetNodeParameters_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetNodeParameters_Response__ros_msg_type * ros_message = static_cast<_GetNodeParameters_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: parameters
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->parameters.data) {
      rosidl_runtime_c__String__init(&ros_message->parameters);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->parameters,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'parameters'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vizanti_msgs
size_t get_serialized_size_vizanti_msgs__srv__GetNodeParameters_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetNodeParameters_Response__ros_msg_type * ros_message = static_cast<const _GetNodeParameters_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name parameters
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->parameters.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GetNodeParameters_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_vizanti_msgs__srv__GetNodeParameters_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vizanti_msgs
size_t max_serialized_size_vizanti_msgs__srv__GetNodeParameters_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: parameters
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = vizanti_msgs__srv__GetNodeParameters_Response;
    is_plain =
      (
      offsetof(DataType, parameters) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetNodeParameters_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_vizanti_msgs__srv__GetNodeParameters_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetNodeParameters_Response = {
  "vizanti_msgs::srv",
  "GetNodeParameters_Response",
  _GetNodeParameters_Response__cdr_serialize,
  _GetNodeParameters_Response__cdr_deserialize,
  _GetNodeParameters_Response__get_serialized_size,
  _GetNodeParameters_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetNodeParameters_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetNodeParameters_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vizanti_msgs, srv, GetNodeParameters_Response)() {
  return &_GetNodeParameters_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "vizanti_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "vizanti_msgs/srv/get_node_parameters.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetNodeParameters__callbacks = {
  "vizanti_msgs::srv",
  "GetNodeParameters",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vizanti_msgs, srv, GetNodeParameters_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vizanti_msgs, srv, GetNodeParameters_Response)(),
};

static rosidl_service_type_support_t GetNodeParameters__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetNodeParameters__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vizanti_msgs, srv, GetNodeParameters)() {
  return &GetNodeParameters__handle;
}

#if defined(__cplusplus)
}
#endif
