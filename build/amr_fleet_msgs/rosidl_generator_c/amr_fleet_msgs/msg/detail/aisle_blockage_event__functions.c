// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from amr_fleet_msgs:msg/AisleBlockageEvent.idl
// generated code does not contain a copyright notice
#include "amr_fleet_msgs/msg/detail/aisle_blockage_event__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `blockage_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
amr_fleet_msgs__msg__AisleBlockageEvent__init(amr_fleet_msgs__msg__AisleBlockageEvent * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    amr_fleet_msgs__msg__AisleBlockageEvent__fini(msg);
    return false;
  }
  // blockage_id
  if (!rosidl_runtime_c__String__init(&msg->blockage_id)) {
    amr_fleet_msgs__msg__AisleBlockageEvent__fini(msg);
    return false;
  }
  // is_blocked
  // min_x
  // max_x
  // min_y
  // max_y
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    amr_fleet_msgs__msg__AisleBlockageEvent__fini(msg);
    return false;
  }
  return true;
}

void
amr_fleet_msgs__msg__AisleBlockageEvent__fini(amr_fleet_msgs__msg__AisleBlockageEvent * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // blockage_id
  rosidl_runtime_c__String__fini(&msg->blockage_id);
  // is_blocked
  // min_x
  // max_x
  // min_y
  // max_y
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
}

bool
amr_fleet_msgs__msg__AisleBlockageEvent__are_equal(const amr_fleet_msgs__msg__AisleBlockageEvent * lhs, const amr_fleet_msgs__msg__AisleBlockageEvent * rhs)
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
  // blockage_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->blockage_id), &(rhs->blockage_id)))
  {
    return false;
  }
  // is_blocked
  if (lhs->is_blocked != rhs->is_blocked) {
    return false;
  }
  // min_x
  if (lhs->min_x != rhs->min_x) {
    return false;
  }
  // max_x
  if (lhs->max_x != rhs->max_x) {
    return false;
  }
  // min_y
  if (lhs->min_y != rhs->min_y) {
    return false;
  }
  // max_y
  if (lhs->max_y != rhs->max_y) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  return true;
}

bool
amr_fleet_msgs__msg__AisleBlockageEvent__copy(
  const amr_fleet_msgs__msg__AisleBlockageEvent * input,
  amr_fleet_msgs__msg__AisleBlockageEvent * output)
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
  // blockage_id
  if (!rosidl_runtime_c__String__copy(
      &(input->blockage_id), &(output->blockage_id)))
  {
    return false;
  }
  // is_blocked
  output->is_blocked = input->is_blocked;
  // min_x
  output->min_x = input->min_x;
  // max_x
  output->max_x = input->max_x;
  // min_y
  output->min_y = input->min_y;
  // max_y
  output->max_y = input->max_y;
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  return true;
}

amr_fleet_msgs__msg__AisleBlockageEvent *
amr_fleet_msgs__msg__AisleBlockageEvent__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__AisleBlockageEvent * msg = (amr_fleet_msgs__msg__AisleBlockageEvent *)allocator.allocate(sizeof(amr_fleet_msgs__msg__AisleBlockageEvent), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(amr_fleet_msgs__msg__AisleBlockageEvent));
  bool success = amr_fleet_msgs__msg__AisleBlockageEvent__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
amr_fleet_msgs__msg__AisleBlockageEvent__destroy(amr_fleet_msgs__msg__AisleBlockageEvent * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    amr_fleet_msgs__msg__AisleBlockageEvent__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
amr_fleet_msgs__msg__AisleBlockageEvent__Sequence__init(amr_fleet_msgs__msg__AisleBlockageEvent__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__AisleBlockageEvent * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(amr_fleet_msgs__msg__AisleBlockageEvent)) {
      return false;
    }
    data = (amr_fleet_msgs__msg__AisleBlockageEvent *)allocator.zero_allocate(size, sizeof(amr_fleet_msgs__msg__AisleBlockageEvent), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = amr_fleet_msgs__msg__AisleBlockageEvent__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        amr_fleet_msgs__msg__AisleBlockageEvent__fini(&data[i - 1]);
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
amr_fleet_msgs__msg__AisleBlockageEvent__Sequence__fini(amr_fleet_msgs__msg__AisleBlockageEvent__Sequence * array)
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
      amr_fleet_msgs__msg__AisleBlockageEvent__fini(&array->data[i]);
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

amr_fleet_msgs__msg__AisleBlockageEvent__Sequence *
amr_fleet_msgs__msg__AisleBlockageEvent__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__AisleBlockageEvent__Sequence * array = (amr_fleet_msgs__msg__AisleBlockageEvent__Sequence *)allocator.allocate(sizeof(amr_fleet_msgs__msg__AisleBlockageEvent__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = amr_fleet_msgs__msg__AisleBlockageEvent__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
amr_fleet_msgs__msg__AisleBlockageEvent__Sequence__destroy(amr_fleet_msgs__msg__AisleBlockageEvent__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    amr_fleet_msgs__msg__AisleBlockageEvent__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
amr_fleet_msgs__msg__AisleBlockageEvent__Sequence__are_equal(const amr_fleet_msgs__msg__AisleBlockageEvent__Sequence * lhs, const amr_fleet_msgs__msg__AisleBlockageEvent__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!amr_fleet_msgs__msg__AisleBlockageEvent__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
amr_fleet_msgs__msg__AisleBlockageEvent__Sequence__copy(
  const amr_fleet_msgs__msg__AisleBlockageEvent__Sequence * input,
  amr_fleet_msgs__msg__AisleBlockageEvent__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(amr_fleet_msgs__msg__AisleBlockageEvent)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(amr_fleet_msgs__msg__AisleBlockageEvent);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    amr_fleet_msgs__msg__AisleBlockageEvent * data =
      (amr_fleet_msgs__msg__AisleBlockageEvent *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!amr_fleet_msgs__msg__AisleBlockageEvent__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          amr_fleet_msgs__msg__AisleBlockageEvent__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!amr_fleet_msgs__msg__AisleBlockageEvent__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
