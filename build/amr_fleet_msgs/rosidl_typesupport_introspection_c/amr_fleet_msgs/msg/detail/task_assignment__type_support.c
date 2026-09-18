// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from amr_fleet_msgs:msg/TaskAssignment.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "amr_fleet_msgs/msg/detail/task_assignment__rosidl_typesupport_introspection_c.h"
#include "amr_fleet_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "amr_fleet_msgs/msg/detail/task_assignment__functions.h"
#include "amr_fleet_msgs/msg/detail/task_assignment__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `task_id`
// Member `assigned_robot_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void amr_fleet_msgs__msg__TaskAssignment__rosidl_typesupport_introspection_c__TaskAssignment_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  amr_fleet_msgs__msg__TaskAssignment__init(message_memory);
}

void amr_fleet_msgs__msg__TaskAssignment__rosidl_typesupport_introspection_c__TaskAssignment_fini_function(void * message_memory)
{
  amr_fleet_msgs__msg__TaskAssignment__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember amr_fleet_msgs__msg__TaskAssignment__rosidl_typesupport_introspection_c__TaskAssignment_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__TaskAssignment, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "task_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__TaskAssignment, task_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "assigned_robot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__TaskAssignment, assigned_robot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "allocation_epoch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__TaskAssignment, allocation_epoch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confirmed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__TaskAssignment, confirmed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers amr_fleet_msgs__msg__TaskAssignment__rosidl_typesupport_introspection_c__TaskAssignment_message_members = {
  "amr_fleet_msgs__msg",  // message namespace
  "TaskAssignment",  // message name
  5,  // number of fields
  sizeof(amr_fleet_msgs__msg__TaskAssignment),
  false,  // has_any_key_member_
  amr_fleet_msgs__msg__TaskAssignment__rosidl_typesupport_introspection_c__TaskAssignment_message_member_array,  // message members
  amr_fleet_msgs__msg__TaskAssignment__rosidl_typesupport_introspection_c__TaskAssignment_init_function,  // function to initialize message memory (memory has to be allocated)
  amr_fleet_msgs__msg__TaskAssignment__rosidl_typesupport_introspection_c__TaskAssignment_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t amr_fleet_msgs__msg__TaskAssignment__rosidl_typesupport_introspection_c__TaskAssignment_message_type_support_handle = {
  0,
  &amr_fleet_msgs__msg__TaskAssignment__rosidl_typesupport_introspection_c__TaskAssignment_message_members,
  get_message_typesupport_handle_function,
  &amr_fleet_msgs__msg__TaskAssignment__get_type_hash,
  &amr_fleet_msgs__msg__TaskAssignment__get_type_description,
  &amr_fleet_msgs__msg__TaskAssignment__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_amr_fleet_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_fleet_msgs, msg, TaskAssignment)() {
  amr_fleet_msgs__msg__TaskAssignment__rosidl_typesupport_introspection_c__TaskAssignment_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!amr_fleet_msgs__msg__TaskAssignment__rosidl_typesupport_introspection_c__TaskAssignment_message_type_support_handle.typesupport_identifier) {
    amr_fleet_msgs__msg__TaskAssignment__rosidl_typesupport_introspection_c__TaskAssignment_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &amr_fleet_msgs__msg__TaskAssignment__rosidl_typesupport_introspection_c__TaskAssignment_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
