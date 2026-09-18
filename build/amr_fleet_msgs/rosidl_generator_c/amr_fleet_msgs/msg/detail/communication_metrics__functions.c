// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from amr_fleet_msgs:msg/CommunicationMetrics.idl
// generated code does not contain a copyright notice
#include "amr_fleet_msgs/msg/detail/communication_metrics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `profile_name`
#include "rosidl_runtime_c/string_functions.h"

bool
amr_fleet_msgs__msg__CommunicationMetrics__init(amr_fleet_msgs__msg__CommunicationMetrics * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    amr_fleet_msgs__msg__CommunicationMetrics__fini(msg);
    return false;
  }
  // profile_name
  if (!rosidl_runtime_c__String__init(&msg->profile_name)) {
    amr_fleet_msgs__msg__CommunicationMetrics__fini(msg);
    return false;
  }
  // messages_sent
  // messages_delivered
  // messages_dropped
  // packet_loss_rate
  // avg_latency_ms
  // p95_latency_ms
  // jitter_ms
  // burst_events_count
  // outage_active
  // stale_messages_count
  // expired_reservations_count
  // min_distance_m
  // collision_count
  // safety_interventions
  return true;
}

void
amr_fleet_msgs__msg__CommunicationMetrics__fini(amr_fleet_msgs__msg__CommunicationMetrics * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // profile_name
  rosidl_runtime_c__String__fini(&msg->profile_name);
  // messages_sent
  // messages_delivered
  // messages_dropped
  // packet_loss_rate
  // avg_latency_ms
  // p95_latency_ms
  // jitter_ms
  // burst_events_count
  // outage_active
  // stale_messages_count
  // expired_reservations_count
  // min_distance_m
  // collision_count
  // safety_interventions
}

bool
amr_fleet_msgs__msg__CommunicationMetrics__are_equal(const amr_fleet_msgs__msg__CommunicationMetrics * lhs, const amr_fleet_msgs__msg__CommunicationMetrics * rhs)
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
  // messages_sent
  if (lhs->messages_sent != rhs->messages_sent) {
    return false;
  }
  // messages_delivered
  if (lhs->messages_delivered != rhs->messages_delivered) {
    return false;
  }
  // messages_dropped
  if (lhs->messages_dropped != rhs->messages_dropped) {
    return false;
  }
  // packet_loss_rate
  if (lhs->packet_loss_rate != rhs->packet_loss_rate) {
    return false;
  }
  // avg_latency_ms
  if (lhs->avg_latency_ms != rhs->avg_latency_ms) {
    return false;
  }
  // p95_latency_ms
  if (lhs->p95_latency_ms != rhs->p95_latency_ms) {
    return false;
  }
  // jitter_ms
  if (lhs->jitter_ms != rhs->jitter_ms) {
    return false;
  }
  // burst_events_count
  if (lhs->burst_events_count != rhs->burst_events_count) {
    return false;
  }
  // outage_active
  if (lhs->outage_active != rhs->outage_active) {
    return false;
  }
  // stale_messages_count
  if (lhs->stale_messages_count != rhs->stale_messages_count) {
    return false;
  }
  // expired_reservations_count
  if (lhs->expired_reservations_count != rhs->expired_reservations_count) {
    return false;
  }
  // min_distance_m
  if (lhs->min_distance_m != rhs->min_distance_m) {
    return false;
  }
  // collision_count
  if (lhs->collision_count != rhs->collision_count) {
    return false;
  }
  // safety_interventions
  if (lhs->safety_interventions != rhs->safety_interventions) {
    return false;
  }
  return true;
}

bool
amr_fleet_msgs__msg__CommunicationMetrics__copy(
  const amr_fleet_msgs__msg__CommunicationMetrics * input,
  amr_fleet_msgs__msg__CommunicationMetrics * output)
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
  // messages_sent
  output->messages_sent = input->messages_sent;
  // messages_delivered
  output->messages_delivered = input->messages_delivered;
  // messages_dropped
  output->messages_dropped = input->messages_dropped;
  // packet_loss_rate
  output->packet_loss_rate = input->packet_loss_rate;
  // avg_latency_ms
  output->avg_latency_ms = input->avg_latency_ms;
  // p95_latency_ms
  output->p95_latency_ms = input->p95_latency_ms;
  // jitter_ms
  output->jitter_ms = input->jitter_ms;
  // burst_events_count
  output->burst_events_count = input->burst_events_count;
  // outage_active
  output->outage_active = input->outage_active;
  // stale_messages_count
  output->stale_messages_count = input->stale_messages_count;
  // expired_reservations_count
  output->expired_reservations_count = input->expired_reservations_count;
  // min_distance_m
  output->min_distance_m = input->min_distance_m;
  // collision_count
  output->collision_count = input->collision_count;
  // safety_interventions
  output->safety_interventions = input->safety_interventions;
  return true;
}

amr_fleet_msgs__msg__CommunicationMetrics *
amr_fleet_msgs__msg__CommunicationMetrics__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__CommunicationMetrics * msg = (amr_fleet_msgs__msg__CommunicationMetrics *)allocator.allocate(sizeof(amr_fleet_msgs__msg__CommunicationMetrics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(amr_fleet_msgs__msg__CommunicationMetrics));
  bool success = amr_fleet_msgs__msg__CommunicationMetrics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
amr_fleet_msgs__msg__CommunicationMetrics__destroy(amr_fleet_msgs__msg__CommunicationMetrics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    amr_fleet_msgs__msg__CommunicationMetrics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
amr_fleet_msgs__msg__CommunicationMetrics__Sequence__init(amr_fleet_msgs__msg__CommunicationMetrics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__CommunicationMetrics * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(amr_fleet_msgs__msg__CommunicationMetrics)) {
      return false;
    }
    data = (amr_fleet_msgs__msg__CommunicationMetrics *)allocator.zero_allocate(size, sizeof(amr_fleet_msgs__msg__CommunicationMetrics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = amr_fleet_msgs__msg__CommunicationMetrics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        amr_fleet_msgs__msg__CommunicationMetrics__fini(&data[i - 1]);
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
amr_fleet_msgs__msg__CommunicationMetrics__Sequence__fini(amr_fleet_msgs__msg__CommunicationMetrics__Sequence * array)
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
      amr_fleet_msgs__msg__CommunicationMetrics__fini(&array->data[i]);
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

amr_fleet_msgs__msg__CommunicationMetrics__Sequence *
amr_fleet_msgs__msg__CommunicationMetrics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__CommunicationMetrics__Sequence * array = (amr_fleet_msgs__msg__CommunicationMetrics__Sequence *)allocator.allocate(sizeof(amr_fleet_msgs__msg__CommunicationMetrics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = amr_fleet_msgs__msg__CommunicationMetrics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
amr_fleet_msgs__msg__CommunicationMetrics__Sequence__destroy(amr_fleet_msgs__msg__CommunicationMetrics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    amr_fleet_msgs__msg__CommunicationMetrics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
amr_fleet_msgs__msg__CommunicationMetrics__Sequence__are_equal(const amr_fleet_msgs__msg__CommunicationMetrics__Sequence * lhs, const amr_fleet_msgs__msg__CommunicationMetrics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!amr_fleet_msgs__msg__CommunicationMetrics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
amr_fleet_msgs__msg__CommunicationMetrics__Sequence__copy(
  const amr_fleet_msgs__msg__CommunicationMetrics__Sequence * input,
  amr_fleet_msgs__msg__CommunicationMetrics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(amr_fleet_msgs__msg__CommunicationMetrics)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(amr_fleet_msgs__msg__CommunicationMetrics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    amr_fleet_msgs__msg__CommunicationMetrics * data =
      (amr_fleet_msgs__msg__CommunicationMetrics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!amr_fleet_msgs__msg__CommunicationMetrics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          amr_fleet_msgs__msg__CommunicationMetrics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!amr_fleet_msgs__msg__CommunicationMetrics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
