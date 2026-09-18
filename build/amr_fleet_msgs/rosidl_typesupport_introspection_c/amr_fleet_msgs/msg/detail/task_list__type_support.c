// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from amr_fleet_msgs:msg/TaskList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "amr_fleet_msgs/msg/detail/task_list__rosidl_typesupport_introspection_c.h"
#include "amr_fleet_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "amr_fleet_msgs/msg/detail/task_list__functions.h"
#include "amr_fleet_msgs/msg/detail/task_list__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `tasks`
#include "amr_fleet_msgs/msg/task_definition.h"
// Member `tasks`
#include "amr_fleet_msgs/msg/detail/task_definition__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void amr_fleet_msgs__msg__TaskList__rosidl_typesupport_introspection_c__TaskList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  amr_fleet_msgs__msg__TaskList__init(message_memory);
}

void amr_fleet_msgs__msg__TaskList__rosidl_typesupport_introspection_c__TaskList_fini_function(void * message_memory)
{
  amr_fleet_msgs__msg__TaskList__fini(message_memory);
}

size_t amr_fleet_msgs__msg__TaskList__rosidl_typesupport_introspection_c__size_function__TaskList__tasks(
  const void * untyped_member)
{
  const amr_fleet_msgs__msg__TaskDefinition__Sequence * member =
    (const amr_fleet_msgs__msg__TaskDefinition__Sequence *)(untyped_member);
  return member->size;
}

const void * amr_fleet_msgs__msg__TaskList__rosidl_typesupport_introspection_c__get_const_function__TaskList__tasks(
  const void * untyped_member, size_t index)
{
  const amr_fleet_msgs__msg__TaskDefinition__Sequence * member =
    (const amr_fleet_msgs__msg__TaskDefinition__Sequence *)(untyped_member);
  return &member->data[index];
}

void * amr_fleet_msgs__msg__TaskList__rosidl_typesupport_introspection_c__get_function__TaskList__tasks(
  void * untyped_member, size_t index)
{
  amr_fleet_msgs__msg__TaskDefinition__Sequence * member =
    (amr_fleet_msgs__msg__TaskDefinition__Sequence *)(untyped_member);
  return &member->data[index];
}

void amr_fleet_msgs__msg__TaskList__rosidl_typesupport_introspection_c__fetch_function__TaskList__tasks(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const amr_fleet_msgs__msg__TaskDefinition * item =
    ((const amr_fleet_msgs__msg__TaskDefinition *)
    amr_fleet_msgs__msg__TaskList__rosidl_typesupport_introspection_c__get_const_function__TaskList__tasks(untyped_member, index));
  amr_fleet_msgs__msg__TaskDefinition * value =
    (amr_fleet_msgs__msg__TaskDefinition *)(untyped_value);
  *value = *item;
}

void amr_fleet_msgs__msg__TaskList__rosidl_typesupport_introspection_c__assign_function__TaskList__tasks(
  void * untyped_member, size_t index, const void * untyped_value)
{
  amr_fleet_msgs__msg__TaskDefinition * item =
    ((amr_fleet_msgs__msg__TaskDefinition *)
    amr_fleet_msgs__msg__TaskList__rosidl_typesupport_introspection_c__get_function__TaskList__tasks(untyped_member, index));
  const amr_fleet_msgs__msg__TaskDefinition * value =
    (const amr_fleet_msgs__msg__TaskDefinition *)(untyped_value);
  *item = *value;
}

bool amr_fleet_msgs__msg__TaskList__rosidl_typesupport_introspection_c__resize_function__TaskList__tasks(
  void * untyped_member, size_t size)
{
  amr_fleet_msgs__msg__TaskDefinition__Sequence * member =
    (amr_fleet_msgs__msg__TaskDefinition__Sequence *)(untyped_member);
  amr_fleet_msgs__msg__TaskDefinition__Sequence__fini(member);
  return amr_fleet_msgs__msg__TaskDefinition__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember amr_fleet_msgs__msg__TaskList__rosidl_typesupport_introspection_c__TaskList_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__TaskList, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tasks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs__msg__TaskList, tasks),  // bytes offset in struct
    NULL,  // default value
    amr_fleet_msgs__msg__TaskList__rosidl_typesupport_introspection_c__size_function__TaskList__tasks,  // size() function pointer
    amr_fleet_msgs__msg__TaskList__rosidl_typesupport_introspection_c__get_const_function__TaskList__tasks,  // get_const(index) function pointer
    amr_fleet_msgs__msg__TaskList__rosidl_typesupport_introspection_c__get_function__TaskList__tasks,  // get(index) function pointer
    amr_fleet_msgs__msg__TaskList__rosidl_typesupport_introspection_c__fetch_function__TaskList__tasks,  // fetch(index, &value) function pointer
    amr_fleet_msgs__msg__TaskList__rosidl_typesupport_introspection_c__assign_function__TaskList__tasks,  // assign(index, value) function pointer
    amr_fleet_msgs__msg__TaskList__rosidl_typesupport_introspection_c__resize_function__TaskList__tasks  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers amr_fleet_msgs__msg__TaskList__rosidl_typesupport_introspection_c__TaskList_message_members = {
  "amr_fleet_msgs__msg",  // message namespace
  "TaskList",  // message name
  2,  // number of fields
  sizeof(amr_fleet_msgs__msg__TaskList),
  false,  // has_any_key_member_
  amr_fleet_msgs__msg__TaskList__rosidl_typesupport_introspection_c__TaskList_message_member_array,  // message members
  amr_fleet_msgs__msg__TaskList__rosidl_typesupport_introspection_c__TaskList_init_function,  // function to initialize message memory (memory has to be allocated)
  amr_fleet_msgs__msg__TaskList__rosidl_typesupport_introspection_c__TaskList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t amr_fleet_msgs__msg__TaskList__rosidl_typesupport_introspection_c__TaskList_message_type_support_handle = {
  0,
  &amr_fleet_msgs__msg__TaskList__rosidl_typesupport_introspection_c__TaskList_message_members,
  get_message_typesupport_handle_function,
  &amr_fleet_msgs__msg__TaskList__get_type_hash,
  &amr_fleet_msgs__msg__TaskList__get_type_description,
  &amr_fleet_msgs__msg__TaskList__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_amr_fleet_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_fleet_msgs, msg, TaskList)() {
  amr_fleet_msgs__msg__TaskList__rosidl_typesupport_introspection_c__TaskList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  amr_fleet_msgs__msg__TaskList__rosidl_typesupport_introspection_c__TaskList_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_fleet_msgs, msg, TaskDefinition)();
  if (!amr_fleet_msgs__msg__TaskList__rosidl_typesupport_introspection_c__TaskList_message_type_support_handle.typesupport_identifier) {
    amr_fleet_msgs__msg__TaskList__rosidl_typesupport_introspection_c__TaskList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &amr_fleet_msgs__msg__TaskList__rosidl_typesupport_introspection_c__TaskList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
