// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rosapi_msgs:msg/TypeDef.idl
// generated code does not contain a copyright notice
#include "rosapi_msgs/msg/detail/type_def__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosapi_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rosapi_msgs/msg/detail/type_def__struct.h"
#include "rosapi_msgs/msg/detail/type_def__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // fieldarraylen
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // fieldarraylen
#include "rosidl_runtime_c/string.h"  // constnames, constvalues, examples, fieldnames, fieldtypes, type
#include "rosidl_runtime_c/string_functions.h"  // constnames, constvalues, examples, fieldnames, fieldtypes, type

// forward declare type support functions


using _TypeDef__ros_msg_type = rosapi_msgs__msg__TypeDef;

static bool _TypeDef__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TypeDef__ros_msg_type * ros_message = static_cast<const _TypeDef__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    const rosidl_runtime_c__String * str = &ros_message->type;
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

  // Field name: fieldnames
  {
    size_t size = ros_message->fieldnames.size;
    auto array_ptr = ros_message->fieldnames.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: fieldtypes
  {
    size_t size = ros_message->fieldtypes.size;
    auto array_ptr = ros_message->fieldtypes.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: fieldarraylen
  {
    size_t size = ros_message->fieldarraylen.size;
    auto array_ptr = ros_message->fieldarraylen.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: examples
  {
    size_t size = ros_message->examples.size;
    auto array_ptr = ros_message->examples.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: constnames
  {
    size_t size = ros_message->constnames.size;
    auto array_ptr = ros_message->constnames.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: constvalues
  {
    size_t size = ros_message->constvalues.size;
    auto array_ptr = ros_message->constvalues.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  return true;
}

static bool _TypeDef__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TypeDef__ros_msg_type * ros_message = static_cast<_TypeDef__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->type.data) {
      rosidl_runtime_c__String__init(&ros_message->type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'type'\n");
      return false;
    }
  }

  // Field name: fieldnames
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->fieldnames.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->fieldnames);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->fieldnames, size)) {
      fprintf(stderr, "failed to create array for field 'fieldnames'");
      return false;
    }
    auto array_ptr = ros_message->fieldnames.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'fieldnames'\n");
        return false;
      }
    }
  }

  // Field name: fieldtypes
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->fieldtypes.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->fieldtypes);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->fieldtypes, size)) {
      fprintf(stderr, "failed to create array for field 'fieldtypes'");
      return false;
    }
    auto array_ptr = ros_message->fieldtypes.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'fieldtypes'\n");
        return false;
      }
    }
  }

  // Field name: fieldarraylen
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->fieldarraylen.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->fieldarraylen);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->fieldarraylen, size)) {
      fprintf(stderr, "failed to create array for field 'fieldarraylen'");
      return false;
    }
    auto array_ptr = ros_message->fieldarraylen.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: examples
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->examples.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->examples);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->examples, size)) {
      fprintf(stderr, "failed to create array for field 'examples'");
      return false;
    }
    auto array_ptr = ros_message->examples.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'examples'\n");
        return false;
      }
    }
  }

  // Field name: constnames
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->constnames.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->constnames);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->constnames, size)) {
      fprintf(stderr, "failed to create array for field 'constnames'");
      return false;
    }
    auto array_ptr = ros_message->constnames.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'constnames'\n");
        return false;
      }
    }
  }

  // Field name: constvalues
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->constvalues.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->constvalues);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->constvalues, size)) {
      fprintf(stderr, "failed to create array for field 'constvalues'");
      return false;
    }
    auto array_ptr = ros_message->constvalues.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'constvalues'\n");
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosapi_msgs
size_t get_serialized_size_rosapi_msgs__msg__TypeDef(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TypeDef__ros_msg_type * ros_message = static_cast<const _TypeDef__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->type.size + 1);
  // field.name fieldnames
  {
    size_t array_size = ros_message->fieldnames.size;
    auto array_ptr = ros_message->fieldnames.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name fieldtypes
  {
    size_t array_size = ros_message->fieldtypes.size;
    auto array_ptr = ros_message->fieldtypes.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name fieldarraylen
  {
    size_t array_size = ros_message->fieldarraylen.size;
    auto array_ptr = ros_message->fieldarraylen.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name examples
  {
    size_t array_size = ros_message->examples.size;
    auto array_ptr = ros_message->examples.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name constnames
  {
    size_t array_size = ros_message->constnames.size;
    auto array_ptr = ros_message->constnames.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name constvalues
  {
    size_t array_size = ros_message->constvalues.size;
    auto array_ptr = ros_message->constvalues.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TypeDef__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rosapi_msgs__msg__TypeDef(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosapi_msgs
size_t max_serialized_size_rosapi_msgs__msg__TypeDef(
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

  // member: type
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
  // member: fieldnames
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
  // member: fieldtypes
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
  // member: fieldarraylen
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
  // member: examples
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
  // member: constnames
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
  // member: constvalues
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
    using DataType = rosapi_msgs__msg__TypeDef;
    is_plain =
      (
      offsetof(DataType, constvalues) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _TypeDef__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rosapi_msgs__msg__TypeDef(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TypeDef = {
  "rosapi_msgs::msg",
  "TypeDef",
  _TypeDef__cdr_serialize,
  _TypeDef__cdr_deserialize,
  _TypeDef__get_serialized_size,
  _TypeDef__max_serialized_size
};

static rosidl_message_type_support_t _TypeDef__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TypeDef,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosapi_msgs, msg, TypeDef)() {
  return &_TypeDef__type_support;
}

#if defined(__cplusplus)
}
#endif
