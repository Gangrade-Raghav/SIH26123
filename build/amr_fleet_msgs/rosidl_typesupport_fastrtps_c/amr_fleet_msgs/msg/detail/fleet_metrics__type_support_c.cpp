// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from amr_fleet_msgs:msg/FleetMetrics.idl
// generated code does not contain a copyright notice
#include "amr_fleet_msgs/msg/detail/fleet_metrics__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "amr_fleet_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "amr_fleet_msgs/msg/detail/fleet_metrics__struct.h"
#include "amr_fleet_msgs/msg/detail/fleet_metrics__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_amr_fleet_msgs
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_amr_fleet_msgs
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_amr_fleet_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_amr_fleet_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_amr_fleet_msgs
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_amr_fleet_msgs
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_amr_fleet_msgs
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_amr_fleet_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _FleetMetrics__ros_msg_type = amr_fleet_msgs__msg__FleetMetrics;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
bool cdr_serialize_amr_fleet_msgs__msg__FleetMetrics(
  const amr_fleet_msgs__msg__FleetMetrics * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: active_robots
  {
    cdr << ros_message->active_robots;
  }

  // Field name: completed_tasks
  {
    cdr << ros_message->completed_tasks;
  }

  // Field name: throughput
  {
    cdr << ros_message->throughput;
  }

  // Field name: p50_planning_latency_ms
  {
    cdr << ros_message->p50_planning_latency_ms;
  }

  // Field name: p95_planning_latency_ms
  {
    cdr << ros_message->p95_planning_latency_ms;
  }

  // Field name: p99_planning_latency_ms
  {
    cdr << ros_message->p99_planning_latency_ms;
  }

  // Field name: total_network_bytes
  {
    cdr << ros_message->total_network_bytes;
  }

  // Field name: deadlock_count
  {
    cdr << ros_message->deadlock_count;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
bool cdr_deserialize_amr_fleet_msgs__msg__FleetMetrics(
  eprosima::fastcdr::Cdr & cdr,
  amr_fleet_msgs__msg__FleetMetrics * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: active_robots
  {
    cdr >> ros_message->active_robots;
  }

  // Field name: completed_tasks
  {
    cdr >> ros_message->completed_tasks;
  }

  // Field name: throughput
  {
    cdr >> ros_message->throughput;
  }

  // Field name: p50_planning_latency_ms
  {
    cdr >> ros_message->p50_planning_latency_ms;
  }

  // Field name: p95_planning_latency_ms
  {
    cdr >> ros_message->p95_planning_latency_ms;
  }

  // Field name: p99_planning_latency_ms
  {
    cdr >> ros_message->p99_planning_latency_ms;
  }

  // Field name: total_network_bytes
  {
    cdr >> ros_message->total_network_bytes;
  }

  // Field name: deadlock_count
  {
    cdr >> ros_message->deadlock_count;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
size_t get_serialized_size_amr_fleet_msgs__msg__FleetMetrics(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FleetMetrics__ros_msg_type * ros_message = static_cast<const _FleetMetrics__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: active_robots
  {
    size_t item_size = sizeof(ros_message->active_robots);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: completed_tasks
  {
    size_t item_size = sizeof(ros_message->completed_tasks);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: throughput
  {
    size_t item_size = sizeof(ros_message->throughput);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: p50_planning_latency_ms
  {
    size_t item_size = sizeof(ros_message->p50_planning_latency_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: p95_planning_latency_ms
  {
    size_t item_size = sizeof(ros_message->p95_planning_latency_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: p99_planning_latency_ms
  {
    size_t item_size = sizeof(ros_message->p99_planning_latency_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: total_network_bytes
  {
    size_t item_size = sizeof(ros_message->total_network_bytes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: deadlock_count
  {
    size_t item_size = sizeof(ros_message->deadlock_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
size_t max_serialized_size_amr_fleet_msgs__msg__FleetMetrics(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: active_robots
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: completed_tasks
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: throughput
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: p50_planning_latency_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: p95_planning_latency_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: p99_planning_latency_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: total_network_bytes
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: deadlock_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = amr_fleet_msgs__msg__FleetMetrics;
    is_plain =
      (
      offsetof(DataType, deadlock_count) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
bool cdr_serialize_key_amr_fleet_msgs__msg__FleetMetrics(
  const amr_fleet_msgs__msg__FleetMetrics * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: active_robots
  {
    cdr << ros_message->active_robots;
  }

  // Field name: completed_tasks
  {
    cdr << ros_message->completed_tasks;
  }

  // Field name: throughput
  {
    cdr << ros_message->throughput;
  }

  // Field name: p50_planning_latency_ms
  {
    cdr << ros_message->p50_planning_latency_ms;
  }

  // Field name: p95_planning_latency_ms
  {
    cdr << ros_message->p95_planning_latency_ms;
  }

  // Field name: p99_planning_latency_ms
  {
    cdr << ros_message->p99_planning_latency_ms;
  }

  // Field name: total_network_bytes
  {
    cdr << ros_message->total_network_bytes;
  }

  // Field name: deadlock_count
  {
    cdr << ros_message->deadlock_count;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
size_t get_serialized_size_key_amr_fleet_msgs__msg__FleetMetrics(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FleetMetrics__ros_msg_type * ros_message = static_cast<const _FleetMetrics__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: active_robots
  {
    size_t item_size = sizeof(ros_message->active_robots);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: completed_tasks
  {
    size_t item_size = sizeof(ros_message->completed_tasks);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: throughput
  {
    size_t item_size = sizeof(ros_message->throughput);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: p50_planning_latency_ms
  {
    size_t item_size = sizeof(ros_message->p50_planning_latency_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: p95_planning_latency_ms
  {
    size_t item_size = sizeof(ros_message->p95_planning_latency_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: p99_planning_latency_ms
  {
    size_t item_size = sizeof(ros_message->p99_planning_latency_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: total_network_bytes
  {
    size_t item_size = sizeof(ros_message->total_network_bytes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: deadlock_count
  {
    size_t item_size = sizeof(ros_message->deadlock_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
size_t max_serialized_size_key_amr_fleet_msgs__msg__FleetMetrics(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: active_robots
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: completed_tasks
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: throughput
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: p50_planning_latency_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: p95_planning_latency_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: p99_planning_latency_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: total_network_bytes
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: deadlock_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = amr_fleet_msgs__msg__FleetMetrics;
    is_plain =
      (
      offsetof(DataType, deadlock_count) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _FleetMetrics__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const amr_fleet_msgs__msg__FleetMetrics * ros_message = static_cast<const amr_fleet_msgs__msg__FleetMetrics *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_amr_fleet_msgs__msg__FleetMetrics(ros_message, cdr);
}

static bool _FleetMetrics__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  amr_fleet_msgs__msg__FleetMetrics * ros_message = static_cast<amr_fleet_msgs__msg__FleetMetrics *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_amr_fleet_msgs__msg__FleetMetrics(cdr, ros_message);
}

static uint32_t _FleetMetrics__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_amr_fleet_msgs__msg__FleetMetrics(
      untyped_ros_message, 0));
}

static size_t _FleetMetrics__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_amr_fleet_msgs__msg__FleetMetrics(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FleetMetrics = {
  "amr_fleet_msgs::msg",
  "FleetMetrics",
  _FleetMetrics__cdr_serialize,
  _FleetMetrics__cdr_deserialize,
  _FleetMetrics__get_serialized_size,
  _FleetMetrics__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _FleetMetrics__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FleetMetrics,
  get_message_typesupport_handle_function,
  &amr_fleet_msgs__msg__FleetMetrics__get_type_hash,
  &amr_fleet_msgs__msg__FleetMetrics__get_type_description,
  &amr_fleet_msgs__msg__FleetMetrics__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, amr_fleet_msgs, msg, FleetMetrics)() {
  return &_FleetMetrics__type_support;
}

#if defined(__cplusplus)
}
#endif
