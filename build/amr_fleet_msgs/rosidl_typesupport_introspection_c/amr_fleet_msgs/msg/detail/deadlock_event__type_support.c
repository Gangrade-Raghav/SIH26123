// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from amr_fleet_msgs:msg/DeadlockEvent.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "amr_fleet_msgs/msg/detail/deadlock_event__rosidl_typesupport_introspection_c.h"
#include "amr_fleet_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "amr_fleet_msgs/msg/detail/deadlock_event__functions.h"
#include "amr_fleet_msgs/msg/detail/deadlock_event__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `cycle_robot_ids`
// Member `root_cause`
// Member `recovery_action`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void amr_fleet_msgs__msg__DeadlockEvent__rosidl_typesupport_introspection_c__DeadlockEvent_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  amr_fleet_msgs__msg__DeadlockEvent__init(message_memory);
}

void amr_fleet_msgs__msg__DeadlockEvent__rosidl_typesupport_introspection_c__DeadlockEvent_fini_function(void * message_memory)
{
  amr_fleet_msgs__msg__DeadlockEvent__fini(message_memory);
}

size_t amr_fleet_msgs__msg__DeadlockEvent__rosidl_typesupport_introspection_c__size_function__DeadlockEvent__cycle_robot_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * amr_fleet_msgs__msg__DeadlockEvent__rosidl_typesupport_introspection_c__get_const_function__DeadlockEvent__cycle_robot_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * amr_fleet_msgs__msg__DeadlockEvent__rosidl_typesupport_introspection_c__get_function__DeadlockEvent__cycle_robot_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void amr_fleet_msgs__msg__DeadlockEvent__rosidl_typesupport_introspection_c__fetch_function__DeadlockEvent__cycle_robot_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    amr_fleet_msgs__msg__DeadlockEvent__rosidl_typesupport_introspection_c__get_const_function__DeadlockEvent__cycle_robot_ids(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void amr_fleet_msgs__msg__DeadlockEvent__rosidl_typesupport_introspection_c__assign_function__DeadlockEvent__cycle_robot_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    amr_fleet_msgs__msg__DeadlockEvent__rosidl_typesupport_introspection_c__get_function__DeadlockEvent__cycle_robot_ids(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool amr_fleet_msgs__msg__DeadlockEvent__rosidl_typesupport_introspection_c__resize_function__DeadlockEvent__cycle_robot_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember amr_fleet_msgs__msg__DeadlockEvent__rosidl_typesupport_introspection_c__DeadlockEvent_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__DeadlockEvent, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cycle_robot_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__DeadlockEvent, cycle_robot_ids),  // bytes offset in struct
    NULL,  // default value
    amr_fleet_msgs__msg__DeadlockEvent__rosidl_typesupport_introspection_c__size_function__DeadlockEvent__cycle_robot_ids,  // size() function pointer
    amr_fleet_msgs__msg__DeadlockEvent__rosidl_typesupport_introspection_c__get_const_function__DeadlockEvent__cycle_robot_ids,  // get_const(index) function pointer
    amr_fleet_msgs__msg__DeadlockEvent__rosidl_typesupport_introspection_c__get_function__DeadlockEvent__cycle_robot_ids,  // get(index) function pointer
    amr_fleet_msgs__msg__DeadlockEvent__rosidl_typesupport_introspection_c__fetch_function__DeadlockEvent__cycle_robot_ids,  // fetch(index, &value) function pointer
    amr_fleet_msgs__msg__DeadlockEvent__rosidl_typesupport_introspection_c__assign_function__DeadlockEvent__cycle_robot_ids,  // assign(index, value) function pointer
    amr_fleet_msgs__msg__DeadlockEvent__rosidl_typesupport_introspection_c__resize_function__DeadlockEvent__cycle_robot_ids  // resize(index) function pointer
  },
  {
    "root_cause",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__DeadlockEvent, root_cause),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "persistence_duration_sec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__DeadlockEvent, persistence_duration_sec),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "recovery_action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__DeadlockEvent, recovery_action),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "recovery_success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__DeadlockEvent, recovery_success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "recovery_duration_sec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__DeadlockEvent, recovery_duration_sec),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers amr_fleet_msgs__msg__DeadlockEvent__rosidl_typesupport_introspection_c__DeadlockEvent_message_members = {
  "amr_fleet_msgs__msg",  // message namespace
  "DeadlockEvent",  // message name
  7,  // number of fields
  sizeof(amr_fleet_msgs__msg__DeadlockEvent),
  false,  // has_any_key_member_
  amr_fleet_msgs__msg__DeadlockEvent__rosidl_typesupport_introspection_c__DeadlockEvent_message_member_array,  // message members
  amr_fleet_msgs__msg__DeadlockEvent__rosidl_typesupport_introspection_c__DeadlockEvent_init_function,  // function to initialize message memory (memory has to be allocated)
  amr_fleet_msgs__msg__DeadlockEvent__rosidl_typesupport_introspection_c__DeadlockEvent_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t amr_fleet_msgs__msg__DeadlockEvent__rosidl_typesupport_introspection_c__DeadlockEvent_message_type_support_handle = {
  0,
  &amr_fleet_msgs__msg__DeadlockEvent__rosidl_typesupport_introspection_c__DeadlockEvent_message_members,
  get_message_typesupport_handle_function,
  &amr_fleet_msgs__msg__DeadlockEvent__get_type_hash,
  &amr_fleet_msgs__msg__DeadlockEvent__get_type_description,
  &amr_fleet_msgs__msg__DeadlockEvent__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_amr_fleet_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_fleet_msgs, msg, DeadlockEvent)() {
  amr_fleet_msgs__msg__DeadlockEvent__rosidl_typesupport_introspection_c__DeadlockEvent_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!amr_fleet_msgs__msg__DeadlockEvent__rosidl_typesupport_introspection_c__DeadlockEvent_message_type_support_handle.typesupport_identifier) {
    amr_fleet_msgs__msg__DeadlockEvent__rosidl_typesupport_introspection_c__DeadlockEvent_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &amr_fleet_msgs__msg__DeadlockEvent__rosidl_typesupport_introspection_c__DeadlockEvent_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
