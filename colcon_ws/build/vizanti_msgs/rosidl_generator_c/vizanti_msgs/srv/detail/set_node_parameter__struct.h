// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vizanti_msgs:srv/SetNodeParameter.idl
// generated code does not contain a copyright notice

#ifndef VIZANTI_MSGS__SRV__DETAIL__SET_NODE_PARAMETER__STRUCT_H_
#define VIZANTI_MSGS__SRV__DETAIL__SET_NODE_PARAMETER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'node'
// Member 'param'
// Member 'value'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetNodeParameter in the package vizanti_msgs.
typedef struct vizanti_msgs__srv__SetNodeParameter_Request
{
  rosidl_runtime_c__String node;
  rosidl_runtime_c__String param;
  rosidl_runtime_c__String value;
} vizanti_msgs__srv__SetNodeParameter_Request;

// Struct for a sequence of vizanti_msgs__srv__SetNodeParameter_Request.
typedef struct vizanti_msgs__srv__SetNodeParameter_Request__Sequence
{
  vizanti_msgs__srv__SetNodeParameter_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vizanti_msgs__srv__SetNodeParameter_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetNodeParameter in the package vizanti_msgs.
typedef struct vizanti_msgs__srv__SetNodeParameter_Response
{
  rosidl_runtime_c__String status;
} vizanti_msgs__srv__SetNodeParameter_Response;

// Struct for a sequence of vizanti_msgs__srv__SetNodeParameter_Response.
typedef struct vizanti_msgs__srv__SetNodeParameter_Response__Sequence
{
  vizanti_msgs__srv__SetNodeParameter_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vizanti_msgs__srv__SetNodeParameter_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VIZANTI_MSGS__SRV__DETAIL__SET_NODE_PARAMETER__STRUCT_H_
