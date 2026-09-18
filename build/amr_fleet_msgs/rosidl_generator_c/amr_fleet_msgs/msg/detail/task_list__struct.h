// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from amr_fleet_msgs:msg/TaskList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/task_list.h"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__TASK_LIST__STRUCT_H_
#define AMR_FLEET_MSGS__MSG__DETAIL__TASK_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'tasks'
#include "amr_fleet_msgs/msg/detail/task_definition__struct.h"

/// Struct defined in msg/TaskList in the package amr_fleet_msgs.
typedef struct amr_fleet_msgs__msg__TaskList
{
  std_msgs__msg__Header header;
  amr_fleet_msgs__msg__TaskDefinition__Sequence tasks;
} amr_fleet_msgs__msg__TaskList;

// Struct for a sequence of amr_fleet_msgs__msg__TaskList.
typedef struct amr_fleet_msgs__msg__TaskList__Sequence
{
  amr_fleet_msgs__msg__TaskList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amr_fleet_msgs__msg__TaskList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__TASK_LIST__STRUCT_H_
