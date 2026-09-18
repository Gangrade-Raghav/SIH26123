// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from amr_fleet_msgs:msg/CBBABid.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "amr_fleet_msgs/msg/detail/cbba_bid__rosidl_typesupport_introspection_c.h"
#include "amr_fleet_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "amr_fleet_msgs/msg/detail/cbba_bid__functions.h"
#include "amr_fleet_msgs/msg/detail/cbba_bid__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `robot_id`
// Member `task_ids`
// Member `winning_robots`
#include "rosidl_runtime_c/string_functions.h"
// Member `winning_bids`
// Member `timestamps`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__CBBABid_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  amr_fleet_msgs__msg__CBBABid__init(message_memory);
}

void amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__CBBABid_fini_function(void * message_memory)
{
  amr_fleet_msgs__msg__CBBABid__fini(message_memory);
}

size_t amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__size_function__CBBABid__task_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__get_const_function__CBBABid__task_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__get_function__CBBABid__task_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__fetch_function__CBBABid__task_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__get_const_function__CBBABid__task_ids(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__assign_function__CBBABid__task_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__get_function__CBBABid__task_ids(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__resize_function__CBBABid__task_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__size_function__CBBABid__winning_bids(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__get_const_function__CBBABid__winning_bids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__get_function__CBBABid__winning_bids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__fetch_function__CBBABid__winning_bids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__get_const_function__CBBABid__winning_bids(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__assign_function__CBBABid__winning_bids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__get_function__CBBABid__winning_bids(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__resize_function__CBBABid__winning_bids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__size_function__CBBABid__winning_robots(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__get_const_function__CBBABid__winning_robots(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__get_function__CBBABid__winning_robots(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__fetch_function__CBBABid__winning_robots(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__get_const_function__CBBABid__winning_robots(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__assign_function__CBBABid__winning_robots(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__get_function__CBBABid__winning_robots(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__resize_function__CBBABid__winning_robots(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__size_function__CBBABid__timestamps(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__get_const_function__CBBABid__timestamps(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__get_function__CBBABid__timestamps(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__fetch_function__CBBABid__timestamps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__get_const_function__CBBABid__timestamps(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__assign_function__CBBABid__timestamps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__get_function__CBBABid__timestamps(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__resize_function__CBBABid__timestamps(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__CBBABid_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__CBBABid, header),  // bytes offset in struct
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
    offsetof(amr_fleet_msgs__msg__CBBABid, robot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "iteration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__CBBABid, iteration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "task_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__CBBABid, task_ids),  // bytes offset in struct
    NULL,  // default value
    amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__size_function__CBBABid__task_ids,  // size() function pointer
    amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__get_const_function__CBBABid__task_ids,  // get_const(index) function pointer
    amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__get_function__CBBABid__task_ids,  // get(index) function pointer
    amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__fetch_function__CBBABid__task_ids,  // fetch(index, &value) function pointer
    amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__assign_function__CBBABid__task_ids,  // assign(index, value) function pointer
    amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__resize_function__CBBABid__task_ids  // resize(index) function pointer
  },
  {
    "winning_bids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__CBBABid, winning_bids),  // bytes offset in struct
    NULL,  // default value
    amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__size_function__CBBABid__winning_bids,  // size() function pointer
    amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__get_const_function__CBBABid__winning_bids,  // get_const(index) function pointer
    amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__get_function__CBBABid__winning_bids,  // get(index) function pointer
    amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__fetch_function__CBBABid__winning_bids,  // fetch(index, &value) function pointer
    amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__assign_function__CBBABid__winning_bids,  // assign(index, value) function pointer
    amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__resize_function__CBBABid__winning_bids  // resize(index) function pointer
  },
  {
    "winning_robots",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__CBBABid, winning_robots),  // bytes offset in struct
    NULL,  // default value
    amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__size_function__CBBABid__winning_robots,  // size() function pointer
    amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__get_const_function__CBBABid__winning_robots,  // get_const(index) function pointer
    amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__get_function__CBBABid__winning_robots,  // get(index) function pointer
    amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__fetch_function__CBBABid__winning_robots,  // fetch(index, &value) function pointer
    amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__assign_function__CBBABid__winning_robots,  // assign(index, value) function pointer
    amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__resize_function__CBBABid__winning_robots  // resize(index) function pointer
  },
  {
    "timestamps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__CBBABid, timestamps),  // bytes offset in struct
    NULL,  // default value
    amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__size_function__CBBABid__timestamps,  // size() function pointer
    amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__get_const_function__CBBABid__timestamps,  // get_const(index) function pointer
    amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__get_function__CBBABid__timestamps,  // get(index) function pointer
    amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__fetch_function__CBBABid__timestamps,  // fetch(index, &value) function pointer
    amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__assign_function__CBBABid__timestamps,  // assign(index, value) function pointer
    amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__resize_function__CBBABid__timestamps  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__CBBABid_message_members = {
  "amr_fleet_msgs__msg",  // message namespace
  "CBBABid",  // message name
  7,  // number of fields
  sizeof(amr_fleet_msgs__msg__CBBABid),
  false,  // has_any_key_member_
  amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__CBBABid_message_member_array,  // message members
  amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__CBBABid_init_function,  // function to initialize message memory (memory has to be allocated)
  amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__CBBABid_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__CBBABid_message_type_support_handle = {
  0,
  &amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__CBBABid_message_members,
  get_message_typesupport_handle_function,
  &amr_fleet_msgs__msg__CBBABid__get_type_hash,
  &amr_fleet_msgs__msg__CBBABid__get_type_description,
  &amr_fleet_msgs__msg__CBBABid__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_amr_fleet_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_fleet_msgs, msg, CBBABid)() {
  amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__CBBABid_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__CBBABid_message_type_support_handle.typesupport_identifier) {
    amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__CBBABid_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &amr_fleet_msgs__msg__CBBABid__rosidl_typesupport_introspection_c__CBBABid_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
