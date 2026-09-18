// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from amr_fleet_msgs:msg/CommunicationProfile.idl
// generated code does not contain a copyright notice
#include "amr_fleet_msgs/msg/detail/communication_profile__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `profile_name`
// Member `isolated_robots`
#include "rosidl_runtime_c/string_functions.h"

bool
amr_fleet_msgs__msg__CommunicationProfile__init(amr_fleet_msgs__msg__CommunicationProfile * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    amr_fleet_msgs__msg__CommunicationProfile__fini(msg);
    return false;
  }
  // profile_name
  if (!rosidl_runtime_c__String__init(&msg->profile_name)) {
    amr_fleet_msgs__msg__CommunicationProfile__fini(msg);
    return false;
  }
  // enabled
  // latency_ms
  // jitter_ms
  // loss_probability
  // burst_loss_probability
  // outage_duration_s
  // seed
  // isolated_robots
  if (!rosidl_runtime_c__String__Sequence__init(&msg->isolated_robots, 0)) {
    amr_fleet_msgs__msg__CommunicationProfile__fini(msg);
    return false;
  }
  return true;
}

void
amr_fleet_msgs__msg__CommunicationProfile__fini(amr_fleet_msgs__msg__CommunicationProfile * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // profile_name
  rosidl_runtime_c__String__fini(&msg->profile_name);
  // enabled
  // latency_ms
  // jitter_ms
  // loss_probability
  // burst_loss_probability
  // outage_duration_s
  // seed
  // isolated_robots
  rosidl_runtime_c__String__Sequence__fini(&msg->isolated_robots);
}

bool
amr_fleet_msgs__msg__CommunicationProfile__are_equal(const amr_fleet_msgs__msg__CommunicationProfile * lhs, const amr_fleet_msgs__msg__CommunicationProfile * rhs)
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
  // profile_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->profile_name), &(rhs->profile_name)))
  {
    return false;
  }
  // enabled
  if (lhs->enabled != rhs->enabled) {
    return false;
  }
  // latency_ms
  if (lhs->latency_ms != rhs->latency_ms) {
    return false;
  }
  // jitter_ms
  if (lhs->jitter_ms != rhs->jitter_ms) {
    return false;
  }
  // loss_probability
  if (lhs->loss_probability != rhs->loss_probability) {
    return false;
  }
  // burst_loss_probability
  if (lhs->burst_loss_probability != rhs->burst_loss_probability) {
    return false;
  }
  // outage_duration_s
  if (lhs->outage_duration_s != rhs->outage_duration_s) {
    return false;
  }
  // seed
  if (lhs->seed != rhs->seed) {
    return false;
  }
  // isolated_robots
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->isolated_robots), &(rhs->isolated_robots)))
  {
    return false;
  }
  return true;
}

bool
amr_fleet_msgs__msg__CommunicationProfile__copy(
  const amr_fleet_msgs__msg__CommunicationProfile * input,
  amr_fleet_msgs__msg__CommunicationProfile * output)
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
  // profile_name
  if (!rosidl_runtime_c__String__copy(
      &(input->profile_name), &(output->profile_name)))
  {
    return false;
  }
  // enabled
  output->enabled = input->enabled;
  // latency_ms
  output->latency_ms = input->latency_ms;
  // jitter_ms
  output->jitter_ms = input->jitter_ms;
  // loss_probability
  output->loss_probability = input->loss_probability;
  // burst_loss_probability
  output->burst_loss_probability = input->burst_loss_probability;
  // outage_duration_s
  output->outage_duration_s = input->outage_duration_s;
  // seed
  output->seed = input->seed;
  // isolated_robots
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->isolated_robots), &(output->isolated_robots)))
  {
    return false;
  }
  return true;
}

amr_fleet_msgs__msg__CommunicationProfile *
amr_fleet_msgs__msg__CommunicationProfile__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__CommunicationProfile * msg = (amr_fleet_msgs__msg__CommunicationProfile *)allocator.allocate(sizeof(amr_fleet_msgs__msg__CommunicationProfile), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(amr_fleet_msgs__msg__CommunicationProfile));
  bool success = amr_fleet_msgs__msg__CommunicationProfile__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
amr_fleet_msgs__msg__CommunicationProfile__destroy(amr_fleet_msgs__msg__CommunicationProfile * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    amr_fleet_msgs__msg__CommunicationProfile__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
amr_fleet_msgs__msg__CommunicationProfile__Sequence__init(amr_fleet_msgs__msg__CommunicationProfile__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__CommunicationProfile * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(amr_fleet_msgs__msg__CommunicationProfile)) {
      return false;
    }
    data = (amr_fleet_msgs__msg__CommunicationProfile *)allocator.zero_allocate(size, sizeof(amr_fleet_msgs__msg__CommunicationProfile), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = amr_fleet_msgs__msg__CommunicationProfile__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        amr_fleet_msgs__msg__CommunicationProfile__fini(&data[i - 1]);
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
amr_fleet_msgs__msg__CommunicationProfile__Sequence__fini(amr_fleet_msgs__msg__CommunicationProfile__Sequence * array)
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
      amr_fleet_msgs__msg__CommunicationProfile__fini(&array->data[i]);
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

amr_fleet_msgs__msg__CommunicationProfile__Sequence *
amr_fleet_msgs__msg__CommunicationProfile__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__CommunicationProfile__Sequence * array = (amr_fleet_msgs__msg__CommunicationProfile__Sequence *)allocator.allocate(sizeof(amr_fleet_msgs__msg__CommunicationProfile__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = amr_fleet_msgs__msg__CommunicationProfile__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
amr_fleet_msgs__msg__CommunicationProfile__Sequence__destroy(amr_fleet_msgs__msg__CommunicationProfile__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    amr_fleet_msgs__msg__CommunicationProfile__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
amr_fleet_msgs__msg__CommunicationProfile__Sequence__are_equal(const amr_fleet_msgs__msg__CommunicationProfile__Sequence * lhs, const amr_fleet_msgs__msg__CommunicationProfile__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!amr_fleet_msgs__msg__CommunicationProfile__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
amr_fleet_msgs__msg__CommunicationProfile__Sequence__copy(
  const amr_fleet_msgs__msg__CommunicationProfile__Sequence * input,
  amr_fleet_msgs__msg__CommunicationProfile__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(amr_fleet_msgs__msg__CommunicationProfile)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(amr_fleet_msgs__msg__CommunicationProfile);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    amr_fleet_msgs__msg__CommunicationProfile * data =
      (amr_fleet_msgs__msg__CommunicationProfile *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!amr_fleet_msgs__msg__CommunicationProfile__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          amr_fleet_msgs__msg__CommunicationProfile__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!amr_fleet_msgs__msg__CommunicationProfile__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
