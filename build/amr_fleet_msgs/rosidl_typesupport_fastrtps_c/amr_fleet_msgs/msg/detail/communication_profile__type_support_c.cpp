// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from amr_fleet_msgs:msg/CommunicationProfile.idl
// generated code does not contain a copyright notice
#include "amr_fleet_msgs/msg/detail/communication_profile__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "amr_fleet_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "amr_fleet_msgs/msg/detail/communication_profile__struct.h"
#include "amr_fleet_msgs/msg/detail/communication_profile__functions.h"
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

#include "rosidl_runtime_c/string.h"  // isolated_robots, profile_name
#include "rosidl_runtime_c/string_functions.h"  // isolated_robots, profile_name
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


using _CommunicationProfile__ros_msg_type = amr_fleet_msgs__msg__CommunicationProfile;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
bool cdr_serialize_amr_fleet_msgs__msg__CommunicationProfile(
  const amr_fleet_msgs__msg__CommunicationProfile * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: profile_name
  {
    const rosidl_runtime_c__String * str = &ros_message->profile_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: enabled
  {
    cdr << (ros_message->enabled ? true : false);
  }

  // Field name: latency_ms
  {
    cdr << ros_message->latency_ms;
  }

  // Field name: jitter_ms
  {
    cdr << ros_message->jitter_ms;
  }

  // Field name: loss_probability
  {
    cdr << ros_message->loss_probability;
  }

  // Field name: burst_loss_probability
  {
    cdr << ros_message->burst_loss_probability;
  }

  // Field name: outage_duration_s
  {
    cdr << ros_message->outage_duration_s;
  }

  // Field name: seed
  {
    cdr << ros_message->seed;
  }

  // Field name: isolated_robots
  {
    size_t size = ros_message->isolated_robots.size;
    auto array_ptr = ros_message->isolated_robots.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
bool cdr_deserialize_amr_fleet_msgs__msg__CommunicationProfile(
  eprosima::fastcdr::Cdr & cdr,
  amr_fleet_msgs__msg__CommunicationProfile * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: profile_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->profile_name.data) {
      rosidl_runtime_c__String__init(&ros_message->profile_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->profile_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'profile_name'\n");
      return false;
    }
  }

  // Field name: enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enabled = tmp ? true : false;
  }

  // Field name: latency_ms
  {
    cdr >> ros_message->latency_ms;
  }

  // Field name: jitter_ms
  {
    cdr >> ros_message->jitter_ms;
  }

  // Field name: loss_probability
  {
    cdr >> ros_message->loss_probability;
  }

  // Field name: burst_loss_probability
  {
    cdr >> ros_message->burst_loss_probability;
  }

  // Field name: outage_duration_s
  {
    cdr >> ros_message->outage_duration_s;
  }

  // Field name: seed
  {
    cdr >> ros_message->seed;
  }

  // Field name: isolated_robots
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->isolated_robots.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->isolated_robots);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->isolated_robots, size)) {
      fprintf(stderr, "failed to create array for field 'isolated_robots'");
      return false;
    }
    auto array_ptr = ros_message->isolated_robots.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'isolated_robots'\n");
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
size_t get_serialized_size_amr_fleet_msgs__msg__CommunicationProfile(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CommunicationProfile__ros_msg_type * ros_message = static_cast<const _CommunicationProfile__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: profile_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->profile_name.size + 1);

  // Field name: enabled
  {
    size_t item_size = sizeof(ros_message->enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: latency_ms
  {
    size_t item_size = sizeof(ros_message->latency_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: jitter_ms
  {
    size_t item_size = sizeof(ros_message->jitter_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: loss_probability
  {
    size_t item_size = sizeof(ros_message->loss_probability);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: burst_loss_probability
  {
    size_t item_size = sizeof(ros_message->burst_loss_probability);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: outage_duration_s
  {
    size_t item_size = sizeof(ros_message->outage_duration_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: seed
  {
    size_t item_size = sizeof(ros_message->seed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: isolated_robots
  {
    size_t array_size = ros_message->isolated_robots.size;
    auto array_ptr = ros_message->isolated_robots.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
size_t max_serialized_size_amr_fleet_msgs__msg__CommunicationProfile(
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

  // Field name: profile_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: latency_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: jitter_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: loss_probability
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: burst_loss_probability
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: outage_duration_s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: seed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: isolated_robots
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = amr_fleet_msgs__msg__CommunicationProfile;
    is_plain =
      (
      offsetof(DataType, isolated_robots) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
bool cdr_serialize_key_amr_fleet_msgs__msg__CommunicationProfile(
  const amr_fleet_msgs__msg__CommunicationProfile * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: profile_name
  {
    const rosidl_runtime_c__String * str = &ros_message->profile_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: enabled
  {
    cdr << (ros_message->enabled ? true : false);
  }

  // Field name: latency_ms
  {
    cdr << ros_message->latency_ms;
  }

  // Field name: jitter_ms
  {
    cdr << ros_message->jitter_ms;
  }

  // Field name: loss_probability
  {
    cdr << ros_message->loss_probability;
  }

  // Field name: burst_loss_probability
  {
    cdr << ros_message->burst_loss_probability;
  }

  // Field name: outage_duration_s
  {
    cdr << ros_message->outage_duration_s;
  }

  // Field name: seed
  {
    cdr << ros_message->seed;
  }

  // Field name: isolated_robots
  {
    size_t size = ros_message->isolated_robots.size;
    auto array_ptr = ros_message->isolated_robots.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
size_t get_serialized_size_key_amr_fleet_msgs__msg__CommunicationProfile(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CommunicationProfile__ros_msg_type * ros_message = static_cast<const _CommunicationProfile__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: profile_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->profile_name.size + 1);

  // Field name: enabled
  {
    size_t item_size = sizeof(ros_message->enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: latency_ms
  {
    size_t item_size = sizeof(ros_message->latency_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: jitter_ms
  {
    size_t item_size = sizeof(ros_message->jitter_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: loss_probability
  {
    size_t item_size = sizeof(ros_message->loss_probability);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: burst_loss_probability
  {
    size_t item_size = sizeof(ros_message->burst_loss_probability);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: outage_duration_s
  {
    size_t item_size = sizeof(ros_message->outage_duration_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: seed
  {
    size_t item_size = sizeof(ros_message->seed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: isolated_robots
  {
    size_t array_size = ros_message->isolated_robots.size;
    auto array_ptr = ros_message->isolated_robots.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
size_t max_serialized_size_key_amr_fleet_msgs__msg__CommunicationProfile(
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

  // Field name: profile_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: latency_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: jitter_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: loss_probability
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: burst_loss_probability
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: outage_duration_s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: seed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: isolated_robots
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = amr_fleet_msgs__msg__CommunicationProfile;
    is_plain =
      (
      offsetof(DataType, isolated_robots) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _CommunicationProfile__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const amr_fleet_msgs__msg__CommunicationProfile * ros_message = static_cast<const amr_fleet_msgs__msg__CommunicationProfile *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_amr_fleet_msgs__msg__CommunicationProfile(ros_message, cdr);
}

static bool _CommunicationProfile__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  amr_fleet_msgs__msg__CommunicationProfile * ros_message = static_cast<amr_fleet_msgs__msg__CommunicationProfile *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_amr_fleet_msgs__msg__CommunicationProfile(cdr, ros_message);
}

static uint32_t _CommunicationProfile__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_amr_fleet_msgs__msg__CommunicationProfile(
      untyped_ros_message, 0));
}

static size_t _CommunicationProfile__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_amr_fleet_msgs__msg__CommunicationProfile(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CommunicationProfile = {
  "amr_fleet_msgs::msg",
  "CommunicationProfile",
  _CommunicationProfile__cdr_serialize,
  _CommunicationProfile__cdr_deserialize,
  _CommunicationProfile__get_serialized_size,
  _CommunicationProfile__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _CommunicationProfile__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CommunicationProfile,
  get_message_typesupport_handle_function,
  &amr_fleet_msgs__msg__CommunicationProfile__get_type_hash,
  &amr_fleet_msgs__msg__CommunicationProfile__get_type_description,
  &amr_fleet_msgs__msg__CommunicationProfile__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, amr_fleet_msgs, msg, CommunicationProfile)() {
  return &_CommunicationProfile__type_support;
}

#if defined(__cplusplus)
}
#endif
