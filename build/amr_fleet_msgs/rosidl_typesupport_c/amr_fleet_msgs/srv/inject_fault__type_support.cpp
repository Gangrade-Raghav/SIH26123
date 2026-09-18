// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from amr_fleet_msgs:srv/InjectFault.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "amr_fleet_msgs/srv/detail/inject_fault__struct.h"
#include "amr_fleet_msgs/srv/detail/inject_fault__type_support.h"
#include "amr_fleet_msgs/srv/detail/inject_fault__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace amr_fleet_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _InjectFault_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InjectFault_Request_type_support_ids_t;

static const _InjectFault_Request_type_support_ids_t _InjectFault_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _InjectFault_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InjectFault_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InjectFault_Request_type_support_symbol_names_t _InjectFault_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, amr_fleet_msgs, srv, InjectFault_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_fleet_msgs, srv, InjectFault_Request)),
  }
};

typedef struct _InjectFault_Request_type_support_data_t
{
  void * data[2];
} _InjectFault_Request_type_support_data_t;

static _InjectFault_Request_type_support_data_t _InjectFault_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InjectFault_Request_message_typesupport_map = {
  2,
  "amr_fleet_msgs",
  &_InjectFault_Request_message_typesupport_ids.typesupport_identifier[0],
  &_InjectFault_Request_message_typesupport_symbol_names.symbol_name[0],
  &_InjectFault_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t InjectFault_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InjectFault_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &amr_fleet_msgs__srv__InjectFault_Request__get_type_hash,
  &amr_fleet_msgs__srv__InjectFault_Request__get_type_description,
  &amr_fleet_msgs__srv__InjectFault_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace amr_fleet_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, amr_fleet_msgs, srv, InjectFault_Request)() {
  return &::amr_fleet_msgs::srv::rosidl_typesupport_c::InjectFault_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "amr_fleet_msgs/srv/detail/inject_fault__struct.h"
// already included above
// #include "amr_fleet_msgs/srv/detail/inject_fault__type_support.h"
// already included above
// #include "amr_fleet_msgs/srv/detail/inject_fault__functions.h"
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

namespace amr_fleet_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _InjectFault_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InjectFault_Response_type_support_ids_t;

static const _InjectFault_Response_type_support_ids_t _InjectFault_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _InjectFault_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InjectFault_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InjectFault_Response_type_support_symbol_names_t _InjectFault_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, amr_fleet_msgs, srv, InjectFault_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_fleet_msgs, srv, InjectFault_Response)),
  }
};

typedef struct _InjectFault_Response_type_support_data_t
{
  void * data[2];
} _InjectFault_Response_type_support_data_t;

static _InjectFault_Response_type_support_data_t _InjectFault_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InjectFault_Response_message_typesupport_map = {
  2,
  "amr_fleet_msgs",
  &_InjectFault_Response_message_typesupport_ids.typesupport_identifier[0],
  &_InjectFault_Response_message_typesupport_symbol_names.symbol_name[0],
  &_InjectFault_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t InjectFault_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InjectFault_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &amr_fleet_msgs__srv__InjectFault_Response__get_type_hash,
  &amr_fleet_msgs__srv__InjectFault_Response__get_type_description,
  &amr_fleet_msgs__srv__InjectFault_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace amr_fleet_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, amr_fleet_msgs, srv, InjectFault_Response)() {
  return &::amr_fleet_msgs::srv::rosidl_typesupport_c::InjectFault_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "amr_fleet_msgs/srv/detail/inject_fault__struct.h"
// already included above
// #include "amr_fleet_msgs/srv/detail/inject_fault__type_support.h"
// already included above
// #include "amr_fleet_msgs/srv/detail/inject_fault__functions.h"
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

namespace amr_fleet_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _InjectFault_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InjectFault_Event_type_support_ids_t;

static const _InjectFault_Event_type_support_ids_t _InjectFault_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _InjectFault_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InjectFault_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InjectFault_Event_type_support_symbol_names_t _InjectFault_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, amr_fleet_msgs, srv, InjectFault_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_fleet_msgs, srv, InjectFault_Event)),
  }
};

typedef struct _InjectFault_Event_type_support_data_t
{
  void * data[2];
} _InjectFault_Event_type_support_data_t;

static _InjectFault_Event_type_support_data_t _InjectFault_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InjectFault_Event_message_typesupport_map = {
  2,
  "amr_fleet_msgs",
  &_InjectFault_Event_message_typesupport_ids.typesupport_identifier[0],
  &_InjectFault_Event_message_typesupport_symbol_names.symbol_name[0],
  &_InjectFault_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t InjectFault_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InjectFault_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &amr_fleet_msgs__srv__InjectFault_Event__get_type_hash,
  &amr_fleet_msgs__srv__InjectFault_Event__get_type_description,
  &amr_fleet_msgs__srv__InjectFault_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace amr_fleet_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, amr_fleet_msgs, srv, InjectFault_Event)() {
  return &::amr_fleet_msgs::srv::rosidl_typesupport_c::InjectFault_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "amr_fleet_msgs/srv/detail/inject_fault__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace amr_fleet_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _InjectFault_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InjectFault_type_support_ids_t;

static const _InjectFault_type_support_ids_t _InjectFault_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _InjectFault_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InjectFault_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InjectFault_type_support_symbol_names_t _InjectFault_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, amr_fleet_msgs, srv, InjectFault)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_fleet_msgs, srv, InjectFault)),
  }
};

typedef struct _InjectFault_type_support_data_t
{
  void * data[2];
} _InjectFault_type_support_data_t;

static _InjectFault_type_support_data_t _InjectFault_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InjectFault_service_typesupport_map = {
  2,
  "amr_fleet_msgs",
  &_InjectFault_service_typesupport_ids.typesupport_identifier[0],
  &_InjectFault_service_typesupport_symbol_names.symbol_name[0],
  &_InjectFault_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t InjectFault_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InjectFault_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &InjectFault_Request_message_type_support_handle,
  &InjectFault_Response_message_type_support_handle,
  &InjectFault_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    amr_fleet_msgs,
    srv,
    InjectFault
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    amr_fleet_msgs,
    srv,
    InjectFault
  ),
  &amr_fleet_msgs__srv__InjectFault__get_type_hash,
  &amr_fleet_msgs__srv__InjectFault__get_type_description,
  &amr_fleet_msgs__srv__InjectFault__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace amr_fleet_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, amr_fleet_msgs, srv, InjectFault)() {
  return &::amr_fleet_msgs::srv::rosidl_typesupport_c::InjectFault_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
