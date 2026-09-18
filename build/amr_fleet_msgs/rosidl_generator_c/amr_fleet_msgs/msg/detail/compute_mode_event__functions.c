// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from amr_fleet_msgs:msg/ComputeModeEvent.idl
// generated code does not contain a copyright notice
#include "amr_fleet_msgs/msg/detail/compute_mode_event__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `robot_id`
// Member `previous_mode`
// Member `current_mode`
// Member `trigger_signal`
// Member `reason`
#include "rosidl_runtime_c/string_functions.h"

bool
amr_fleet_msgs__msg__ComputeModeEvent__init(amr_fleet_msgs__msg__ComputeModeEvent * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    amr_fleet_msgs__msg__ComputeModeEvent__fini(msg);
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__init(&msg->robot_id)) {
    amr_fleet_msgs__msg__ComputeModeEvent__fini(msg);
    return false;
  }
  // previous_mode
  if (!rosidl_runtime_c__String__init(&msg->previous_mode)) {
    amr_fleet_msgs__msg__ComputeModeEvent__fini(msg);
    return false;
  }
  // current_mode
  if (!rosidl_runtime_c__String__init(&msg->current_mode)) {
    amr_fleet_msgs__msg__ComputeModeEvent__fini(msg);
    return false;
  }
  // trigger_signal
  if (!rosidl_runtime_c__String__init(&msg->trigger_signal)) {
    amr_fleet_msgs__msg__ComputeModeEvent__fini(msg);
    return false;
  }
  // trigger_value
  // threshold_value
  // reason
  if (!rosidl_runtime_c__String__init(&msg->reason)) {
    amr_fleet_msgs__msg__ComputeModeEvent__fini(msg);
    return false;
  }
  // dwell_time_sec
  return true;
}

void
amr_fleet_msgs__msg__ComputeModeEvent__fini(amr_fleet_msgs__msg__ComputeModeEvent * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // robot_id
  rosidl_runtime_c__String__fini(&msg->robot_id);
  // previous_mode
  rosidl_runtime_c__String__fini(&msg->previous_mode);
  // current_mode
  rosidl_runtime_c__String__fini(&msg->current_mode);
  // trigger_signal
  rosidl_runtime_c__String__fini(&msg->trigger_signal);
  // trigger_value
  // threshold_value
  // reason
  rosidl_runtime_c__String__fini(&msg->reason);
  // dwell_time_sec
}

bool
amr_fleet_msgs__msg__ComputeModeEvent__are_equal(const amr_fleet_msgs__msg__ComputeModeEvent * lhs, const amr_fleet_msgs__msg__ComputeModeEvent * rhs)
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
  // previous_mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->previous_mode), &(rhs->previous_mode)))
  {
    return false;
  }
  // current_mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_mode), &(rhs->current_mode)))
  {
    return false;
  }
  // trigger_signal
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->trigger_signal), &(rhs->trigger_signal)))
  {
    return false;
  }
  // trigger_value
  if (lhs->trigger_value != rhs->trigger_value) {
    return false;
  }
  // threshold_value
  if (lhs->threshold_value != rhs->threshold_value) {
    return false;
  }
  // reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reason), &(rhs->reason)))
  {
    return false;
  }
  // dwell_time_sec
  if (lhs->dwell_time_sec != rhs->dwell_time_sec) {
    return false;
  }
  return true;
}

bool
amr_fleet_msgs__msg__ComputeModeEvent__copy(
  const amr_fleet_msgs__msg__ComputeModeEvent * input,
  amr_fleet_msgs__msg__ComputeModeEvent * output)
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
  // previous_mode
  if (!rosidl_runtime_c__String__copy(
      &(input->previous_mode), &(output->previous_mode)))
  {
    return false;
  }
  // current_mode
  if (!rosidl_runtime_c__String__copy(
      &(input->current_mode), &(output->current_mode)))
  {
    return false;
  }
  // trigger_signal
  if (!rosidl_runtime_c__String__copy(
      &(input->trigger_signal), &(output->trigger_signal)))
  {
    return false;
  }
  // trigger_value
  output->trigger_value = input->trigger_value;
  // threshold_value
  output->threshold_value = input->threshold_value;
  // reason
  if (!rosidl_runtime_c__String__copy(
      &(input->reason), &(output->reason)))
  {
    return false;
  }
  // dwell_time_sec
  output->dwell_time_sec = input->dwell_time_sec;
  return true;
}

amr_fleet_msgs__msg__ComputeModeEvent *
amr_fleet_msgs__msg__ComputeModeEvent__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__ComputeModeEvent * msg = (amr_fleet_msgs__msg__ComputeModeEvent *)allocator.allocate(sizeof(amr_fleet_msgs__msg__ComputeModeEvent), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(amr_fleet_msgs__msg__ComputeModeEvent));
  bool success = amr_fleet_msgs__msg__ComputeModeEvent__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
amr_fleet_msgs__msg__ComputeModeEvent__destroy(amr_fleet_msgs__msg__ComputeModeEvent * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    amr_fleet_msgs__msg__ComputeModeEvent__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
amr_fleet_msgs__msg__ComputeModeEvent__Sequence__init(amr_fleet_msgs__msg__ComputeModeEvent__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__ComputeModeEvent * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(amr_fleet_msgs__msg__ComputeModeEvent)) {
      return false;
    }
    data = (amr_fleet_msgs__msg__ComputeModeEvent *)allocator.zero_allocate(size, sizeof(amr_fleet_msgs__msg__ComputeModeEvent), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = amr_fleet_msgs__msg__ComputeModeEvent__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        amr_fleet_msgs__msg__ComputeModeEvent__fini(&data[i - 1]);
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
amr_fleet_msgs__msg__ComputeModeEvent__Sequence__fini(amr_fleet_msgs__msg__ComputeModeEvent__Sequence * array)
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
      amr_fleet_msgs__msg__ComputeModeEvent__fini(&array->data[i]);
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

amr_fleet_msgs__msg__ComputeModeEvent__Sequence *
amr_fleet_msgs__msg__ComputeModeEvent__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__ComputeModeEvent__Sequence * array = (amr_fleet_msgs__msg__ComputeModeEvent__Sequence *)allocator.allocate(sizeof(amr_fleet_msgs__msg__ComputeModeEvent__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = amr_fleet_msgs__msg__ComputeModeEvent__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
amr_fleet_msgs__msg__ComputeModeEvent__Sequence__destroy(amr_fleet_msgs__msg__ComputeModeEvent__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    amr_fleet_msgs__msg__ComputeModeEvent__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
amr_fleet_msgs__msg__ComputeModeEvent__Sequence__are_equal(const amr_fleet_msgs__msg__ComputeModeEvent__Sequence * lhs, const amr_fleet_msgs__msg__ComputeModeEvent__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!amr_fleet_msgs__msg__ComputeModeEvent__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
amr_fleet_msgs__msg__ComputeModeEvent__Sequence__copy(
  const amr_fleet_msgs__msg__ComputeModeEvent__Sequence * input,
  amr_fleet_msgs__msg__ComputeModeEvent__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(amr_fleet_msgs__msg__ComputeModeEvent)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(amr_fleet_msgs__msg__ComputeModeEvent);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    amr_fleet_msgs__msg__ComputeModeEvent * data =
      (amr_fleet_msgs__msg__ComputeModeEvent *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!amr_fleet_msgs__msg__ComputeModeEvent__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          amr_fleet_msgs__msg__ComputeModeEvent__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!amr_fleet_msgs__msg__ComputeModeEvent__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
