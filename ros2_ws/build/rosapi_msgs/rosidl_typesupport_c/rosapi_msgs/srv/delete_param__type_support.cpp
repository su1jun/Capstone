// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from rosapi_msgs:srv/DeleteParam.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosapi_msgs/srv/detail/delete_param__struct.h"
#include "rosapi_msgs/srv/detail/delete_param__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace rosapi_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _DeleteParam_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DeleteParam_Request_type_support_ids_t;

static const _DeleteParam_Request_type_support_ids_t _DeleteParam_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DeleteParam_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DeleteParam_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DeleteParam_Request_type_support_symbol_names_t _DeleteParam_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosapi_msgs, srv, DeleteParam_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosapi_msgs, srv, DeleteParam_Request)),
  }
};

typedef struct _DeleteParam_Request_type_support_data_t
{
  void * data[2];
} _DeleteParam_Request_type_support_data_t;

static _DeleteParam_Request_type_support_data_t _DeleteParam_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DeleteParam_Request_message_typesupport_map = {
  2,
  "rosapi_msgs",
  &_DeleteParam_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DeleteParam_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DeleteParam_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DeleteParam_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DeleteParam_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rosapi_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rosapi_msgs, srv, DeleteParam_Request)() {
  return &::rosapi_msgs::srv::rosidl_typesupport_c::DeleteParam_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosapi_msgs/srv/detail/delete_param__struct.h"
// already included above
// #include "rosapi_msgs/srv/detail/delete_param__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rosapi_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _DeleteParam_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DeleteParam_Response_type_support_ids_t;

static const _DeleteParam_Response_type_support_ids_t _DeleteParam_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DeleteParam_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DeleteParam_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DeleteParam_Response_type_support_symbol_names_t _DeleteParam_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosapi_msgs, srv, DeleteParam_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosapi_msgs, srv, DeleteParam_Response)),
  }
};

typedef struct _DeleteParam_Response_type_support_data_t
{
  void * data[2];
} _DeleteParam_Response_type_support_data_t;

static _DeleteParam_Response_type_support_data_t _DeleteParam_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DeleteParam_Response_message_typesupport_map = {
  2,
  "rosapi_msgs",
  &_DeleteParam_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DeleteParam_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DeleteParam_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DeleteParam_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DeleteParam_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rosapi_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rosapi_msgs, srv, DeleteParam_Response)() {
  return &::rosapi_msgs::srv::rosidl_typesupport_c::DeleteParam_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosapi_msgs/srv/detail/delete_param__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rosapi_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _DeleteParam_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DeleteParam_type_support_ids_t;

static const _DeleteParam_type_support_ids_t _DeleteParam_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DeleteParam_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DeleteParam_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DeleteParam_type_support_symbol_names_t _DeleteParam_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosapi_msgs, srv, DeleteParam)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosapi_msgs, srv, DeleteParam)),
  }
};

typedef struct _DeleteParam_type_support_data_t
{
  void * data[2];
} _DeleteParam_type_support_data_t;

static _DeleteParam_type_support_data_t _DeleteParam_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DeleteParam_service_typesupport_map = {
  2,
  "rosapi_msgs",
  &_DeleteParam_service_typesupport_ids.typesupport_identifier[0],
  &_DeleteParam_service_typesupport_symbol_names.symbol_name[0],
  &_DeleteParam_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DeleteParam_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DeleteParam_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rosapi_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, rosapi_msgs, srv, DeleteParam)() {
  return &::rosapi_msgs::srv::rosidl_typesupport_c::DeleteParam_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
