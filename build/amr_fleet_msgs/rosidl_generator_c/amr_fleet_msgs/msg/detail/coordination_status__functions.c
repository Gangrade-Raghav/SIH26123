// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from amr_fleet_msgs:msg/CoordinationStatus.idl
// generated code does not contain a copyright notice
#include "amr_fleet_msgs/msg/detail/coordination_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `robot_id`
// Member `status`
// Member `waiting_for_robot`
#include "rosidl_runtime_c/string_functions.h"

bool
amr_fleet_msgs__msg__CoordinationStatus__init(amr_fleet_msgs__msg__CoordinationStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    amr_fleet_msgs__msg__CoordinationStatus__fini(msg);
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__init(&msg->robot_id)) {
    amr_fleet_msgs__msg__CoordinationStatus__fini(msg);
    return false;
  }
  // priority
  // current_cell_x
  // current_cell_y
  // target_cell_x
  // target_cell_y
  // time_step
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    amr_fleet_msgs__msg__CoordinationStatus__fini(msg);
    return false;
  }
  // waiting_for_robot
  if (!rosidl_runtime_c__String__init(&msg->waiting_for_robot)) {
    amr_fleet_msgs__msg__CoordinationStatus__fini(msg);
    return false;
  }
  // pose_x
  // pose_y
  return true;
}

void
amr_fleet_msgs__msg__CoordinationStatus__fini(amr_fleet_msgs__msg__CoordinationStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // robot_id
  rosidl_runtime_c__String__fini(&msg->robot_id);
  // priority
  // current_cell_x
  // current_cell_y
  // target_cell_x
  // target_cell_y
  // time_step
  // status
  rosidl_runtime_c__String__fini(&msg->status);
  // waiting_for_robot
  rosidl_runtime_c__String__fini(&msg->waiting_for_robot);
  // pose_x
  // pose_y
}

bool
amr_fleet_msgs__msg__CoordinationStatus__are_equal(const amr_fleet_msgs__msg__CoordinationStatus * lhs, const amr_fleet_msgs__msg__CoordinationStatus * rhs)
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
  // priority
  if (lhs->priority != rhs->priority) {
    return false;
  }
  // current_cell_x
  if (lhs->current_cell_x != rhs->current_cell_x) {
    return false;
  }
  // current_cell_y
  if (lhs->current_cell_y != rhs->current_cell_y) {
    return false;
  }
  // target_cell_x
  if (lhs->target_cell_x != rhs->target_cell_x) {
    return false;
  }
  // target_cell_y
  if (lhs->target_cell_y != rhs->target_cell_y) {
    return false;
  }
  // time_step
  if (lhs->time_step != rhs->time_step) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // waiting_for_robot
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->waiting_for_robot), &(rhs->waiting_for_robot)))
  {
    return false;
  }
  // pose_x
  if (lhs->pose_x != rhs->pose_x) {
    return false;
  }
  // pose_y
  if (lhs->pose_y != rhs->pose_y) {
    return false;
  }
  return true;
}

bool
amr_fleet_msgs__msg__CoordinationStatus__copy(
  const amr_fleet_msgs__msg__CoordinationStatus * input,
  amr_fleet_msgs__msg__CoordinationStatus * output)
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
  // priority
  output->priority = input->priority;
  // current_cell_x
  output->current_cell_x = input->current_cell_x;
  // current_cell_y
  output->current_cell_y = input->current_cell_y;
  // target_cell_x
  output->target_cell_x = input->target_cell_x;
  // target_cell_y
  output->target_cell_y = input->target_cell_y;
  // time_step
  output->time_step = input->time_step;
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // waiting_for_robot
  if (!rosidl_runtime_c__String__copy(
      &(input->waiting_for_robot), &(output->waiting_for_robot)))
  {
    return false;
  }
  // pose_x
  output->pose_x = input->pose_x;
  // pose_y
  output->pose_y = input->pose_y;
  return true;
}

amr_fleet_msgs__msg__CoordinationStatus *
amr_fleet_msgs__msg__CoordinationStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__CoordinationStatus * msg = (amr_fleet_msgs__msg__CoordinationStatus *)allocator.allocate(sizeof(amr_fleet_msgs__msg__CoordinationStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(amr_fleet_msgs__msg__CoordinationStatus));
  bool success = amr_fleet_msgs__msg__CoordinationStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
amr_fleet_msgs__msg__CoordinationStatus__destroy(amr_fleet_msgs__msg__CoordinationStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    amr_fleet_msgs__msg__CoordinationStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
amr_fleet_msgs__msg__CoordinationStatus__Sequence__init(amr_fleet_msgs__msg__CoordinationStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__CoordinationStatus * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(amr_fleet_msgs__msg__CoordinationStatus)) {
      return false;
    }
    data = (amr_fleet_msgs__msg__CoordinationStatus *)allocator.zero_allocate(size, sizeof(amr_fleet_msgs__msg__CoordinationStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = amr_fleet_msgs__msg__CoordinationStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        amr_fleet_msgs__msg__CoordinationStatus__fini(&data[i - 1]);
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
amr_fleet_msgs__msg__CoordinationStatus__Sequence__fini(amr_fleet_msgs__msg__CoordinationStatus__Sequence * array)
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
      amr_fleet_msgs__msg__CoordinationStatus__fini(&array->data[i]);
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

amr_fleet_msgs__msg__CoordinationStatus__Sequence *
amr_fleet_msgs__msg__CoordinationStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__CoordinationStatus__Sequence * array = (amr_fleet_msgs__msg__CoordinationStatus__Sequence *)allocator.allocate(sizeof(amr_fleet_msgs__msg__CoordinationStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = amr_fleet_msgs__msg__CoordinationStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
amr_fleet_msgs__msg__CoordinationStatus__Sequence__destroy(amr_fleet_msgs__msg__CoordinationStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    amr_fleet_msgs__msg__CoordinationStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
amr_fleet_msgs__msg__CoordinationStatus__Sequence__are_equal(const amr_fleet_msgs__msg__CoordinationStatus__Sequence * lhs, const amr_fleet_msgs__msg__CoordinationStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!amr_fleet_msgs__msg__CoordinationStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
amr_fleet_msgs__msg__CoordinationStatus__Sequence__copy(
  const amr_fleet_msgs__msg__CoordinationStatus__Sequence * input,
  amr_fleet_msgs__msg__CoordinationStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(amr_fleet_msgs__msg__CoordinationStatus)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(amr_fleet_msgs__msg__CoordinationStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    amr_fleet_msgs__msg__CoordinationStatus * data =
      (amr_fleet_msgs__msg__CoordinationStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!amr_fleet_msgs__msg__CoordinationStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          amr_fleet_msgs__msg__CoordinationStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!amr_fleet_msgs__msg__CoordinationStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
