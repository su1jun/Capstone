// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from rosbridge_test_msgs:action/TestEmpty.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosbridge_test_msgs/action/detail/test_empty__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace rosbridge_test_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _TestEmpty_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TestEmpty_Goal_type_support_ids_t;

static const _TestEmpty_Goal_type_support_ids_t _TestEmpty_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TestEmpty_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TestEmpty_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TestEmpty_Goal_type_support_symbol_names_t _TestEmpty_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosbridge_test_msgs, action, TestEmpty_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosbridge_test_msgs, action, TestEmpty_Goal)),
  }
};

typedef struct _TestEmpty_Goal_type_support_data_t
{
  void * data[2];
} _TestEmpty_Goal_type_support_data_t;

static _TestEmpty_Goal_type_support_data_t _TestEmpty_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TestEmpty_Goal_message_typesupport_map = {
  2,
  "rosbridge_test_msgs",
  &_TestEmpty_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_TestEmpty_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_TestEmpty_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TestEmpty_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TestEmpty_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rosbridge_test_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosbridge_test_msgs::action::TestEmpty_Goal>()
{
  return &::rosbridge_test_msgs::action::rosidl_typesupport_cpp::TestEmpty_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rosbridge_test_msgs, action, TestEmpty_Goal)() {
  return get_message_type_support_handle<rosbridge_test_msgs::action::TestEmpty_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosbridge_test_msgs/action/detail/test_empty__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rosbridge_test_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _TestEmpty_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TestEmpty_Result_type_support_ids_t;

static const _TestEmpty_Result_type_support_ids_t _TestEmpty_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TestEmpty_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TestEmpty_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TestEmpty_Result_type_support_symbol_names_t _TestEmpty_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosbridge_test_msgs, action, TestEmpty_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosbridge_test_msgs, action, TestEmpty_Result)),
  }
};

typedef struct _TestEmpty_Result_type_support_data_t
{
  void * data[2];
} _TestEmpty_Result_type_support_data_t;

static _TestEmpty_Result_type_support_data_t _TestEmpty_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TestEmpty_Result_message_typesupport_map = {
  2,
  "rosbridge_test_msgs",
  &_TestEmpty_Result_message_typesupport_ids.typesupport_identifier[0],
  &_TestEmpty_Result_message_typesupport_symbol_names.symbol_name[0],
  &_TestEmpty_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TestEmpty_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TestEmpty_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rosbridge_test_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosbridge_test_msgs::action::TestEmpty_Result>()
{
  return &::rosbridge_test_msgs::action::rosidl_typesupport_cpp::TestEmpty_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rosbridge_test_msgs, action, TestEmpty_Result)() {
  return get_message_type_support_handle<rosbridge_test_msgs::action::TestEmpty_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosbridge_test_msgs/action/detail/test_empty__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rosbridge_test_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _TestEmpty_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TestEmpty_Feedback_type_support_ids_t;

static const _TestEmpty_Feedback_type_support_ids_t _TestEmpty_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TestEmpty_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TestEmpty_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TestEmpty_Feedback_type_support_symbol_names_t _TestEmpty_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosbridge_test_msgs, action, TestEmpty_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosbridge_test_msgs, action, TestEmpty_Feedback)),
  }
};

typedef struct _TestEmpty_Feedback_type_support_data_t
{
  void * data[2];
} _TestEmpty_Feedback_type_support_data_t;

static _TestEmpty_Feedback_type_support_data_t _TestEmpty_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TestEmpty_Feedback_message_typesupport_map = {
  2,
  "rosbridge_test_msgs",
  &_TestEmpty_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_TestEmpty_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_TestEmpty_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TestEmpty_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TestEmpty_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rosbridge_test_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosbridge_test_msgs::action::TestEmpty_Feedback>()
{
  return &::rosbridge_test_msgs::action::rosidl_typesupport_cpp::TestEmpty_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rosbridge_test_msgs, action, TestEmpty_Feedback)() {
  return get_message_type_support_handle<rosbridge_test_msgs::action::TestEmpty_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosbridge_test_msgs/action/detail/test_empty__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rosbridge_test_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _TestEmpty_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TestEmpty_SendGoal_Request_type_support_ids_t;

static const _TestEmpty_SendGoal_Request_type_support_ids_t _TestEmpty_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TestEmpty_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TestEmpty_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TestEmpty_SendGoal_Request_type_support_symbol_names_t _TestEmpty_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosbridge_test_msgs, action, TestEmpty_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosbridge_test_msgs, action, TestEmpty_SendGoal_Request)),
  }
};

typedef struct _TestEmpty_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _TestEmpty_SendGoal_Request_type_support_data_t;

static _TestEmpty_SendGoal_Request_type_support_data_t _TestEmpty_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TestEmpty_SendGoal_Request_message_typesupport_map = {
  2,
  "rosbridge_test_msgs",
  &_TestEmpty_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TestEmpty_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TestEmpty_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TestEmpty_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TestEmpty_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rosbridge_test_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosbridge_test_msgs::action::TestEmpty_SendGoal_Request>()
{
  return &::rosbridge_test_msgs::action::rosidl_typesupport_cpp::TestEmpty_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rosbridge_test_msgs, action, TestEmpty_SendGoal_Request)() {
  return get_message_type_support_handle<rosbridge_test_msgs::action::TestEmpty_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosbridge_test_msgs/action/detail/test_empty__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rosbridge_test_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _TestEmpty_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TestEmpty_SendGoal_Response_type_support_ids_t;

static const _TestEmpty_SendGoal_Response_type_support_ids_t _TestEmpty_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TestEmpty_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TestEmpty_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TestEmpty_SendGoal_Response_type_support_symbol_names_t _TestEmpty_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosbridge_test_msgs, action, TestEmpty_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosbridge_test_msgs, action, TestEmpty_SendGoal_Response)),
  }
};

typedef struct _TestEmpty_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _TestEmpty_SendGoal_Response_type_support_data_t;

static _TestEmpty_SendGoal_Response_type_support_data_t _TestEmpty_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TestEmpty_SendGoal_Response_message_typesupport_map = {
  2,
  "rosbridge_test_msgs",
  &_TestEmpty_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TestEmpty_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TestEmpty_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TestEmpty_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TestEmpty_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rosbridge_test_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosbridge_test_msgs::action::TestEmpty_SendGoal_Response>()
{
  return &::rosbridge_test_msgs::action::rosidl_typesupport_cpp::TestEmpty_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rosbridge_test_msgs, action, TestEmpty_SendGoal_Response)() {
  return get_message_type_support_handle<rosbridge_test_msgs::action::TestEmpty_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosbridge_test_msgs/action/detail/test_empty__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rosbridge_test_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _TestEmpty_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TestEmpty_SendGoal_type_support_ids_t;

static const _TestEmpty_SendGoal_type_support_ids_t _TestEmpty_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TestEmpty_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TestEmpty_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TestEmpty_SendGoal_type_support_symbol_names_t _TestEmpty_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosbridge_test_msgs, action, TestEmpty_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosbridge_test_msgs, action, TestEmpty_SendGoal)),
  }
};

typedef struct _TestEmpty_SendGoal_type_support_data_t
{
  void * data[2];
} _TestEmpty_SendGoal_type_support_data_t;

static _TestEmpty_SendGoal_type_support_data_t _TestEmpty_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TestEmpty_SendGoal_service_typesupport_map = {
  2,
  "rosbridge_test_msgs",
  &_TestEmpty_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_TestEmpty_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_TestEmpty_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TestEmpty_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TestEmpty_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rosbridge_test_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<rosbridge_test_msgs::action::TestEmpty_SendGoal>()
{
  return &::rosbridge_test_msgs::action::rosidl_typesupport_cpp::TestEmpty_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosbridge_test_msgs/action/detail/test_empty__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rosbridge_test_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _TestEmpty_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TestEmpty_GetResult_Request_type_support_ids_t;

static const _TestEmpty_GetResult_Request_type_support_ids_t _TestEmpty_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TestEmpty_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TestEmpty_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TestEmpty_GetResult_Request_type_support_symbol_names_t _TestEmpty_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosbridge_test_msgs, action, TestEmpty_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosbridge_test_msgs, action, TestEmpty_GetResult_Request)),
  }
};

typedef struct _TestEmpty_GetResult_Request_type_support_data_t
{
  void * data[2];
} _TestEmpty_GetResult_Request_type_support_data_t;

static _TestEmpty_GetResult_Request_type_support_data_t _TestEmpty_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TestEmpty_GetResult_Request_message_typesupport_map = {
  2,
  "rosbridge_test_msgs",
  &_TestEmpty_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TestEmpty_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TestEmpty_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TestEmpty_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TestEmpty_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rosbridge_test_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosbridge_test_msgs::action::TestEmpty_GetResult_Request>()
{
  return &::rosbridge_test_msgs::action::rosidl_typesupport_cpp::TestEmpty_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rosbridge_test_msgs, action, TestEmpty_GetResult_Request)() {
  return get_message_type_support_handle<rosbridge_test_msgs::action::TestEmpty_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosbridge_test_msgs/action/detail/test_empty__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rosbridge_test_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _TestEmpty_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TestEmpty_GetResult_Response_type_support_ids_t;

static const _TestEmpty_GetResult_Response_type_support_ids_t _TestEmpty_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TestEmpty_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TestEmpty_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TestEmpty_GetResult_Response_type_support_symbol_names_t _TestEmpty_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosbridge_test_msgs, action, TestEmpty_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosbridge_test_msgs, action, TestEmpty_GetResult_Response)),
  }
};

typedef struct _TestEmpty_GetResult_Response_type_support_data_t
{
  void * data[2];
} _TestEmpty_GetResult_Response_type_support_data_t;

static _TestEmpty_GetResult_Response_type_support_data_t _TestEmpty_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TestEmpty_GetResult_Response_message_typesupport_map = {
  2,
  "rosbridge_test_msgs",
  &_TestEmpty_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TestEmpty_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TestEmpty_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TestEmpty_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TestEmpty_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rosbridge_test_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosbridge_test_msgs::action::TestEmpty_GetResult_Response>()
{
  return &::rosbridge_test_msgs::action::rosidl_typesupport_cpp::TestEmpty_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rosbridge_test_msgs, action, TestEmpty_GetResult_Response)() {
  return get_message_type_support_handle<rosbridge_test_msgs::action::TestEmpty_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosbridge_test_msgs/action/detail/test_empty__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rosbridge_test_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _TestEmpty_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TestEmpty_GetResult_type_support_ids_t;

static const _TestEmpty_GetResult_type_support_ids_t _TestEmpty_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TestEmpty_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TestEmpty_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TestEmpty_GetResult_type_support_symbol_names_t _TestEmpty_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosbridge_test_msgs, action, TestEmpty_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosbridge_test_msgs, action, TestEmpty_GetResult)),
  }
};

typedef struct _TestEmpty_GetResult_type_support_data_t
{
  void * data[2];
} _TestEmpty_GetResult_type_support_data_t;

static _TestEmpty_GetResult_type_support_data_t _TestEmpty_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TestEmpty_GetResult_service_typesupport_map = {
  2,
  "rosbridge_test_msgs",
  &_TestEmpty_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_TestEmpty_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_TestEmpty_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TestEmpty_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TestEmpty_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rosbridge_test_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<rosbridge_test_msgs::action::TestEmpty_GetResult>()
{
  return &::rosbridge_test_msgs::action::rosidl_typesupport_cpp::TestEmpty_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosbridge_test_msgs/action/detail/test_empty__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rosbridge_test_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _TestEmpty_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TestEmpty_FeedbackMessage_type_support_ids_t;

static const _TestEmpty_FeedbackMessage_type_support_ids_t _TestEmpty_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TestEmpty_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TestEmpty_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TestEmpty_FeedbackMessage_type_support_symbol_names_t _TestEmpty_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosbridge_test_msgs, action, TestEmpty_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosbridge_test_msgs, action, TestEmpty_FeedbackMessage)),
  }
};

typedef struct _TestEmpty_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _TestEmpty_FeedbackMessage_type_support_data_t;

static _TestEmpty_FeedbackMessage_type_support_data_t _TestEmpty_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TestEmpty_FeedbackMessage_message_typesupport_map = {
  2,
  "rosbridge_test_msgs",
  &_TestEmpty_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_TestEmpty_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_TestEmpty_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TestEmpty_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TestEmpty_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rosbridge_test_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosbridge_test_msgs::action::TestEmpty_FeedbackMessage>()
{
  return &::rosbridge_test_msgs::action::rosidl_typesupport_cpp::TestEmpty_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rosbridge_test_msgs, action, TestEmpty_FeedbackMessage)() {
  return get_message_type_support_handle<rosbridge_test_msgs::action::TestEmpty_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "rosbridge_test_msgs/action/detail/test_empty__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace rosbridge_test_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t TestEmpty_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rosbridge_test_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<rosbridge_test_msgs::action::TestEmpty>()
{
  using ::rosbridge_test_msgs::action::rosidl_typesupport_cpp::TestEmpty_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  TestEmpty_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::rosbridge_test_msgs::action::TestEmpty::Impl::SendGoalService>();
  TestEmpty_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::rosbridge_test_msgs::action::TestEmpty::Impl::GetResultService>();
  TestEmpty_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::rosbridge_test_msgs::action::TestEmpty::Impl::CancelGoalService>();
  TestEmpty_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::rosbridge_test_msgs::action::TestEmpty::Impl::FeedbackMessage>();
  TestEmpty_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::rosbridge_test_msgs::action::TestEmpty::Impl::GoalStatusMessage>();
  return &TestEmpty_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
