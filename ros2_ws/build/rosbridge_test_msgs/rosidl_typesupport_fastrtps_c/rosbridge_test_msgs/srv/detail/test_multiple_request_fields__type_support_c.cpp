// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rosbridge_test_msgs:srv/TestMultipleRequestFields.idl
// generated code does not contain a copyright notice
#include "rosbridge_test_msgs/srv/detail/test_multiple_request_fields__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosbridge_test_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rosbridge_test_msgs/srv/detail/test_multiple_request_fields__struct.h"
#include "rosbridge_test_msgs/srv/detail/test_multiple_request_fields__functions.h"
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

#include "rosidl_runtime_c/string.h"  // string
#include "rosidl_runtime_c/string_functions.h"  // string

// forward declare type support functions


using _TestMultipleRequestFields_Request__ros_msg_type = rosbridge_test_msgs__srv__TestMultipleRequestFields_Request;

static bool _TestMultipleRequestFields_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TestMultipleRequestFields_Request__ros_msg_type * ros_message = static_cast<const _TestMultipleRequestFields_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: int_value
  {
    cdr << ros_message->int_value;
  }

  // Field name: float_value
  {
    cdr << ros_message->float_value;
  }

  // Field name: string
  {
    const rosidl_runtime_c__String * str = &ros_message->string;
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

  // Field name: bool_value
  {
    cdr << (ros_message->bool_value ? true : false);
  }

  return true;
}

static bool _TestMultipleRequestFields_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TestMultipleRequestFields_Request__ros_msg_type * ros_message = static_cast<_TestMultipleRequestFields_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: int_value
  {
    cdr >> ros_message->int_value;
  }

  // Field name: float_value
  {
    cdr >> ros_message->float_value;
  }

  // Field name: string
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->string.data) {
      rosidl_runtime_c__String__init(&ros_message->string);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->string,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'string'\n");
      return false;
    }
  }

  // Field name: bool_value
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->bool_value = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosbridge_test_msgs
size_t get_serialized_size_rosbridge_test_msgs__srv__TestMultipleRequestFields_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TestMultipleRequestFields_Request__ros_msg_type * ros_message = static_cast<const _TestMultipleRequestFields_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name int_value
  {
    size_t item_size = sizeof(ros_message->int_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name float_value
  {
    size_t item_size = sizeof(ros_message->float_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name string
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->string.size + 1);
  // field.name bool_value
  {
    size_t item_size = sizeof(ros_message->bool_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TestMultipleRequestFields_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rosbridge_test_msgs__srv__TestMultipleRequestFields_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosbridge_test_msgs
size_t max_serialized_size_rosbridge_test_msgs__srv__TestMultipleRequestFields_Request(
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

  // member: int_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: float_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: string
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
  // member: bool_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rosbridge_test_msgs__srv__TestMultipleRequestFields_Request;
    is_plain =
      (
      offsetof(DataType, bool_value) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _TestMultipleRequestFields_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rosbridge_test_msgs__srv__TestMultipleRequestFields_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TestMultipleRequestFields_Request = {
  "rosbridge_test_msgs::srv",
  "TestMultipleRequestFields_Request",
  _TestMultipleRequestFields_Request__cdr_serialize,
  _TestMultipleRequestFields_Request__cdr_deserialize,
  _TestMultipleRequestFields_Request__get_serialized_size,
  _TestMultipleRequestFields_Request__max_serialized_size
};

static rosidl_message_type_support_t _TestMultipleRequestFields_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TestMultipleRequestFields_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosbridge_test_msgs, srv, TestMultipleRequestFields_Request)() {
  return &_TestMultipleRequestFields_Request__type_support;
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
// #include "rosbridge_test_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "rosbridge_test_msgs/srv/detail/test_multiple_request_fields__struct.h"
// already included above
// #include "rosbridge_test_msgs/srv/detail/test_multiple_request_fields__functions.h"
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


// forward declare type support functions


using _TestMultipleRequestFields_Response__ros_msg_type = rosbridge_test_msgs__srv__TestMultipleRequestFields_Response;

static bool _TestMultipleRequestFields_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TestMultipleRequestFields_Response__ros_msg_type * ros_message = static_cast<const _TestMultipleRequestFields_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _TestMultipleRequestFields_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TestMultipleRequestFields_Response__ros_msg_type * ros_message = static_cast<_TestMultipleRequestFields_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosbridge_test_msgs
size_t get_serialized_size_rosbridge_test_msgs__srv__TestMultipleRequestFields_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TestMultipleRequestFields_Response__ros_msg_type * ros_message = static_cast<const _TestMultipleRequestFields_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TestMultipleRequestFields_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rosbridge_test_msgs__srv__TestMultipleRequestFields_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosbridge_test_msgs
size_t max_serialized_size_rosbridge_test_msgs__srv__TestMultipleRequestFields_Response(
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

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rosbridge_test_msgs__srv__TestMultipleRequestFields_Response;
    is_plain =
      (
      offsetof(DataType, structure_needs_at_least_one_member) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _TestMultipleRequestFields_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rosbridge_test_msgs__srv__TestMultipleRequestFields_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TestMultipleRequestFields_Response = {
  "rosbridge_test_msgs::srv",
  "TestMultipleRequestFields_Response",
  _TestMultipleRequestFields_Response__cdr_serialize,
  _TestMultipleRequestFields_Response__cdr_deserialize,
  _TestMultipleRequestFields_Response__get_serialized_size,
  _TestMultipleRequestFields_Response__max_serialized_size
};

static rosidl_message_type_support_t _TestMultipleRequestFields_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TestMultipleRequestFields_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosbridge_test_msgs, srv, TestMultipleRequestFields_Response)() {
  return &_TestMultipleRequestFields_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosbridge_test_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rosbridge_test_msgs/srv/test_multiple_request_fields.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t TestMultipleRequestFields__callbacks = {
  "rosbridge_test_msgs::srv",
  "TestMultipleRequestFields",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosbridge_test_msgs, srv, TestMultipleRequestFields_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosbridge_test_msgs, srv, TestMultipleRequestFields_Response)(),
};

static rosidl_service_type_support_t TestMultipleRequestFields__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &TestMultipleRequestFields__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosbridge_test_msgs, srv, TestMultipleRequestFields)() {
  return &TestMultipleRequestFields__handle;
}

#if defined(__cplusplus)
}
#endif
