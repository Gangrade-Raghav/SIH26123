// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from amr_fleet_msgs:srv/InjectFault.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "amr_fleet_msgs/srv/detail/inject_fault__rosidl_typesupport_introspection_c.h"
#include "amr_fleet_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "amr_fleet_msgs/srv/detail/inject_fault__functions.h"
#include "amr_fleet_msgs/srv/detail/inject_fault__struct.h"


// Include directives for member types
// Member `fault_type`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void amr_fleet_msgs__srv__InjectFault_Request__rosidl_typesupport_introspection_c__InjectFault_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  amr_fleet_msgs__srv__InjectFault_Request__init(message_memory);
}

void amr_fleet_msgs__srv__InjectFault_Request__rosidl_typesupport_introspection_c__InjectFault_Request_fini_function(void * message_memory)
{
  amr_fleet_msgs__srv__InjectFault_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember amr_fleet_msgs__srv__InjectFault_Request__rosidl_typesupport_introspection_c__InjectFault_Request_message_member_array[2] = {
  {
    "fault_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__srv__InjectFault_Request, fault_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "duration_sec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__srv__InjectFault_Request, duration_sec),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers amr_fleet_msgs__srv__InjectFault_Request__rosidl_typesupport_introspection_c__InjectFault_Request_message_members = {
  "amr_fleet_msgs__srv",  // message namespace
  "InjectFault_Request",  // message name
  2,  // number of fields
  sizeof(amr_fleet_msgs__srv__InjectFault_Request),
  false,  // has_any_key_member_
  amr_fleet_msgs__srv__InjectFault_Request__rosidl_typesupport_introspection_c__InjectFault_Request_message_member_array,  // message members
  amr_fleet_msgs__srv__InjectFault_Request__rosidl_typesupport_introspection_c__InjectFault_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  amr_fleet_msgs__srv__InjectFault_Request__rosidl_typesupport_introspection_c__InjectFault_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t amr_fleet_msgs__srv__InjectFault_Request__rosidl_typesupport_introspection_c__InjectFault_Request_message_type_support_handle = {
  0,
  &amr_fleet_msgs__srv__InjectFault_Request__rosidl_typesupport_introspection_c__InjectFault_Request_message_members,
  get_message_typesupport_handle_function,
  &amr_fleet_msgs__srv__InjectFault_Request__get_type_hash,
  &amr_fleet_msgs__srv__InjectFault_Request__get_type_description,
  &amr_fleet_msgs__srv__InjectFault_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_amr_fleet_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_fleet_msgs, srv, InjectFault_Request)() {
  if (!amr_fleet_msgs__srv__InjectFault_Request__rosidl_typesupport_introspection_c__InjectFault_Request_message_type_support_handle.typesupport_identifier) {
    amr_fleet_msgs__srv__InjectFault_Request__rosidl_typesupport_introspection_c__InjectFault_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &amr_fleet_msgs__srv__InjectFault_Request__rosidl_typesupport_introspection_c__InjectFault_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "amr_fleet_msgs/srv/detail/inject_fault__rosidl_typesupport_introspection_c.h"
// already included above
// #include "amr_fleet_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "amr_fleet_msgs/srv/detail/inject_fault__functions.h"
// already included above
// #include "amr_fleet_msgs/srv/detail/inject_fault__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void amr_fleet_msgs__srv__InjectFault_Response__rosidl_typesupport_introspection_c__InjectFault_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  amr_fleet_msgs__srv__InjectFault_Response__init(message_memory);
}

void amr_fleet_msgs__srv__InjectFault_Response__rosidl_typesupport_introspection_c__InjectFault_Response_fini_function(void * message_memory)
{
  amr_fleet_msgs__srv__InjectFault_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember amr_fleet_msgs__srv__InjectFault_Response__rosidl_typesupport_introspection_c__InjectFault_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__srv__InjectFault_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__srv__InjectFault_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers amr_fleet_msgs__srv__InjectFault_Response__rosidl_typesupport_introspection_c__InjectFault_Response_message_members = {
  "amr_fleet_msgs__srv",  // message namespace
  "InjectFault_Response",  // message name
  2,  // number of fields
  sizeof(amr_fleet_msgs__srv__InjectFault_Response),
  false,  // has_any_key_member_
  amr_fleet_msgs__srv__InjectFault_Response__rosidl_typesupport_introspection_c__InjectFault_Response_message_member_array,  // message members
  amr_fleet_msgs__srv__InjectFault_Response__rosidl_typesupport_introspection_c__InjectFault_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  amr_fleet_msgs__srv__InjectFault_Response__rosidl_typesupport_introspection_c__InjectFault_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t amr_fleet_msgs__srv__InjectFault_Response__rosidl_typesupport_introspection_c__InjectFault_Response_message_type_support_handle = {
  0,
  &amr_fleet_msgs__srv__InjectFault_Response__rosidl_typesupport_introspection_c__InjectFault_Response_message_members,
  get_message_typesupport_handle_function,
  &amr_fleet_msgs__srv__InjectFault_Response__get_type_hash,
  &amr_fleet_msgs__srv__InjectFault_Response__get_type_description,
  &amr_fleet_msgs__srv__InjectFault_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_amr_fleet_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_fleet_msgs, srv, InjectFault_Response)() {
  if (!amr_fleet_msgs__srv__InjectFault_Response__rosidl_typesupport_introspection_c__InjectFault_Response_message_type_support_handle.typesupport_identifier) {
    amr_fleet_msgs__srv__InjectFault_Response__rosidl_typesupport_introspection_c__InjectFault_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &amr_fleet_msgs__srv__InjectFault_Response__rosidl_typesupport_introspection_c__InjectFault_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "amr_fleet_msgs/srv/detail/inject_fault__rosidl_typesupport_introspection_c.h"
// already included above
// #include "amr_fleet_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "amr_fleet_msgs/srv/detail/inject_fault__functions.h"
// already included above
// #include "amr_fleet_msgs/srv/detail/inject_fault__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "amr_fleet_msgs/srv/inject_fault.h"
// Member `request`
// Member `response`
// already included above
// #include "amr_fleet_msgs/srv/detail/inject_fault__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__InjectFault_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  amr_fleet_msgs__srv__InjectFault_Event__init(message_memory);
}

void amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__InjectFault_Event_fini_function(void * message_memory)
{
  amr_fleet_msgs__srv__InjectFault_Event__fini(message_memory);
}

size_t amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__size_function__InjectFault_Event__request(
  const void * untyped_member)
{
  const amr_fleet_msgs__srv__InjectFault_Request__Sequence * member =
    (const amr_fleet_msgs__srv__InjectFault_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__get_const_function__InjectFault_Event__request(
  const void * untyped_member, size_t index)
{
  const amr_fleet_msgs__srv__InjectFault_Request__Sequence * member =
    (const amr_fleet_msgs__srv__InjectFault_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__get_function__InjectFault_Event__request(
  void * untyped_member, size_t index)
{
  amr_fleet_msgs__srv__InjectFault_Request__Sequence * member =
    (amr_fleet_msgs__srv__InjectFault_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__fetch_function__InjectFault_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const amr_fleet_msgs__srv__InjectFault_Request * item =
    ((const amr_fleet_msgs__srv__InjectFault_Request *)
    amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__get_const_function__InjectFault_Event__request(untyped_member, index));
  amr_fleet_msgs__srv__InjectFault_Request * value =
    (amr_fleet_msgs__srv__InjectFault_Request *)(untyped_value);
  *value = *item;
}

void amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__assign_function__InjectFault_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  amr_fleet_msgs__srv__InjectFault_Request * item =
    ((amr_fleet_msgs__srv__InjectFault_Request *)
    amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__get_function__InjectFault_Event__request(untyped_member, index));
  const amr_fleet_msgs__srv__InjectFault_Request * value =
    (const amr_fleet_msgs__srv__InjectFault_Request *)(untyped_value);
  *item = *value;
}

bool amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__resize_function__InjectFault_Event__request(
  void * untyped_member, size_t size)
{
  amr_fleet_msgs__srv__InjectFault_Request__Sequence * member =
    (amr_fleet_msgs__srv__InjectFault_Request__Sequence *)(untyped_member);
  amr_fleet_msgs__srv__InjectFault_Request__Sequence__fini(member);
  return amr_fleet_msgs__srv__InjectFault_Request__Sequence__init(member, size);
}

size_t amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__size_function__InjectFault_Event__response(
  const void * untyped_member)
{
  const amr_fleet_msgs__srv__InjectFault_Response__Sequence * member =
    (const amr_fleet_msgs__srv__InjectFault_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__get_const_function__InjectFault_Event__response(
  const void * untyped_member, size_t index)
{
  const amr_fleet_msgs__srv__InjectFault_Response__Sequence * member =
    (const amr_fleet_msgs__srv__InjectFault_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__get_function__InjectFault_Event__response(
  void * untyped_member, size_t index)
{
  amr_fleet_msgs__srv__InjectFault_Response__Sequence * member =
    (amr_fleet_msgs__srv__InjectFault_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__fetch_function__InjectFault_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const amr_fleet_msgs__srv__InjectFault_Response * item =
    ((const amr_fleet_msgs__srv__InjectFault_Response *)
    amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__get_const_function__InjectFault_Event__response(untyped_member, index));
  amr_fleet_msgs__srv__InjectFault_Response * value =
    (amr_fleet_msgs__srv__InjectFault_Response *)(untyped_value);
  *value = *item;
}

void amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__assign_function__InjectFault_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  amr_fleet_msgs__srv__InjectFault_Response * item =
    ((amr_fleet_msgs__srv__InjectFault_Response *)
    amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__get_function__InjectFault_Event__response(untyped_member, index));
  const amr_fleet_msgs__srv__InjectFault_Response * value =
    (const amr_fleet_msgs__srv__InjectFault_Response *)(untyped_value);
  *item = *value;
}

bool amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__resize_function__InjectFault_Event__response(
  void * untyped_member, size_t size)
{
  amr_fleet_msgs__srv__InjectFault_Response__Sequence * member =
    (amr_fleet_msgs__srv__InjectFault_Response__Sequence *)(untyped_member);
  amr_fleet_msgs__srv__InjectFault_Response__Sequence__fini(member);
  return amr_fleet_msgs__srv__InjectFault_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__InjectFault_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__srv__InjectFault_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(amr_fleet_msgs__srv__InjectFault_Event, request),  // bytes offset in struct
    NULL,  // default value
    amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__size_function__InjectFault_Event__request,  // size() function pointer
    amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__get_const_function__InjectFault_Event__request,  // get_const(index) function pointer
    amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__get_function__InjectFault_Event__request,  // get(index) function pointer
    amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__fetch_function__InjectFault_Event__request,  // fetch(index, &value) function pointer
    amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__assign_function__InjectFault_Event__request,  // assign(index, value) function pointer
    amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__resize_function__InjectFault_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(amr_fleet_msgs__srv__InjectFault_Event, response),  // bytes offset in struct
    NULL,  // default value
    amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__size_function__InjectFault_Event__response,  // size() function pointer
    amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__get_const_function__InjectFault_Event__response,  // get_const(index) function pointer
    amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__get_function__InjectFault_Event__response,  // get(index) function pointer
    amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__fetch_function__InjectFault_Event__response,  // fetch(index, &value) function pointer
    amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__assign_function__InjectFault_Event__response,  // assign(index, value) function pointer
    amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__resize_function__InjectFault_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__InjectFault_Event_message_members = {
  "amr_fleet_msgs__srv",  // message namespace
  "InjectFault_Event",  // message name
  3,  // number of fields
  sizeof(amr_fleet_msgs__srv__InjectFault_Event),
  false,  // has_any_key_member_
  amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__InjectFault_Event_message_member_array,  // message members
  amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__InjectFault_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__InjectFault_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__InjectFault_Event_message_type_support_handle = {
  0,
  &amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__InjectFault_Event_message_members,
  get_message_typesupport_handle_function,
  &amr_fleet_msgs__srv__InjectFault_Event__get_type_hash,
  &amr_fleet_msgs__srv__InjectFault_Event__get_type_description,
  &amr_fleet_msgs__srv__InjectFault_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_amr_fleet_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_fleet_msgs, srv, InjectFault_Event)() {
  amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__InjectFault_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__InjectFault_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_fleet_msgs, srv, InjectFault_Request)();
  amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__InjectFault_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_fleet_msgs, srv, InjectFault_Response)();
  if (!amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__InjectFault_Event_message_type_support_handle.typesupport_identifier) {
    amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__InjectFault_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__InjectFault_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "amr_fleet_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "amr_fleet_msgs/srv/detail/inject_fault__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers amr_fleet_msgs__srv__detail__inject_fault__rosidl_typesupport_introspection_c__InjectFault_service_members = {
  "amr_fleet_msgs__srv",  // service namespace
  "InjectFault",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // amr_fleet_msgs__srv__detail__inject_fault__rosidl_typesupport_introspection_c__InjectFault_Request_message_type_support_handle,
  NULL,  // response message
  // amr_fleet_msgs__srv__detail__inject_fault__rosidl_typesupport_introspection_c__InjectFault_Response_message_type_support_handle
  NULL  // event_message
  // amr_fleet_msgs__srv__detail__inject_fault__rosidl_typesupport_introspection_c__InjectFault_Response_message_type_support_handle
};


static rosidl_service_type_support_t amr_fleet_msgs__srv__detail__inject_fault__rosidl_typesupport_introspection_c__InjectFault_service_type_support_handle = {
  0,
  &amr_fleet_msgs__srv__detail__inject_fault__rosidl_typesupport_introspection_c__InjectFault_service_members,
  get_service_typesupport_handle_function,
  &amr_fleet_msgs__srv__InjectFault_Request__rosidl_typesupport_introspection_c__InjectFault_Request_message_type_support_handle,
  &amr_fleet_msgs__srv__InjectFault_Response__rosidl_typesupport_introspection_c__InjectFault_Response_message_type_support_handle,
  &amr_fleet_msgs__srv__InjectFault_Event__rosidl_typesupport_introspection_c__InjectFault_Event_message_type_support_handle,
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

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_fleet_msgs, srv, InjectFault_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_fleet_msgs, srv, InjectFault_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_fleet_msgs, srv, InjectFault_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_amr_fleet_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_fleet_msgs, srv, InjectFault)(void) {
  if (!amr_fleet_msgs__srv__detail__inject_fault__rosidl_typesupport_introspection_c__InjectFault_service_type_support_handle.typesupport_identifier) {
    amr_fleet_msgs__srv__detail__inject_fault__rosidl_typesupport_introspection_c__InjectFault_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)amr_fleet_msgs__srv__detail__inject_fault__rosidl_typesupport_introspection_c__InjectFault_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_fleet_msgs, srv, InjectFault_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_fleet_msgs, srv, InjectFault_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_fleet_msgs, srv, InjectFault_Event)()->data;
  }

  return &amr_fleet_msgs__srv__detail__inject_fault__rosidl_typesupport_introspection_c__InjectFault_service_type_support_handle;
}
