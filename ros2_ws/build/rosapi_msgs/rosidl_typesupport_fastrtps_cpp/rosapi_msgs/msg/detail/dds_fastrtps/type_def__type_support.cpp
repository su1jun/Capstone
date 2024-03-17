// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rosapi_msgs:msg/TypeDef.idl
// generated code does not contain a copyright notice
#include "rosapi_msgs/msg/detail/type_def__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rosapi_msgs/msg/detail/type_def__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace rosapi_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosapi_msgs
cdr_serialize(
  const rosapi_msgs::msg::TypeDef & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: type
  cdr << ros_message.type;
  // Member: fieldnames
  {
    cdr << ros_message.fieldnames;
  }
  // Member: fieldtypes
  {
    cdr << ros_message.fieldtypes;
  }
  // Member: fieldarraylen
  {
    cdr << ros_message.fieldarraylen;
  }
  // Member: examples
  {
    cdr << ros_message.examples;
  }
  // Member: constnames
  {
    cdr << ros_message.constnames;
  }
  // Member: constvalues
  {
    cdr << ros_message.constvalues;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosapi_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rosapi_msgs::msg::TypeDef & ros_message)
{
  // Member: type
  cdr >> ros_message.type;

  // Member: fieldnames
  {
    cdr >> ros_message.fieldnames;
  }

  // Member: fieldtypes
  {
    cdr >> ros_message.fieldtypes;
  }

  // Member: fieldarraylen
  {
    cdr >> ros_message.fieldarraylen;
  }

  // Member: examples
  {
    cdr >> ros_message.examples;
  }

  // Member: constnames
  {
    cdr >> ros_message.constnames;
  }

  // Member: constvalues
  {
    cdr >> ros_message.constvalues;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosapi_msgs
get_serialized_size(
  const rosapi_msgs::msg::TypeDef & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.type.size() + 1);
  // Member: fieldnames
  {
    size_t array_size = ros_message.fieldnames.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.fieldnames[index].size() + 1);
    }
  }
  // Member: fieldtypes
  {
    size_t array_size = ros_message.fieldtypes.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.fieldtypes[index].size() + 1);
    }
  }
  // Member: fieldarraylen
  {
    size_t array_size = ros_message.fieldarraylen.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.fieldarraylen[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: examples
  {
    size_t array_size = ros_message.examples.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.examples[index].size() + 1);
    }
  }
  // Member: constnames
  {
    size_t array_size = ros_message.constnames.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.constnames[index].size() + 1);
    }
  }
  // Member: constvalues
  {
    size_t array_size = ros_message.constvalues.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.constvalues[index].size() + 1);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosapi_msgs
max_serialized_size_TypeDef(
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


  // Member: type
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

  // Member: fieldnames
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: fieldtypes
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: fieldarraylen
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: examples
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: constnames
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: constvalues
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

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
    using DataType = rosapi_msgs::msg::TypeDef;
    is_plain =
      (
      offsetof(DataType, constvalues) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _TypeDef__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rosapi_msgs::msg::TypeDef *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TypeDef__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rosapi_msgs::msg::TypeDef *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TypeDef__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rosapi_msgs::msg::TypeDef *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TypeDef__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TypeDef(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TypeDef__callbacks = {
  "rosapi_msgs::msg",
  "TypeDef",
  _TypeDef__cdr_serialize,
  _TypeDef__cdr_deserialize,
  _TypeDef__get_serialized_size,
  _TypeDef__max_serialized_size
};

static rosidl_message_type_support_t _TypeDef__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TypeDef__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rosapi_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rosapi_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<rosapi_msgs::msg::TypeDef>()
{
  return &rosapi_msgs::msg::typesupport_fastrtps_cpp::_TypeDef__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosapi_msgs, msg, TypeDef)() {
  return &rosapi_msgs::msg::typesupport_fastrtps_cpp::_TypeDef__handle;
}

#ifdef __cplusplus
}
#endif
