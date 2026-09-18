// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from amr_fleet_msgs:msg/CBBABid.idl
// generated code does not contain a copyright notice
#include "amr_fleet_msgs/msg/detail/cbba_bid__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `robot_id`
// Member `task_ids`
// Member `winning_robots`
#include "rosidl_runtime_c/string_functions.h"
// Member `winning_bids`
// Member `timestamps`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
amr_fleet_msgs__msg__CBBABid__init(amr_fleet_msgs__msg__CBBABid * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    amr_fleet_msgs__msg__CBBABid__fini(msg);
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__init(&msg->robot_id)) {
    amr_fleet_msgs__msg__CBBABid__fini(msg);
    return false;
  }
  // iteration
  // task_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->task_ids, 0)) {
    amr_fleet_msgs__msg__CBBABid__fini(msg);
    return false;
  }
  // winning_bids
  if (!rosidl_runtime_c__double__Sequence__init(&msg->winning_bids, 0)) {
    amr_fleet_msgs__msg__CBBABid__fini(msg);
    return false;
  }
  // winning_robots
  if (!rosidl_runtime_c__String__Sequence__init(&msg->winning_robots, 0)) {
    amr_fleet_msgs__msg__CBBABid__fini(msg);
    return false;
  }
  // timestamps
  if (!rosidl_runtime_c__double__Sequence__init(&msg->timestamps, 0)) {
    amr_fleet_msgs__msg__CBBABid__fini(msg);
    return false;
  }
  return true;
}

void
amr_fleet_msgs__msg__CBBABid__fini(amr_fleet_msgs__msg__CBBABid * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // robot_id
  rosidl_runtime_c__String__fini(&msg->robot_id);
  // iteration
  // task_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->task_ids);
  // winning_bids
  rosidl_runtime_c__double__Sequence__fini(&msg->winning_bids);
  // winning_robots
  rosidl_runtime_c__String__Sequence__fini(&msg->winning_robots);
  // timestamps
  rosidl_runtime_c__double__Sequence__fini(&msg->timestamps);
}

bool
amr_fleet_msgs__msg__CBBABid__are_equal(const amr_fleet_msgs__msg__CBBABid * lhs, const amr_fleet_msgs__msg__CBBABid * rhs)
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
  // iteration
  if (lhs->iteration != rhs->iteration) {
    return false;
  }
  // task_ids
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->task_ids), &(rhs->task_ids)))
  {
    return false;
  }
  // winning_bids
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->winning_bids), &(rhs->winning_bids)))
  {
    return false;
  }
  // winning_robots
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->winning_robots), &(rhs->winning_robots)))
  {
    return false;
  }
  // timestamps
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->timestamps), &(rhs->timestamps)))
  {
    return false;
  }
  return true;
}

bool
amr_fleet_msgs__msg__CBBABid__copy(
  const amr_fleet_msgs__msg__CBBABid * input,
  amr_fleet_msgs__msg__CBBABid * output)
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
  // iteration
  output->iteration = input->iteration;
  // task_ids
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->task_ids), &(output->task_ids)))
  {
    return false;
  }
  // winning_bids
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->winning_bids), &(output->winning_bids)))
  {
    return false;
  }
  // winning_robots
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->winning_robots), &(output->winning_robots)))
  {
    return false;
  }
  // timestamps
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->timestamps), &(output->timestamps)))
  {
    return false;
  }
  return true;
}

amr_fleet_msgs__msg__CBBABid *
amr_fleet_msgs__msg__CBBABid__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__CBBABid * msg = (amr_fleet_msgs__msg__CBBABid *)allocator.allocate(sizeof(amr_fleet_msgs__msg__CBBABid), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(amr_fleet_msgs__msg__CBBABid));
  bool success = amr_fleet_msgs__msg__CBBABid__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
amr_fleet_msgs__msg__CBBABid__destroy(amr_fleet_msgs__msg__CBBABid * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    amr_fleet_msgs__msg__CBBABid__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
amr_fleet_msgs__msg__CBBABid__Sequence__init(amr_fleet_msgs__msg__CBBABid__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__CBBABid * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(amr_fleet_msgs__msg__CBBABid)) {
      return false;
    }
    data = (amr_fleet_msgs__msg__CBBABid *)allocator.zero_allocate(size, sizeof(amr_fleet_msgs__msg__CBBABid), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = amr_fleet_msgs__msg__CBBABid__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        amr_fleet_msgs__msg__CBBABid__fini(&data[i - 1]);
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
amr_fleet_msgs__msg__CBBABid__Sequence__fini(amr_fleet_msgs__msg__CBBABid__Sequence * array)
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
      amr_fleet_msgs__msg__CBBABid__fini(&array->data[i]);
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

amr_fleet_msgs__msg__CBBABid__Sequence *
amr_fleet_msgs__msg__CBBABid__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__CBBABid__Sequence * array = (amr_fleet_msgs__msg__CBBABid__Sequence *)allocator.allocate(sizeof(amr_fleet_msgs__msg__CBBABid__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = amr_fleet_msgs__msg__CBBABid__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
amr_fleet_msgs__msg__CBBABid__Sequence__destroy(amr_fleet_msgs__msg__CBBABid__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    amr_fleet_msgs__msg__CBBABid__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
amr_fleet_msgs__msg__CBBABid__Sequence__are_equal(const amr_fleet_msgs__msg__CBBABid__Sequence * lhs, const amr_fleet_msgs__msg__CBBABid__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!amr_fleet_msgs__msg__CBBABid__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
amr_fleet_msgs__msg__CBBABid__Sequence__copy(
  const amr_fleet_msgs__msg__CBBABid__Sequence * input,
  amr_fleet_msgs__msg__CBBABid__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(amr_fleet_msgs__msg__CBBABid)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(amr_fleet_msgs__msg__CBBABid);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    amr_fleet_msgs__msg__CBBABid * data =
      (amr_fleet_msgs__msg__CBBABid *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!amr_fleet_msgs__msg__CBBABid__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          amr_fleet_msgs__msg__CBBABid__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!amr_fleet_msgs__msg__CBBABid__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
