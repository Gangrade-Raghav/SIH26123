// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from amr_fleet_msgs:msg/PlanningResponse.idl
// generated code does not contain a copyright notice
#include "amr_fleet_msgs/msg/detail/planning_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `robot_id`
// Member `task_id`
// Member `sub_goal_type`
// Member `status_message`
#include "rosidl_runtime_c/string_functions.h"
// Member `full_path`
// Member `horizon_path`
// Member `execution_path`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
amr_fleet_msgs__msg__PlanningResponse__init(amr_fleet_msgs__msg__PlanningResponse * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    amr_fleet_msgs__msg__PlanningResponse__fini(msg);
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__init(&msg->robot_id)) {
    amr_fleet_msgs__msg__PlanningResponse__fini(msg);
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__init(&msg->task_id)) {
    amr_fleet_msgs__msg__PlanningResponse__fini(msg);
    return false;
  }
  // sub_goal_type
  if (!rosidl_runtime_c__String__init(&msg->sub_goal_type)) {
    amr_fleet_msgs__msg__PlanningResponse__fini(msg);
    return false;
  }
  // full_path
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->full_path, 0)) {
    amr_fleet_msgs__msg__PlanningResponse__fini(msg);
    return false;
  }
  // horizon_path
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->horizon_path, 0)) {
    amr_fleet_msgs__msg__PlanningResponse__fini(msg);
    return false;
  }
  // execution_path
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->execution_path, 0)) {
    amr_fleet_msgs__msg__PlanningResponse__fini(msg);
    return false;
  }
  // total_cost
  // planning_latency_ms
  // success
  // status_message
  if (!rosidl_runtime_c__String__init(&msg->status_message)) {
    amr_fleet_msgs__msg__PlanningResponse__fini(msg);
    return false;
  }
  // horizon_steps
  // execution_window
  // replan_count
  return true;
}

void
amr_fleet_msgs__msg__PlanningResponse__fini(amr_fleet_msgs__msg__PlanningResponse * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // robot_id
  rosidl_runtime_c__String__fini(&msg->robot_id);
  // task_id
  rosidl_runtime_c__String__fini(&msg->task_id);
  // sub_goal_type
  rosidl_runtime_c__String__fini(&msg->sub_goal_type);
  // full_path
  geometry_msgs__msg__Point__Sequence__fini(&msg->full_path);
  // horizon_path
  geometry_msgs__msg__Point__Sequence__fini(&msg->horizon_path);
  // execution_path
  geometry_msgs__msg__Point__Sequence__fini(&msg->execution_path);
  // total_cost
  // planning_latency_ms
  // success
  // status_message
  rosidl_runtime_c__String__fini(&msg->status_message);
  // horizon_steps
  // execution_window
  // replan_count
}

bool
amr_fleet_msgs__msg__PlanningResponse__are_equal(const amr_fleet_msgs__msg__PlanningResponse * lhs, const amr_fleet_msgs__msg__PlanningResponse * rhs)
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
  // task_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->task_id), &(rhs->task_id)))
  {
    return false;
  }
  // sub_goal_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sub_goal_type), &(rhs->sub_goal_type)))
  {
    return false;
  }
  // full_path
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->full_path), &(rhs->full_path)))
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
  // total_cost
  if (lhs->total_cost != rhs->total_cost) {
    return false;
  }
  // planning_latency_ms
  if (lhs->planning_latency_ms != rhs->planning_latency_ms) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // status_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status_message), &(rhs->status_message)))
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
  return true;
}

bool
amr_fleet_msgs__msg__PlanningResponse__copy(
  const amr_fleet_msgs__msg__PlanningResponse * input,
  amr_fleet_msgs__msg__PlanningResponse * output)
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
  // task_id
  if (!rosidl_runtime_c__String__copy(
      &(input->task_id), &(output->task_id)))
  {
    return false;
  }
  // sub_goal_type
  if (!rosidl_runtime_c__String__copy(
      &(input->sub_goal_type), &(output->sub_goal_type)))
  {
    return false;
  }
  // full_path
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->full_path), &(output->full_path)))
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
  // total_cost
  output->total_cost = input->total_cost;
  // planning_latency_ms
  output->planning_latency_ms = input->planning_latency_ms;
  // success
  output->success = input->success;
  // status_message
  if (!rosidl_runtime_c__String__copy(
      &(input->status_message), &(output->status_message)))
  {
    return false;
  }
  // horizon_steps
  output->horizon_steps = input->horizon_steps;
  // execution_window
  output->execution_window = input->execution_window;
  // replan_count
  output->replan_count = input->replan_count;
  return true;
}

amr_fleet_msgs__msg__PlanningResponse *
amr_fleet_msgs__msg__PlanningResponse__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__PlanningResponse * msg = (amr_fleet_msgs__msg__PlanningResponse *)allocator.allocate(sizeof(amr_fleet_msgs__msg__PlanningResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(amr_fleet_msgs__msg__PlanningResponse));
  bool success = amr_fleet_msgs__msg__PlanningResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
amr_fleet_msgs__msg__PlanningResponse__destroy(amr_fleet_msgs__msg__PlanningResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    amr_fleet_msgs__msg__PlanningResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
amr_fleet_msgs__msg__PlanningResponse__Sequence__init(amr_fleet_msgs__msg__PlanningResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__PlanningResponse * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(amr_fleet_msgs__msg__PlanningResponse)) {
      return false;
    }
    data = (amr_fleet_msgs__msg__PlanningResponse *)allocator.zero_allocate(size, sizeof(amr_fleet_msgs__msg__PlanningResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = amr_fleet_msgs__msg__PlanningResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        amr_fleet_msgs__msg__PlanningResponse__fini(&data[i - 1]);
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
amr_fleet_msgs__msg__PlanningResponse__Sequence__fini(amr_fleet_msgs__msg__PlanningResponse__Sequence * array)
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
      amr_fleet_msgs__msg__PlanningResponse__fini(&array->data[i]);
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

amr_fleet_msgs__msg__PlanningResponse__Sequence *
amr_fleet_msgs__msg__PlanningResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__PlanningResponse__Sequence * array = (amr_fleet_msgs__msg__PlanningResponse__Sequence *)allocator.allocate(sizeof(amr_fleet_msgs__msg__PlanningResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = amr_fleet_msgs__msg__PlanningResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
amr_fleet_msgs__msg__PlanningResponse__Sequence__destroy(amr_fleet_msgs__msg__PlanningResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    amr_fleet_msgs__msg__PlanningResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
amr_fleet_msgs__msg__PlanningResponse__Sequence__are_equal(const amr_fleet_msgs__msg__PlanningResponse__Sequence * lhs, const amr_fleet_msgs__msg__PlanningResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!amr_fleet_msgs__msg__PlanningResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
amr_fleet_msgs__msg__PlanningResponse__Sequence__copy(
  const amr_fleet_msgs__msg__PlanningResponse__Sequence * input,
  amr_fleet_msgs__msg__PlanningResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(amr_fleet_msgs__msg__PlanningResponse)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(amr_fleet_msgs__msg__PlanningResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    amr_fleet_msgs__msg__PlanningResponse * data =
      (amr_fleet_msgs__msg__PlanningResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!amr_fleet_msgs__msg__PlanningResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          amr_fleet_msgs__msg__PlanningResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!amr_fleet_msgs__msg__PlanningResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
