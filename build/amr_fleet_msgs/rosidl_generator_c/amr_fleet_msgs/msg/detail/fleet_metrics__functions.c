// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from amr_fleet_msgs:msg/FleetMetrics.idl
// generated code does not contain a copyright notice
#include "amr_fleet_msgs/msg/detail/fleet_metrics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
amr_fleet_msgs__msg__FleetMetrics__init(amr_fleet_msgs__msg__FleetMetrics * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    amr_fleet_msgs__msg__FleetMetrics__fini(msg);
    return false;
  }
  // active_robots
  // completed_tasks
  // throughput
  // p50_planning_latency_ms
  // p95_planning_latency_ms
  // p99_planning_latency_ms
  // total_network_bytes
  // deadlock_count
  return true;
}

void
amr_fleet_msgs__msg__FleetMetrics__fini(amr_fleet_msgs__msg__FleetMetrics * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // active_robots
  // completed_tasks
  // throughput
  // p50_planning_latency_ms
  // p95_planning_latency_ms
  // p99_planning_latency_ms
  // total_network_bytes
  // deadlock_count
}

bool
amr_fleet_msgs__msg__FleetMetrics__are_equal(const amr_fleet_msgs__msg__FleetMetrics * lhs, const amr_fleet_msgs__msg__FleetMetrics * rhs)
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
  // active_robots
  if (lhs->active_robots != rhs->active_robots) {
    return false;
  }
  // completed_tasks
  if (lhs->completed_tasks != rhs->completed_tasks) {
    return false;
  }
  // throughput
  if (lhs->throughput != rhs->throughput) {
    return false;
  }
  // p50_planning_latency_ms
  if (lhs->p50_planning_latency_ms != rhs->p50_planning_latency_ms) {
    return false;
  }
  // p95_planning_latency_ms
  if (lhs->p95_planning_latency_ms != rhs->p95_planning_latency_ms) {
    return false;
  }
  // p99_planning_latency_ms
  if (lhs->p99_planning_latency_ms != rhs->p99_planning_latency_ms) {
    return false;
  }
  // total_network_bytes
  if (lhs->total_network_bytes != rhs->total_network_bytes) {
    return false;
  }
  // deadlock_count
  if (lhs->deadlock_count != rhs->deadlock_count) {
    return false;
  }
  return true;
}

bool
amr_fleet_msgs__msg__FleetMetrics__copy(
  const amr_fleet_msgs__msg__FleetMetrics * input,
  amr_fleet_msgs__msg__FleetMetrics * output)
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
  // active_robots
  output->active_robots = input->active_robots;
  // completed_tasks
  output->completed_tasks = input->completed_tasks;
  // throughput
  output->throughput = input->throughput;
  // p50_planning_latency_ms
  output->p50_planning_latency_ms = input->p50_planning_latency_ms;
  // p95_planning_latency_ms
  output->p95_planning_latency_ms = input->p95_planning_latency_ms;
  // p99_planning_latency_ms
  output->p99_planning_latency_ms = input->p99_planning_latency_ms;
  // total_network_bytes
  output->total_network_bytes = input->total_network_bytes;
  // deadlock_count
  output->deadlock_count = input->deadlock_count;
  return true;
}

amr_fleet_msgs__msg__FleetMetrics *
amr_fleet_msgs__msg__FleetMetrics__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__FleetMetrics * msg = (amr_fleet_msgs__msg__FleetMetrics *)allocator.allocate(sizeof(amr_fleet_msgs__msg__FleetMetrics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(amr_fleet_msgs__msg__FleetMetrics));
  bool success = amr_fleet_msgs__msg__FleetMetrics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
amr_fleet_msgs__msg__FleetMetrics__destroy(amr_fleet_msgs__msg__FleetMetrics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    amr_fleet_msgs__msg__FleetMetrics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
amr_fleet_msgs__msg__FleetMetrics__Sequence__init(amr_fleet_msgs__msg__FleetMetrics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__FleetMetrics * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(amr_fleet_msgs__msg__FleetMetrics)) {
      return false;
    }
    data = (amr_fleet_msgs__msg__FleetMetrics *)allocator.zero_allocate(size, sizeof(amr_fleet_msgs__msg__FleetMetrics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = amr_fleet_msgs__msg__FleetMetrics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        amr_fleet_msgs__msg__FleetMetrics__fini(&data[i - 1]);
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
amr_fleet_msgs__msg__FleetMetrics__Sequence__fini(amr_fleet_msgs__msg__FleetMetrics__Sequence * array)
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
      amr_fleet_msgs__msg__FleetMetrics__fini(&array->data[i]);
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

amr_fleet_msgs__msg__FleetMetrics__Sequence *
amr_fleet_msgs__msg__FleetMetrics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_fleet_msgs__msg__FleetMetrics__Sequence * array = (amr_fleet_msgs__msg__FleetMetrics__Sequence *)allocator.allocate(sizeof(amr_fleet_msgs__msg__FleetMetrics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = amr_fleet_msgs__msg__FleetMetrics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
amr_fleet_msgs__msg__FleetMetrics__Sequence__destroy(amr_fleet_msgs__msg__FleetMetrics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    amr_fleet_msgs__msg__FleetMetrics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
amr_fleet_msgs__msg__FleetMetrics__Sequence__are_equal(const amr_fleet_msgs__msg__FleetMetrics__Sequence * lhs, const amr_fleet_msgs__msg__FleetMetrics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!amr_fleet_msgs__msg__FleetMetrics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
amr_fleet_msgs__msg__FleetMetrics__Sequence__copy(
  const amr_fleet_msgs__msg__FleetMetrics__Sequence * input,
  amr_fleet_msgs__msg__FleetMetrics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(amr_fleet_msgs__msg__FleetMetrics)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(amr_fleet_msgs__msg__FleetMetrics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    amr_fleet_msgs__msg__FleetMetrics * data =
      (amr_fleet_msgs__msg__FleetMetrics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!amr_fleet_msgs__msg__FleetMetrics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          amr_fleet_msgs__msg__FleetMetrics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!amr_fleet_msgs__msg__FleetMetrics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
