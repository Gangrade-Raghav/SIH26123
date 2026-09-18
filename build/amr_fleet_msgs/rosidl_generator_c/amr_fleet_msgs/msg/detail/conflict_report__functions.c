// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from amr_fleet_msgs:msg/ConflictReport.idl
// generated code does not contain a copyright notice
#include "amr_fleet_msgs/msg/detail/conflict_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `conflict_type`
// Member `robot_a`
// Member `robot_b`
#include "rosidl_runtime_c/string_functions.h"

bool
amr_fleet_msgs__msg__ConflictReport__init(amr_fleet_msgs__msg__ConflictReport * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    amr_fleet_msgs__msg__ConflictReport__fini(msg);
    return false;
  }
  // conflict_type
  if (!rosidl_runtime_c__String__init(&msg->conflict_type)) {
    amr_fleet_msgs__msg__ConflictReport__fini(msg);
    return false;
  }
  // robot_a
  if (!rosidl_runtime_c__String__init(&msg->robot_a)) {
    amr_fleet_msgs__msg__ConflictReport__fini(msg);
    return false;
  }
  // robot_b
  if (!rosidl_runtime_c__String__init(&msg->robot_b)) {
    amr_fleet_msgs__msg__ConflictReport__fini(msg);
    return false;
  }
  // cell_x
  // cell_y
  // time_step
  // resolved
  return true;
}

void
amr_fleet_msgs__msg__ConflictReport__fini(amr_fleet_msgs__msg__ConflictReport * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // conflict_type
  rosidl_runtime_c__String__fini(&msg->conflict_type);
  // robot_a
  rosidl_runtime_c__String__fini(&msg->robot_a);
  // robot_b
  rosidl_runtime_c__String__fini(&msg->robot_b);
  // cell_x
  // cell_y
  // time_step
  // resolved
}

bool
amr_fleet_msgs__msg__ConflictReport__are_equal(const amr_fleet_msgs__msg__ConflictReport * lhs, const amr_fleet_msgs__msg__ConflictReport * rhs)
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
  // conflict_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->conflict_type), &(rhs->conflict_type)))
  {
    return false;
  }
  // robot_a
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_a), &(rhs->robot_a)))
  {
    return false;
  }
  // robot_b
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_b), &(rhs->robot_b)))
  {
    return false;
  }
  // cell_x
  if (lhs->cell_x != rhs->cell_x) {
    return false;
  }
  // cell_y
  if (lhs->cell_y != rhs->cell_y) {
    return false;
  }
  // time_step
  if (lhs->time_step != rhs->time_step) {
    return false;
  }
  // resolved
  if (lhs->resolved != rhs->resolved) {
    return false;
  }
  return true;
}

bool
amr_fleet_msgs__msg__ConflictReport__copy(
  const amr_fleet_msgs__msg__ConflictReport * input,
  amr_fleet_msgs__msg__ConflictReport * output)
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
  // conflict_type
  if (!rosidl_runtime_c__String__copy(
      &(input->conflict_type), &(output->conflict_type)))
  {
    return false;
  }
  // robot_a
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_a), &(output->robot_a)))
  {
    return false;
  }
  // robot_b
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_b), &(output->robot_b)))
  {
    return false;
  }
  // cell_x
  output->cell_x = input->cell_x;
  // cell_y
  output->cell_y = input->cell_y;
  // time_step
  output->time_step = input->time_step;
  // resolved
  output->resolved = input->resolved;
  return true;
}

amr_fleet_msgs__msg__ConflictReport *
amr_fleet_msgs__msg__ConflictReport__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__ConflictReport * msg = (amr_fleet_msgs__msg__ConflictReport *)allocator.allocate(sizeof(amr_fleet_msgs__msg__ConflictReport), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(amr_fleet_msgs__msg__ConflictReport));
  bool success = amr_fleet_msgs__msg__ConflictReport__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
amr_fleet_msgs__msg__ConflictReport__destroy(amr_fleet_msgs__msg__ConflictReport * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    amr_fleet_msgs__msg__ConflictReport__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
amr_fleet_msgs__msg__ConflictReport__Sequence__init(amr_fleet_msgs__msg__ConflictReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__ConflictReport * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(amr_fleet_msgs__msg__ConflictReport)) {
      return false;
    }
    data = (amr_fleet_msgs__msg__ConflictReport *)allocator.zero_allocate(size, sizeof(amr_fleet_msgs__msg__ConflictReport), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = amr_fleet_msgs__msg__ConflictReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        amr_fleet_msgs__msg__ConflictReport__fini(&data[i - 1]);
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
amr_fleet_msgs__msg__ConflictReport__Sequence__fini(amr_fleet_msgs__msg__ConflictReport__Sequence * array)
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
      amr_fleet_msgs__msg__ConflictReport__fini(&array->data[i]);
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

amr_fleet_msgs__msg__ConflictReport__Sequence *
amr_fleet_msgs__msg__ConflictReport__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__ConflictReport__Sequence * array = (amr_fleet_msgs__msg__ConflictReport__Sequence *)allocator.allocate(sizeof(amr_fleet_msgs__msg__ConflictReport__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = amr_fleet_msgs__msg__ConflictReport__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
amr_fleet_msgs__msg__ConflictReport__Sequence__destroy(amr_fleet_msgs__msg__ConflictReport__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    amr_fleet_msgs__msg__ConflictReport__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
amr_fleet_msgs__msg__ConflictReport__Sequence__are_equal(const amr_fleet_msgs__msg__ConflictReport__Sequence * lhs, const amr_fleet_msgs__msg__ConflictReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!amr_fleet_msgs__msg__ConflictReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
amr_fleet_msgs__msg__ConflictReport__Sequence__copy(
  const amr_fleet_msgs__msg__ConflictReport__Sequence * input,
  amr_fleet_msgs__msg__ConflictReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(amr_fleet_msgs__msg__ConflictReport)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(amr_fleet_msgs__msg__ConflictReport);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    amr_fleet_msgs__msg__ConflictReport * data =
      (amr_fleet_msgs__msg__ConflictReport *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!amr_fleet_msgs__msg__ConflictReport__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          amr_fleet_msgs__msg__ConflictReport__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!amr_fleet_msgs__msg__ConflictReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
