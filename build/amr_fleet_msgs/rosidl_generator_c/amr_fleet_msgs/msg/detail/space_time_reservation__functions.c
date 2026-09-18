// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from amr_fleet_msgs:msg/SpaceTimeReservation.idl
// generated code does not contain a copyright notice
#include "amr_fleet_msgs/msg/detail/space_time_reservation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `robot_id`
#include "rosidl_runtime_c/string_functions.h"

bool
amr_fleet_msgs__msg__SpaceTimeReservation__init(amr_fleet_msgs__msg__SpaceTimeReservation * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    amr_fleet_msgs__msg__SpaceTimeReservation__fini(msg);
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__init(&msg->robot_id)) {
    amr_fleet_msgs__msg__SpaceTimeReservation__fini(msg);
    return false;
  }
  // from_x
  // from_y
  // to_x
  // to_y
  // time_step
  // duration_sec
  // is_edge
  // priority
  return true;
}

void
amr_fleet_msgs__msg__SpaceTimeReservation__fini(amr_fleet_msgs__msg__SpaceTimeReservation * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // robot_id
  rosidl_runtime_c__String__fini(&msg->robot_id);
  // from_x
  // from_y
  // to_x
  // to_y
  // time_step
  // duration_sec
  // is_edge
  // priority
}

bool
amr_fleet_msgs__msg__SpaceTimeReservation__are_equal(const amr_fleet_msgs__msg__SpaceTimeReservation * lhs, const amr_fleet_msgs__msg__SpaceTimeReservation * rhs)
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
  // from_x
  if (lhs->from_x != rhs->from_x) {
    return false;
  }
  // from_y
  if (lhs->from_y != rhs->from_y) {
    return false;
  }
  // to_x
  if (lhs->to_x != rhs->to_x) {
    return false;
  }
  // to_y
  if (lhs->to_y != rhs->to_y) {
    return false;
  }
  // time_step
  if (lhs->time_step != rhs->time_step) {
    return false;
  }
  // duration_sec
  if (lhs->duration_sec != rhs->duration_sec) {
    return false;
  }
  // is_edge
  if (lhs->is_edge != rhs->is_edge) {
    return false;
  }
  // priority
  if (lhs->priority != rhs->priority) {
    return false;
  }
  return true;
}

bool
amr_fleet_msgs__msg__SpaceTimeReservation__copy(
  const amr_fleet_msgs__msg__SpaceTimeReservation * input,
  amr_fleet_msgs__msg__SpaceTimeReservation * output)
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
  // from_x
  output->from_x = input->from_x;
  // from_y
  output->from_y = input->from_y;
  // to_x
  output->to_x = input->to_x;
  // to_y
  output->to_y = input->to_y;
  // time_step
  output->time_step = input->time_step;
  // duration_sec
  output->duration_sec = input->duration_sec;
  // is_edge
  output->is_edge = input->is_edge;
  // priority
  output->priority = input->priority;
  return true;
}

amr_fleet_msgs__msg__SpaceTimeReservation *
amr_fleet_msgs__msg__SpaceTimeReservation__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__SpaceTimeReservation * msg = (amr_fleet_msgs__msg__SpaceTimeReservation *)allocator.allocate(sizeof(amr_fleet_msgs__msg__SpaceTimeReservation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(amr_fleet_msgs__msg__SpaceTimeReservation));
  bool success = amr_fleet_msgs__msg__SpaceTimeReservation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
amr_fleet_msgs__msg__SpaceTimeReservation__destroy(amr_fleet_msgs__msg__SpaceTimeReservation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    amr_fleet_msgs__msg__SpaceTimeReservation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
amr_fleet_msgs__msg__SpaceTimeReservation__Sequence__init(amr_fleet_msgs__msg__SpaceTimeReservation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__SpaceTimeReservation * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(amr_fleet_msgs__msg__SpaceTimeReservation)) {
      return false;
    }
    data = (amr_fleet_msgs__msg__SpaceTimeReservation *)allocator.zero_allocate(size, sizeof(amr_fleet_msgs__msg__SpaceTimeReservation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = amr_fleet_msgs__msg__SpaceTimeReservation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        amr_fleet_msgs__msg__SpaceTimeReservation__fini(&data[i - 1]);
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
amr_fleet_msgs__msg__SpaceTimeReservation__Sequence__fini(amr_fleet_msgs__msg__SpaceTimeReservation__Sequence * array)
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
      amr_fleet_msgs__msg__SpaceTimeReservation__fini(&array->data[i]);
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

amr_fleet_msgs__msg__SpaceTimeReservation__Sequence *
amr_fleet_msgs__msg__SpaceTimeReservation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__SpaceTimeReservation__Sequence * array = (amr_fleet_msgs__msg__SpaceTimeReservation__Sequence *)allocator.allocate(sizeof(amr_fleet_msgs__msg__SpaceTimeReservation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = amr_fleet_msgs__msg__SpaceTimeReservation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
amr_fleet_msgs__msg__SpaceTimeReservation__Sequence__destroy(amr_fleet_msgs__msg__SpaceTimeReservation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    amr_fleet_msgs__msg__SpaceTimeReservation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
amr_fleet_msgs__msg__SpaceTimeReservation__Sequence__are_equal(const amr_fleet_msgs__msg__SpaceTimeReservation__Sequence * lhs, const amr_fleet_msgs__msg__SpaceTimeReservation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!amr_fleet_msgs__msg__SpaceTimeReservation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
amr_fleet_msgs__msg__SpaceTimeReservation__Sequence__copy(
  const amr_fleet_msgs__msg__SpaceTimeReservation__Sequence * input,
  amr_fleet_msgs__msg__SpaceTimeReservation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(amr_fleet_msgs__msg__SpaceTimeReservation)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(amr_fleet_msgs__msg__SpaceTimeReservation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    amr_fleet_msgs__msg__SpaceTimeReservation * data =
      (amr_fleet_msgs__msg__SpaceTimeReservation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!amr_fleet_msgs__msg__SpaceTimeReservation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          amr_fleet_msgs__msg__SpaceTimeReservation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!amr_fleet_msgs__msg__SpaceTimeReservation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
