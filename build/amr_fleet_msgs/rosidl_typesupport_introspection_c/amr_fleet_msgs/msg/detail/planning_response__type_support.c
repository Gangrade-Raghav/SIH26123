// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from amr_fleet_msgs:msg/PlanningResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "amr_fleet_msgs/msg/detail/planning_response__rosidl_typesupport_introspection_c.h"
#include "amr_fleet_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "amr_fleet_msgs/msg/detail/planning_response__functions.h"
#include "amr_fleet_msgs/msg/detail/planning_response__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `robot_id`
// Member `task_id`
// Member `sub_goal_type`
// Member `status_message`
#include "rosidl_runtime_c/string_functions.h"
// Member `full_path`
// Member `horizon_path`
// Member `execution_path`
#include "geometry_msgs/msg/point.h"
// Member `full_path`
// Member `horizon_path`
// Member `execution_path`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__PlanningResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  amr_fleet_msgs__msg__PlanningResponse__init(message_memory);
}

void amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__PlanningResponse_fini_function(void * message_memory)
{
  amr_fleet_msgs__msg__PlanningResponse__fini(message_memory);
}

size_t amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__size_function__PlanningResponse__full_path(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__get_const_function__PlanningResponse__full_path(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__get_function__PlanningResponse__full_path(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__fetch_function__PlanningResponse__full_path(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__get_const_function__PlanningResponse__full_path(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__assign_function__PlanningResponse__full_path(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__get_function__PlanningResponse__full_path(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__resize_function__PlanningResponse__full_path(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__size_function__PlanningResponse__horizon_path(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__get_const_function__PlanningResponse__horizon_path(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__get_function__PlanningResponse__horizon_path(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__fetch_function__PlanningResponse__horizon_path(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__get_const_function__PlanningResponse__horizon_path(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__assign_function__PlanningResponse__horizon_path(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__get_function__PlanningResponse__horizon_path(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__resize_function__PlanningResponse__horizon_path(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__size_function__PlanningResponse__execution_path(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__get_const_function__PlanningResponse__execution_path(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__get_function__PlanningResponse__execution_path(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__fetch_function__PlanningResponse__execution_path(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__get_const_function__PlanningResponse__execution_path(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__assign_function__PlanningResponse__execution_path(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__get_function__PlanningResponse__execution_path(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__resize_function__PlanningResponse__execution_path(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__PlanningResponse_message_member_array[14] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__PlanningResponse, header),  // bytes offset in struct
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
    offsetof(amr_fleet_msgs__msg__PlanningResponse, robot_id),  // bytes offset in struct
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
    offsetof(amr_fleet_msgs__msg__PlanningResponse, task_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sub_goal_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__PlanningResponse, sub_goal_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "full_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__PlanningResponse, full_path),  // bytes offset in struct
    NULL,  // default value
    amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__size_function__PlanningResponse__full_path,  // size() function pointer
    amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__get_const_function__PlanningResponse__full_path,  // get_const(index) function pointer
    amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__get_function__PlanningResponse__full_path,  // get(index) function pointer
    amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__fetch_function__PlanningResponse__full_path,  // fetch(index, &value) function pointer
    amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__assign_function__PlanningResponse__full_path,  // assign(index, value) function pointer
    amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__resize_function__PlanningResponse__full_path  // resize(index) function pointer
  },
  {
    "horizon_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__PlanningResponse, horizon_path),  // bytes offset in struct
    NULL,  // default value
    amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__size_function__PlanningResponse__horizon_path,  // size() function pointer
    amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__get_const_function__PlanningResponse__horizon_path,  // get_const(index) function pointer
    amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__get_function__PlanningResponse__horizon_path,  // get(index) function pointer
    amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__fetch_function__PlanningResponse__horizon_path,  // fetch(index, &value) function pointer
    amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__assign_function__PlanningResponse__horizon_path,  // assign(index, value) function pointer
    amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__resize_function__PlanningResponse__horizon_path  // resize(index) function pointer
  },
  {
    "execution_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__PlanningResponse, execution_path),  // bytes offset in struct
    NULL,  // default value
    amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__size_function__PlanningResponse__execution_path,  // size() function pointer
    amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__get_const_function__PlanningResponse__execution_path,  // get_const(index) function pointer
    amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__get_function__PlanningResponse__execution_path,  // get(index) function pointer
    amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__fetch_function__PlanningResponse__execution_path,  // fetch(index, &value) function pointer
    amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__assign_function__PlanningResponse__execution_path,  // assign(index, value) function pointer
    amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__resize_function__PlanningResponse__execution_path  // resize(index) function pointer
  },
  {
    "total_cost",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__PlanningResponse, total_cost),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "planning_latency_ms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__PlanningResponse, planning_latency_ms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__PlanningResponse, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__PlanningResponse, status_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "horizon_steps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__PlanningResponse, horizon_steps),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "execution_window",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__PlanningResponse, execution_window),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "replan_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__PlanningResponse, replan_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__PlanningResponse_message_members = {
  "amr_fleet_msgs__msg",  // message namespace
  "PlanningResponse",  // message name
  14,  // number of fields
  sizeof(amr_fleet_msgs__msg__PlanningResponse),
  false,  // has_any_key_member_
  amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__PlanningResponse_message_member_array,  // message members
  amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__PlanningResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__PlanningResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__PlanningResponse_message_type_support_handle = {
  0,
  &amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__PlanningResponse_message_members,
  get_message_typesupport_handle_function,
  &amr_fleet_msgs__msg__PlanningResponse__get_type_hash,
  &amr_fleet_msgs__msg__PlanningResponse__get_type_description,
  &amr_fleet_msgs__msg__PlanningResponse__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_amr_fleet_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_fleet_msgs, msg, PlanningResponse)() {
  amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__PlanningResponse_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__PlanningResponse_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__PlanningResponse_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__PlanningResponse_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__PlanningResponse_message_type_support_handle.typesupport_identifier) {
    amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__PlanningResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &amr_fleet_msgs__msg__PlanningResponse__rosidl_typesupport_introspection_c__PlanningResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
