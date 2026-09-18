// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from amr_fleet_msgs:msg/TaskBid.idl
// generated code does not contain a copyright notice
#include "amr_fleet_msgs/msg/detail/task_bid__functions.h"

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
#include "rosidl_runtime_c/string_functions.h"

bool
amr_fleet_msgs__msg__TaskBid__init(amr_fleet_msgs__msg__TaskBid * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    amr_fleet_msgs__msg__TaskBid__fini(msg);
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__init(&msg->robot_id)) {
    amr_fleet_msgs__msg__TaskBid__fini(msg);
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__init(&msg->task_id)) {
    amr_fleet_msgs__msg__TaskBid__fini(msg);
    return false;
  }
  // bid_value
  // path_cost
  // allocation_epoch
  return true;
}

void
amr_fleet_msgs__msg__TaskBid__fini(amr_fleet_msgs__msg__TaskBid * msg)
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
  // bid_value
  // path_cost
  // allocation_epoch
}

bool
amr_fleet_msgs__msg__TaskBid__are_equal(const amr_fleet_msgs__msg__TaskBid * lhs, const amr_fleet_msgs__msg__TaskBid * rhs)
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
  // bid_value
  if (lhs->bid_value != rhs->bid_value) {
    return false;
  }
  // path_cost
  if (lhs->path_cost != rhs->path_cost) {
    return false;
  }
  // allocation_epoch
  if (lhs->allocation_epoch != rhs->allocation_epoch) {
    return false;
  }
  return true;
}

bool
amr_fleet_msgs__msg__TaskBid__copy(
  const amr_fleet_msgs__msg__TaskBid * input,
  amr_fleet_msgs__msg__TaskBid * output)
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
  // bid_value
  output->bid_value = input->bid_value;
  // path_cost
  output->path_cost = input->path_cost;
  // allocation_epoch
  output->allocation_epoch = input->allocation_epoch;
  return true;
}

amr_fleet_msgs__msg__TaskBid *
amr_fleet_msgs__msg__TaskBid__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__TaskBid * msg = (amr_fleet_msgs__msg__TaskBid *)allocator.allocate(sizeof(amr_fleet_msgs__msg__TaskBid), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(amr_fleet_msgs__msg__TaskBid));
  bool success = amr_fleet_msgs__msg__TaskBid__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
amr_fleet_msgs__msg__TaskBid__destroy(amr_fleet_msgs__msg__TaskBid * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    amr_fleet_msgs__msg__TaskBid__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
amr_fleet_msgs__msg__TaskBid__Sequence__init(amr_fleet_msgs__msg__TaskBid__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__TaskBid * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(amr_fleet_msgs__msg__TaskBid)) {
      return false;
    }
    data = (amr_fleet_msgs__msg__TaskBid *)allocator.zero_allocate(size, sizeof(amr_fleet_msgs__msg__TaskBid), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = amr_fleet_msgs__msg__TaskBid__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        amr_fleet_msgs__msg__TaskBid__fini(&data[i - 1]);
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
amr_fleet_msgs__msg__TaskBid__Sequence__fini(amr_fleet_msgs__msg__TaskBid__Sequence * array)
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
      amr_fleet_msgs__msg__TaskBid__fini(&array->data[i]);
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

amr_fleet_msgs__msg__TaskBid__Sequence *
amr_fleet_msgs__msg__TaskBid__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__TaskBid__Sequence * array = (amr_fleet_msgs__msg__TaskBid__Sequence *)allocator.allocate(sizeof(amr_fleet_msgs__msg__TaskBid__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = amr_fleet_msgs__msg__TaskBid__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
amr_fleet_msgs__msg__TaskBid__Sequence__destroy(amr_fleet_msgs__msg__TaskBid__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    amr_fleet_msgs__msg__TaskBid__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
amr_fleet_msgs__msg__TaskBid__Sequence__are_equal(const amr_fleet_msgs__msg__TaskBid__Sequence * lhs, const amr_fleet_msgs__msg__TaskBid__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!amr_fleet_msgs__msg__TaskBid__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
amr_fleet_msgs__msg__TaskBid__Sequence__copy(
  const amr_fleet_msgs__msg__TaskBid__Sequence * input,
  amr_fleet_msgs__msg__TaskBid__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(amr_fleet_msgs__msg__TaskBid)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(amr_fleet_msgs__msg__TaskBid);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    amr_fleet_msgs__msg__TaskBid * data =
      (amr_fleet_msgs__msg__TaskBid *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!amr_fleet_msgs__msg__TaskBid__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          amr_fleet_msgs__msg__TaskBid__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!amr_fleet_msgs__msg__TaskBid__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
