// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from amr_fleet_msgs:msg/RobotHealth.idl
// generated code does not contain a copyright notice
#include "amr_fleet_msgs/msg/detail/robot_health__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `robot_id`
// Member `health_state`
// Member `active_task_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `last_pose`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
amr_fleet_msgs__msg__RobotHealth__init(amr_fleet_msgs__msg__RobotHealth * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    amr_fleet_msgs__msg__RobotHealth__fini(msg);
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__init(&msg->robot_id)) {
    amr_fleet_msgs__msg__RobotHealth__fini(msg);
    return false;
  }
  // health_state
  if (!rosidl_runtime_c__String__init(&msg->health_state)) {
    amr_fleet_msgs__msg__RobotHealth__fini(msg);
    return false;
  }
  // last_pose
  if (!geometry_msgs__msg__Point__init(&msg->last_pose)) {
    amr_fleet_msgs__msg__RobotHealth__fini(msg);
    return false;
  }
  // active_task_id
  if (!rosidl_runtime_c__String__init(&msg->active_task_id)) {
    amr_fleet_msgs__msg__RobotHealth__fini(msg);
    return false;
  }
  // uptime_sec
  return true;
}

void
amr_fleet_msgs__msg__RobotHealth__fini(amr_fleet_msgs__msg__RobotHealth * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // robot_id
  rosidl_runtime_c__String__fini(&msg->robot_id);
  // health_state
  rosidl_runtime_c__String__fini(&msg->health_state);
  // last_pose
  geometry_msgs__msg__Point__fini(&msg->last_pose);
  // active_task_id
  rosidl_runtime_c__String__fini(&msg->active_task_id);
  // uptime_sec
}

bool
amr_fleet_msgs__msg__RobotHealth__are_equal(const amr_fleet_msgs__msg__RobotHealth * lhs, const amr_fleet_msgs__msg__RobotHealth * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_id), &(rhs->robot_id)))
  {
    return false;
  }
  // health_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->health_state), &(rhs->health_state)))
  {
    return false;
  }
  // last_pose
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->last_pose), &(rhs->last_pose)))
  {
    return false;
  }
  // active_task_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->active_task_id), &(rhs->active_task_id)))
  {
    return false;
  }
  // uptime_sec
  if (lhs->uptime_sec != rhs->uptime_sec) {
    return false;
  }
  return true;
}

bool
amr_fleet_msgs__msg__RobotHealth__copy(
  const amr_fleet_msgs__msg__RobotHealth * input,
  amr_fleet_msgs__msg__RobotHealth * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_id), &(output->robot_id)))
  {
    return false;
  }
  // health_state
  if (!rosidl_runtime_c__String__copy(
      &(input->health_state), &(output->health_state)))
  {
    return false;
  }
  // last_pose
  if (!geometry_msgs__msg__Point__copy(
      &(input->last_pose), &(output->last_pose)))
  {
    return false;
  }
  // active_task_id
  if (!rosidl_runtime_c__String__copy(
      &(input->active_task_id), &(output->active_task_id)))
  {
    return false;
  }
  // uptime_sec
  output->uptime_sec = input->uptime_sec;
  return true;
}

amr_fleet_msgs__msg__RobotHealth *
amr_fleet_msgs__msg__RobotHealth__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__RobotHealth * msg = (amr_fleet_msgs__msg__RobotHealth *)allocator.allocate(sizeof(amr_fleet_msgs__msg__RobotHealth), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(amr_fleet_msgs__msg__RobotHealth));
  bool success = amr_fleet_msgs__msg__RobotHealth__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
amr_fleet_msgs__msg__RobotHealth__destroy(amr_fleet_msgs__msg__RobotHealth * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    amr_fleet_msgs__msg__RobotHealth__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
amr_fleet_msgs__msg__RobotHealth__Sequence__init(amr_fleet_msgs__msg__RobotHealth__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__RobotHealth * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(amr_fleet_msgs__msg__RobotHealth)) {
      return false;
    }
    data = (amr_fleet_msgs__msg__RobotHealth *)allocator.zero_allocate(size, sizeof(amr_fleet_msgs__msg__RobotHealth), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = amr_fleet_msgs__msg__RobotHealth__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        amr_fleet_msgs__msg__RobotHealth__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
amr_fleet_msgs__msg__RobotHealth__Sequence__fini(amr_fleet_msgs__msg__RobotHealth__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      amr_fleet_msgs__msg__RobotHealth__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

amr_fleet_msgs__msg__RobotHealth__Sequence *
amr_fleet_msgs__msg__RobotHealth__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__RobotHealth__Sequence * array = (amr_fleet_msgs__msg__RobotHealth__Sequence *)allocator.allocate(sizeof(amr_fleet_msgs__msg__RobotHealth__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = amr_fleet_msgs__msg__RobotHealth__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
amr_fleet_msgs__msg__RobotHealth__Sequence__destroy(amr_fleet_msgs__msg__RobotHealth__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    amr_fleet_msgs__msg__RobotHealth__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
amr_fleet_msgs__msg__RobotHealth__Sequence__are_equal(const amr_fleet_msgs__msg__RobotHealth__Sequence * lhs, const amr_fleet_msgs__msg__RobotHealth__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!amr_fleet_msgs__msg__RobotHealth__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
amr_fleet_msgs__msg__RobotHealth__Sequence__copy(
  const amr_fleet_msgs__msg__RobotHealth__Sequence * input,
  amr_fleet_msgs__msg__RobotHealth__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(amr_fleet_msgs__msg__RobotHealth)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(amr_fleet_msgs__msg__RobotHealth);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    amr_fleet_msgs__msg__RobotHealth * data =
      (amr_fleet_msgs__msg__RobotHealth *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!amr_fleet_msgs__msg__RobotHealth__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          amr_fleet_msgs__msg__RobotHealth__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!amr_fleet_msgs__msg__RobotHealth__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
