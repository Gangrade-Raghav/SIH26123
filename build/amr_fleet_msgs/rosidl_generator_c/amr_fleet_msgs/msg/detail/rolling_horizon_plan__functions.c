// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from amr_fleet_msgs:msg/RollingHorizonPlan.idl
// generated code does not contain a copyright notice
#include "amr_fleet_msgs/msg/detail/rolling_horizon_plan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `robot_id`
// Member `assigned_bundle`
// Member `current_task_id`
// Member `current_phase`
#include "rosidl_runtime_c/string_functions.h"
// Member `current_goal`
// Member `horizon_path`
// Member `execution_path`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
amr_fleet_msgs__msg__RollingHorizonPlan__init(amr_fleet_msgs__msg__RollingHorizonPlan * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    amr_fleet_msgs__msg__RollingHorizonPlan__fini(msg);
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__init(&msg->robot_id)) {
    amr_fleet_msgs__msg__RollingHorizonPlan__fini(msg);
    return false;
  }
  // assigned_bundle
  if (!rosidl_runtime_c__String__Sequence__init(&msg->assigned_bundle, 0)) {
    amr_fleet_msgs__msg__RollingHorizonPlan__fini(msg);
    return false;
  }
  // current_task_id
  if (!rosidl_runtime_c__String__init(&msg->current_task_id)) {
    amr_fleet_msgs__msg__RollingHorizonPlan__fini(msg);
    return false;
  }
  // current_phase
  if (!rosidl_runtime_c__String__init(&msg->current_phase)) {
    amr_fleet_msgs__msg__RollingHorizonPlan__fini(msg);
    return false;
  }
  // current_goal
  if (!geometry_msgs__msg__Point__init(&msg->current_goal)) {
    amr_fleet_msgs__msg__RollingHorizonPlan__fini(msg);
    return false;
  }
  // horizon_path
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->horizon_path, 0)) {
    amr_fleet_msgs__msg__RollingHorizonPlan__fini(msg);
    return false;
  }
  // execution_path
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->execution_path, 0)) {
    amr_fleet_msgs__msg__RollingHorizonPlan__fini(msg);
    return false;
  }
  // horizon_steps
  // execution_window
  // replan_count
  // planning_latency_ms
  // is_valid
  return true;
}

void
amr_fleet_msgs__msg__RollingHorizonPlan__fini(amr_fleet_msgs__msg__RollingHorizonPlan * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // robot_id
  rosidl_runtime_c__String__fini(&msg->robot_id);
  // assigned_bundle
  rosidl_runtime_c__String__Sequence__fini(&msg->assigned_bundle);
  // current_task_id
  rosidl_runtime_c__String__fini(&msg->current_task_id);
  // current_phase
  rosidl_runtime_c__String__fini(&msg->current_phase);
  // current_goal
  geometry_msgs__msg__Point__fini(&msg->current_goal);
  // horizon_path
  geometry_msgs__msg__Point__Sequence__fini(&msg->horizon_path);
  // execution_path
  geometry_msgs__msg__Point__Sequence__fini(&msg->execution_path);
  // horizon_steps
  // execution_window
  // replan_count
  // planning_latency_ms
  // is_valid
}

bool
amr_fleet_msgs__msg__RollingHorizonPlan__are_equal(const amr_fleet_msgs__msg__RollingHorizonPlan * lhs, const amr_fleet_msgs__msg__RollingHorizonPlan * rhs)
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
  // assigned_bundle
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->assigned_bundle), &(rhs->assigned_bundle)))
  {
    return false;
  }
  // current_task_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_task_id), &(rhs->current_task_id)))
  {
    return false;
  }
  // current_phase
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_phase), &(rhs->current_phase)))
  {
    return false;
  }
  // current_goal
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->current_goal), &(rhs->current_goal)))
  {
    return false;
  }
  // horizon_path
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->horizon_path), &(rhs->horizon_path)))
  {
    return false;
  }
  // execution_path
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->execution_path), &(rhs->execution_path)))
  {
    return false;
  }
  // horizon_steps
  if (lhs->horizon_steps != rhs->horizon_steps) {
    return false;
  }
  // execution_window
  if (lhs->execution_window != rhs->execution_window) {
    return false;
  }
  // replan_count
  if (lhs->replan_count != rhs->replan_count) {
    return false;
  }
  // planning_latency_ms
  if (lhs->planning_latency_ms != rhs->planning_latency_ms) {
    return false;
  }
  // is_valid
  if (lhs->is_valid != rhs->is_valid) {
    return false;
  }
  return true;
}

bool
amr_fleet_msgs__msg__RollingHorizonPlan__copy(
  const amr_fleet_msgs__msg__RollingHorizonPlan * input,
  amr_fleet_msgs__msg__RollingHorizonPlan * output)
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
  // assigned_bundle
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->assigned_bundle), &(output->assigned_bundle)))
  {
    return false;
  }
  // current_task_id
  if (!rosidl_runtime_c__String__copy(
      &(input->current_task_id), &(output->current_task_id)))
  {
    return false;
  }
  // current_phase
  if (!rosidl_runtime_c__String__copy(
      &(input->current_phase), &(output->current_phase)))
  {
    return false;
  }
  // current_goal
  if (!geometry_msgs__msg__Point__copy(
      &(input->current_goal), &(output->current_goal)))
  {
    return false;
  }
  // horizon_path
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->horizon_path), &(output->horizon_path)))
  {
    return false;
  }
  // execution_path
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->execution_path), &(output->execution_path)))
  {
    return false;
  }
  // horizon_steps
  output->horizon_steps = input->horizon_steps;
  // execution_window
  output->execution_window = input->execution_window;
  // replan_count
  output->replan_count = input->replan_count;
  // planning_latency_ms
  output->planning_latency_ms = input->planning_latency_ms;
  // is_valid
  output->is_valid = input->is_valid;
  return true;
}

amr_fleet_msgs__msg__RollingHorizonPlan *
amr_fleet_msgs__msg__RollingHorizonPlan__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__RollingHorizonPlan * msg = (amr_fleet_msgs__msg__RollingHorizonPlan *)allocator.allocate(sizeof(amr_fleet_msgs__msg__RollingHorizonPlan), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(amr_fleet_msgs__msg__RollingHorizonPlan));
  bool success = amr_fleet_msgs__msg__RollingHorizonPlan__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
amr_fleet_msgs__msg__RollingHorizonPlan__destroy(amr_fleet_msgs__msg__RollingHorizonPlan * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    amr_fleet_msgs__msg__RollingHorizonPlan__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
amr_fleet_msgs__msg__RollingHorizonPlan__Sequence__init(amr_fleet_msgs__msg__RollingHorizonPlan__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__RollingHorizonPlan * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(amr_fleet_msgs__msg__RollingHorizonPlan)) {
      return false;
    }
    data = (amr_fleet_msgs__msg__RollingHorizonPlan *)allocator.zero_allocate(size, sizeof(amr_fleet_msgs__msg__RollingHorizonPlan), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = amr_fleet_msgs__msg__RollingHorizonPlan__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        amr_fleet_msgs__msg__RollingHorizonPlan__fini(&data[i - 1]);
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
amr_fleet_msgs__msg__RollingHorizonPlan__Sequence__fini(amr_fleet_msgs__msg__RollingHorizonPlan__Sequence * array)
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
      amr_fleet_msgs__msg__RollingHorizonPlan__fini(&array->data[i]);
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

amr_fleet_msgs__msg__RollingHorizonPlan__Sequence *
amr_fleet_msgs__msg__RollingHorizonPlan__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__RollingHorizonPlan__Sequence * array = (amr_fleet_msgs__msg__RollingHorizonPlan__Sequence *)allocator.allocate(sizeof(amr_fleet_msgs__msg__RollingHorizonPlan__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = amr_fleet_msgs__msg__RollingHorizonPlan__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
amr_fleet_msgs__msg__RollingHorizonPlan__Sequence__destroy(amr_fleet_msgs__msg__RollingHorizonPlan__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    amr_fleet_msgs__msg__RollingHorizonPlan__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
amr_fleet_msgs__msg__RollingHorizonPlan__Sequence__are_equal(const amr_fleet_msgs__msg__RollingHorizonPlan__Sequence * lhs, const amr_fleet_msgs__msg__RollingHorizonPlan__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!amr_fleet_msgs__msg__RollingHorizonPlan__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
amr_fleet_msgs__msg__RollingHorizonPlan__Sequence__copy(
  const amr_fleet_msgs__msg__RollingHorizonPlan__Sequence * input,
  amr_fleet_msgs__msg__RollingHorizonPlan__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(amr_fleet_msgs__msg__RollingHorizonPlan)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(amr_fleet_msgs__msg__RollingHorizonPlan);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    amr_fleet_msgs__msg__RollingHorizonPlan * data =
      (amr_fleet_msgs__msg__RollingHorizonPlan *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!amr_fleet_msgs__msg__RollingHorizonPlan__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          amr_fleet_msgs__msg__RollingHorizonPlan__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!amr_fleet_msgs__msg__RollingHorizonPlan__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
