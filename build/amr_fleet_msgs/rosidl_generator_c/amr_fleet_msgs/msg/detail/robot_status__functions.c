// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from amr_fleet_msgs:msg/RobotStatus.idl
// generated code does not contain a copyright notice
#include "amr_fleet_msgs/msg/detail/robot_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `robot_id`
// Member `state`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `velocity`
#include "geometry_msgs/msg/detail/twist__functions.h"

bool
amr_fleet_msgs__msg__RobotStatus__init(amr_fleet_msgs__msg__RobotStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    amr_fleet_msgs__msg__RobotStatus__fini(msg);
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__init(&msg->robot_id)) {
    amr_fleet_msgs__msg__RobotStatus__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    amr_fleet_msgs__msg__RobotStatus__fini(msg);
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Twist__init(&msg->velocity)) {
    amr_fleet_msgs__msg__RobotStatus__fini(msg);
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    amr_fleet_msgs__msg__RobotStatus__fini(msg);
    return false;
  }
  // plan_epoch
  // battery_percentage
  // cpu_load
  return true;
}

void
amr_fleet_msgs__msg__RobotStatus__fini(amr_fleet_msgs__msg__RobotStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // robot_id
  rosidl_runtime_c__String__fini(&msg->robot_id);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // velocity
  geometry_msgs__msg__Twist__fini(&msg->velocity);
  // state
  rosidl_runtime_c__String__fini(&msg->state);
  // plan_epoch
  // battery_percentage
  // cpu_load
}

bool
amr_fleet_msgs__msg__RobotStatus__are_equal(const amr_fleet_msgs__msg__RobotStatus * lhs, const amr_fleet_msgs__msg__RobotStatus * rhs)
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
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // plan_epoch
  if (lhs->plan_epoch != rhs->plan_epoch) {
    return false;
  }
  // battery_percentage
  if (lhs->battery_percentage != rhs->battery_percentage) {
    return false;
  }
  // cpu_load
  if (lhs->cpu_load != rhs->cpu_load) {
    return false;
  }
  return true;
}

bool
amr_fleet_msgs__msg__RobotStatus__copy(
  const amr_fleet_msgs__msg__RobotStatus * input,
  amr_fleet_msgs__msg__RobotStatus * output)
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
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Twist__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // plan_epoch
  output->plan_epoch = input->plan_epoch;
  // battery_percentage
  output->battery_percentage = input->battery_percentage;
  // cpu_load
  output->cpu_load = input->cpu_load;
  return true;
}

amr_fleet_msgs__msg__RobotStatus *
amr_fleet_msgs__msg__RobotStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__RobotStatus * msg = (amr_fleet_msgs__msg__RobotStatus *)allocator.allocate(sizeof(amr_fleet_msgs__msg__RobotStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(amr_fleet_msgs__msg__RobotStatus));
  bool success = amr_fleet_msgs__msg__RobotStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
amr_fleet_msgs__msg__RobotStatus__destroy(amr_fleet_msgs__msg__RobotStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    amr_fleet_msgs__msg__RobotStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
amr_fleet_msgs__msg__RobotStatus__Sequence__init(amr_fleet_msgs__msg__RobotStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__RobotStatus * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(amr_fleet_msgs__msg__RobotStatus)) {
      return false;
    }
    data = (amr_fleet_msgs__msg__RobotStatus *)allocator.zero_allocate(size, sizeof(amr_fleet_msgs__msg__RobotStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = amr_fleet_msgs__msg__RobotStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        amr_fleet_msgs__msg__RobotStatus__fini(&data[i - 1]);
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
amr_fleet_msgs__msg__RobotStatus__Sequence__fini(amr_fleet_msgs__msg__RobotStatus__Sequence * array)
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
      amr_fleet_msgs__msg__RobotStatus__fini(&array->data[i]);
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

amr_fleet_msgs__msg__RobotStatus__Sequence *
amr_fleet_msgs__msg__RobotStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__RobotStatus__Sequence * array = (amr_fleet_msgs__msg__RobotStatus__Sequence *)allocator.allocate(sizeof(amr_fleet_msgs__msg__RobotStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = amr_fleet_msgs__msg__RobotStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
amr_fleet_msgs__msg__RobotStatus__Sequence__destroy(amr_fleet_msgs__msg__RobotStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    amr_fleet_msgs__msg__RobotStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
amr_fleet_msgs__msg__RobotStatus__Sequence__are_equal(const amr_fleet_msgs__msg__RobotStatus__Sequence * lhs, const amr_fleet_msgs__msg__RobotStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!amr_fleet_msgs__msg__RobotStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
amr_fleet_msgs__msg__RobotStatus__Sequence__copy(
  const amr_fleet_msgs__msg__RobotStatus__Sequence * input,
  amr_fleet_msgs__msg__RobotStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(amr_fleet_msgs__msg__RobotStatus)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(amr_fleet_msgs__msg__RobotStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    amr_fleet_msgs__msg__RobotStatus * data =
      (amr_fleet_msgs__msg__RobotStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!amr_fleet_msgs__msg__RobotStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          amr_fleet_msgs__msg__RobotStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!amr_fleet_msgs__msg__RobotStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
