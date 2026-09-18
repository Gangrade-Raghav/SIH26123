// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from amr_fleet_msgs:srv/CreateTask.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "amr_fleet_msgs/srv/detail/create_task__functions.h"
#include "amr_fleet_msgs/srv/detail/create_task__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace amr_fleet_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CreateTask_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CreateTask_Request_type_support_ids_t;

static const _CreateTask_Request_type_support_ids_t _CreateTask_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CreateTask_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CreateTask_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CreateTask_Request_type_support_symbol_names_t _CreateTask_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, amr_fleet_msgs, srv, CreateTask_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, amr_fleet_msgs, srv, CreateTask_Request)),
  }
};

typedef struct _CreateTask_Request_type_support_data_t
{
  void * data[2];
} _CreateTask_Request_type_support_data_t;

static _CreateTask_Request_type_support_data_t _CreateTask_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CreateTask_Request_message_typesupport_map = {
  2,
  "amr_fleet_msgs",
  &_CreateTask_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CreateTask_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CreateTask_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CreateTask_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CreateTask_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &amr_fleet_msgs__srv__CreateTask_Request__get_type_hash,
  &amr_fleet_msgs__srv__CreateTask_Request__get_type_description,
  &amr_fleet_msgs__srv__CreateTask_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace amr_fleet_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<amr_fleet_msgs::srv::CreateTask_Request>()
{
  return &::amr_fleet_msgs::srv::rosidl_typesupport_cpp::CreateTask_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, amr_fleet_msgs, srv, CreateTask_Request)() {
  return get_message_type_support_handle<amr_fleet_msgs::srv::CreateTask_Request>();
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
// #include "amr_fleet_msgs/srv/detail/create_task__functions.h"
// already included above
// #include "amr_fleet_msgs/srv/detail/create_task__struct.hpp"
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

namespace amr_fleet_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CreateTask_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CreateTask_Response_type_support_ids_t;

static const _CreateTask_Response_type_support_ids_t _CreateTask_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CreateTask_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CreateTask_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CreateTask_Response_type_support_symbol_names_t _CreateTask_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, amr_fleet_msgs, srv, CreateTask_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, amr_fleet_msgs, srv, CreateTask_Response)),
  }
};

typedef struct _CreateTask_Response_type_support_data_t
{
  void * data[2];
} _CreateTask_Response_type_support_data_t;

static _CreateTask_Response_type_support_data_t _CreateTask_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CreateTask_Response_message_typesupport_map = {
  2,
  "amr_fleet_msgs",
  &_CreateTask_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CreateTask_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CreateTask_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CreateTask_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CreateTask_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &amr_fleet_msgs__srv__CreateTask_Response__get_type_hash,
  &amr_fleet_msgs__srv__CreateTask_Response__get_type_description,
  &amr_fleet_msgs__srv__CreateTask_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace amr_fleet_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<amr_fleet_msgs::srv::CreateTask_Response>()
{
  return &::amr_fleet_msgs::srv::rosidl_typesupport_cpp::CreateTask_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, amr_fleet_msgs, srv, CreateTask_Response)() {
  return get_message_type_support_handle<amr_fleet_msgs::srv::CreateTask_Response>();
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
// #include "amr_fleet_msgs/srv/detail/create_task__functions.h"
// already included above
// #include "amr_fleet_msgs/srv/detail/create_task__struct.hpp"
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

namespace amr_fleet_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CreateTask_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CreateTask_Event_type_support_ids_t;

static const _CreateTask_Event_type_support_ids_t _CreateTask_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CreateTask_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CreateTask_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CreateTask_Event_type_support_symbol_names_t _CreateTask_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, amr_fleet_msgs, srv, CreateTask_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, amr_fleet_msgs, srv, CreateTask_Event)),
  }
};

typedef struct _CreateTask_Event_type_support_data_t
{
  void * data[2];
} _CreateTask_Event_type_support_data_t;

static _CreateTask_Event_type_support_data_t _CreateTask_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CreateTask_Event_message_typesupport_map = {
  2,
  "amr_fleet_msgs",
  &_CreateTask_Event_message_typesupport_ids.typesupport_identifier[0],
  &_CreateTask_Event_message_typesupport_symbol_names.symbol_name[0],
  &_CreateTask_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CreateTask_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CreateTask_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &amr_fleet_msgs__srv__CreateTask_Event__get_type_hash,
  &amr_fleet_msgs__srv__CreateTask_Event__get_type_description,
  &amr_fleet_msgs__srv__CreateTask_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace amr_fleet_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<amr_fleet_msgs::srv::CreateTask_Event>()
{
  return &::amr_fleet_msgs::srv::rosidl_typesupport_cpp::CreateTask_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, amr_fleet_msgs, srv, CreateTask_Event)() {
  return get_message_type_support_handle<amr_fleet_msgs::srv::CreateTask_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "amr_fleet_msgs/srv/detail/create_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace amr_fleet_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CreateTask_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CreateTask_type_support_ids_t;

static const _CreateTask_type_support_ids_t _CreateTask_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CreateTask_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CreateTask_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CreateTask_type_support_symbol_names_t _CreateTask_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, amr_fleet_msgs, srv, CreateTask)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, amr_fleet_msgs, srv, CreateTask)),
  }
};

typedef struct _CreateTask_type_support_data_t
{
  void * data[2];
} _CreateTask_type_support_data_t;

static _CreateTask_type_support_data_t _CreateTask_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CreateTask_service_typesupport_map = {
  2,
  "amr_fleet_msgs",
  &_CreateTask_service_typesupport_ids.typesupport_identifier[0],
  &_CreateTask_service_typesupport_symbol_names.symbol_name[0],
  &_CreateTask_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CreateTask_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CreateTask_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<amr_fleet_msgs::srv::CreateTask_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<amr_fleet_msgs::srv::CreateTask_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<amr_fleet_msgs::srv::CreateTask_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<amr_fleet_msgs::srv::CreateTask>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<amr_fleet_msgs::srv::CreateTask>,
  &amr_fleet_msgs__srv__CreateTask__get_type_hash,
  &amr_fleet_msgs__srv__CreateTask__get_type_description,
  &amr_fleet_msgs__srv__CreateTask__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace amr_fleet_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<amr_fleet_msgs::srv::CreateTask>()
{
  return &::amr_fleet_msgs::srv::rosidl_typesupport_cpp::CreateTask_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, amr_fleet_msgs, srv, CreateTask)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<amr_fleet_msgs::srv::CreateTask>();
}

#ifdef __cplusplus
}
#endif
