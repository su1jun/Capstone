// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vizanti_msgs:srv/RecordRosbag.idl
// generated code does not contain a copyright notice

#ifndef VIZANTI_MSGS__SRV__DETAIL__RECORD_ROSBAG__STRUCT_H_
#define VIZANTI_MSGS__SRV__DETAIL__RECORD_ROSBAG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'topics'
// Member 'path'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/RecordRosbag in the package vizanti_msgs.
typedef struct vizanti_msgs__srv__RecordRosbag_Request
{
  rosidl_runtime_c__String__Sequence topics;
  bool start;
  rosidl_runtime_c__String path;
} vizanti_msgs__srv__RecordRosbag_Request;

// Struct for a sequence of vizanti_msgs__srv__RecordRosbag_Request.
typedef struct vizanti_msgs__srv__RecordRosbag_Request__Sequence
{
  vizanti_msgs__srv__RecordRosbag_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vizanti_msgs__srv__RecordRosbag_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/RecordRosbag in the package vizanti_msgs.
typedef struct vizanti_msgs__srv__RecordRosbag_Response
{
  bool success;
  rosidl_runtime_c__String message;
} vizanti_msgs__srv__RecordRosbag_Response;

// Struct for a sequence of vizanti_msgs__srv__RecordRosbag_Response.
typedef struct vizanti_msgs__srv__RecordRosbag_Response__Sequence
{
  vizanti_msgs__srv__RecordRosbag_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vizanti_msgs__srv__RecordRosbag_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VIZANTI_MSGS__SRV__DETAIL__RECORD_ROSBAG__STRUCT_H_
