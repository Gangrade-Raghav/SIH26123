// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from amr_fleet_msgs:msg/RobotHealth.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "amr_fleet_msgs/msg/detail/robot_health__rosidl_typesupport_introspection_c.h"
#include "amr_fleet_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "amr_fleet_msgs/msg/detail/robot_health__functions.h"
#include "amr_fleet_msgs/msg/detail/robot_health__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `robot_id`
// Member `health_state`
// Member `active_task_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `last_pose`
#include "geometry_msgs/msg/point.h"
// Member `last_pose`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void amr_fleet_msgs__msg__RobotHealth__rosidl_typesupport_introspection_c__RobotHealth_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  amr_fleet_msgs__msg__RobotHealth__init(message_memory);
}

void amr_fleet_msgs__msg__RobotHealth__rosidl_typesupport_introspection_c__RobotHealth_fini_function(void * message_memory)
{
  amr_fleet_msgs__msg__RobotHealth__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember amr_fleet_msgs__msg__RobotHealth__rosidl_typesupport_introspection_c__RobotHealth_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__RobotHealth, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__RobotHealth, robot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "health_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__RobotHealth, health_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__RobotHealth, last_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "active_task_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__RobotHealth, active_task_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uptime_sec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__RobotHealth, uptime_sec),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers amr_fleet_msgs__msg__RobotHealth__rosidl_typesupport_introspection_c__RobotHealth_message_members = {
  "amr_fleet_msgs__msg",  // message namespace
  "RobotHealth",  // message name
  6,  // number of fields
  sizeof(amr_fleet_msgs__msg__RobotHealth),
  false,  // has_any_key_member_
  amr_fleet_msgs__msg__RobotHealth__rosidl_typesupport_introspection_c__RobotHealth_message_member_array,  // message members
  amr_fleet_msgs__msg__RobotHealth__rosidl_typesupport_introspection_c__RobotHealth_init_function,  // function to initialize message memory (memory has to be allocated)
  amr_fleet_msgs__msg__RobotHealth__rosidl_typesupport_introspection_c__RobotHealth_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t amr_fleet_msgs__msg__RobotHealth__rosidl_typesupport_introspection_c__RobotHealth_message_type_support_handle = {
  0,
  &amr_fleet_msgs__msg__RobotHealth__rosidl_typesupport_introspection_c__RobotHealth_message_members,
  get_message_typesupport_handle_function,
  &amr_fleet_msgs__msg__RobotHealth__get_type_hash,
  &amr_fleet_msgs__msg__RobotHealth__get_type_description,
  &amr_fleet_msgs__msg__RobotHealth__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_amr_fleet_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_fleet_msgs, msg, RobotHealth)() {
  amr_fleet_msgs__msg__RobotHealth__rosidl_typesupport_introspection_c__RobotHealth_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  amr_fleet_msgs__msg__RobotHealth__rosidl_typesupport_introspection_c__RobotHealth_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!amr_fleet_msgs__msg__RobotHealth__rosidl_typesupport_introspection_c__RobotHealth_message_type_support_handle.typesupport_identifier) {
    amr_fleet_msgs__msg__RobotHealth__rosidl_typesupport_introspection_c__RobotHealth_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &amr_fleet_msgs__msg__RobotHealth__rosidl_typesupport_introspection_c__RobotHealth_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
