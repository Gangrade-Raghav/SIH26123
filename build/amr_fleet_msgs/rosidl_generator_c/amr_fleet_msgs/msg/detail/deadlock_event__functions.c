// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from amr_fleet_msgs:msg/DeadlockEvent.idl
// generated code does not contain a copyright notice
#include "amr_fleet_msgs/msg/detail/deadlock_event__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `cycle_robot_ids`
// Member `root_cause`
// Member `recovery_action`
#include "rosidl_runtime_c/string_functions.h"

bool
amr_fleet_msgs__msg__DeadlockEvent__init(amr_fleet_msgs__msg__DeadlockEvent * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    amr_fleet_msgs__msg__DeadlockEvent__fini(msg);
    return false;
  }
  // cycle_robot_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->cycle_robot_ids, 0)) {
    amr_fleet_msgs__msg__DeadlockEvent__fini(msg);
    return false;
  }
  // root_cause
  if (!rosidl_runtime_c__String__init(&msg->root_cause)) {
    amr_fleet_msgs__msg__DeadlockEvent__fini(msg);
    return false;
  }
  // persistence_duration_sec
  // recovery_action
  if (!rosidl_runtime_c__String__init(&msg->recovery_action)) {
    amr_fleet_msgs__msg__DeadlockEvent__fini(msg);
    return false;
  }
  // recovery_success
  // recovery_duration_sec
  return true;
}

void
amr_fleet_msgs__msg__DeadlockEvent__fini(amr_fleet_msgs__msg__DeadlockEvent * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // cycle_robot_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->cycle_robot_ids);
  // root_cause
  rosidl_runtime_c__String__fini(&msg->root_cause);
  // persistence_duration_sec
  // recovery_action
  rosidl_runtime_c__String__fini(&msg->recovery_action);
  // recovery_success
  // recovery_duration_sec
}

bool
amr_fleet_msgs__msg__DeadlockEvent__are_equal(const amr_fleet_msgs__msg__DeadlockEvent * lhs, const amr_fleet_msgs__msg__DeadlockEvent * rhs)
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
  // cycle_robot_ids
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->cycle_robot_ids), &(rhs->cycle_robot_ids)))
  {
    return false;
  }
  // root_cause
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->root_cause), &(rhs->root_cause)))
  {
    return false;
  }
  // persistence_duration_sec
  if (lhs->persistence_duration_sec != rhs->persistence_duration_sec) {
    return false;
  }
  // recovery_action
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->recovery_action), &(rhs->recovery_action)))
  {
    return false;
  }
  // recovery_success
  if (lhs->recovery_success != rhs->recovery_success) {
    return false;
  }
  // recovery_duration_sec
  if (lhs->recovery_duration_sec != rhs->recovery_duration_sec) {
    return false;
  }
  return true;
}

bool
amr_fleet_msgs__msg__DeadlockEvent__copy(
  const amr_fleet_msgs__msg__DeadlockEvent * input,
  amr_fleet_msgs__msg__DeadlockEvent * output)
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
  // cycle_robot_ids
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->cycle_robot_ids), &(output->cycle_robot_ids)))
  {
    return false;
  }
  // root_cause
  if (!rosidl_runtime_c__String__copy(
      &(input->root_cause), &(output->root_cause)))
  {
    return false;
  }
  // persistence_duration_sec
  output->persistence_duration_sec = input->persistence_duration_sec;
  // recovery_action
  if (!rosidl_runtime_c__String__copy(
      &(input->recovery_action), &(output->recovery_action)))
  {
    return false;
  }
  // recovery_success
  output->recovery_success = input->recovery_success;
  // recovery_duration_sec
  output->recovery_duration_sec = input->recovery_duration_sec;
  return true;
}

amr_fleet_msgs__msg__DeadlockEvent *
amr_fleet_msgs__msg__DeadlockEvent__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__DeadlockEvent * msg = (amr_fleet_msgs__msg__DeadlockEvent *)allocator.allocate(sizeof(amr_fleet_msgs__msg__DeadlockEvent), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(amr_fleet_msgs__msg__DeadlockEvent));
  bool success = amr_fleet_msgs__msg__DeadlockEvent__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
amr_fleet_msgs__msg__DeadlockEvent__destroy(amr_fleet_msgs__msg__DeadlockEvent * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    amr_fleet_msgs__msg__DeadlockEvent__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
amr_fleet_msgs__msg__DeadlockEvent__Sequence__init(amr_fleet_msgs__msg__DeadlockEvent__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__DeadlockEvent * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(amr_fleet_msgs__msg__DeadlockEvent)) {
      return false;
    }
    data = (amr_fleet_msgs__msg__DeadlockEvent *)allocator.zero_allocate(size, sizeof(amr_fleet_msgs__msg__DeadlockEvent), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = amr_fleet_msgs__msg__DeadlockEvent__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        amr_fleet_msgs__msg__DeadlockEvent__fini(&data[i - 1]);
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
amr_fleet_msgs__msg__DeadlockEvent__Sequence__fini(amr_fleet_msgs__msg__DeadlockEvent__Sequence * array)
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
      amr_fleet_msgs__msg__DeadlockEvent__fini(&array->data[i]);
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

amr_fleet_msgs__msg__DeadlockEvent__Sequence *
amr_fleet_msgs__msg__DeadlockEvent__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__DeadlockEvent__Sequence * array = (amr_fleet_msgs__msg__DeadlockEvent__Sequence *)allocator.allocate(sizeof(amr_fleet_msgs__msg__DeadlockEvent__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = amr_fleet_msgs__msg__DeadlockEvent__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
amr_fleet_msgs__msg__DeadlockEvent__Sequence__destroy(amr_fleet_msgs__msg__DeadlockEvent__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    amr_fleet_msgs__msg__DeadlockEvent__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
amr_fleet_msgs__msg__DeadlockEvent__Sequence__are_equal(const amr_fleet_msgs__msg__DeadlockEvent__Sequence * lhs, const amr_fleet_msgs__msg__DeadlockEvent__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!amr_fleet_msgs__msg__DeadlockEvent__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
amr_fleet_msgs__msg__DeadlockEvent__Sequence__copy(
  const amr_fleet_msgs__msg__DeadlockEvent__Sequence * input,
  amr_fleet_msgs__msg__DeadlockEvent__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(amr_fleet_msgs__msg__DeadlockEvent)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(amr_fleet_msgs__msg__DeadlockEvent);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    amr_fleet_msgs__msg__DeadlockEvent * data =
      (amr_fleet_msgs__msg__DeadlockEvent *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!amr_fleet_msgs__msg__DeadlockEvent__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          amr_fleet_msgs__msg__DeadlockEvent__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!amr_fleet_msgs__msg__DeadlockEvent__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
