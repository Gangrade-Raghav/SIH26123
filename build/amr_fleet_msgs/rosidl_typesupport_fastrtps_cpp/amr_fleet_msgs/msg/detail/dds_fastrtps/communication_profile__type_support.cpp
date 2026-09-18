// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from amr_fleet_msgs:msg/CommunicationProfile.idl
// generated code does not contain a copyright notice
#include "amr_fleet_msgs/msg/detail/communication_profile__rosidl_typesupport_fastrtps_cpp.hpp"
#include "amr_fleet_msgs/msg/detail/communication_profile__functions.h"
#include "amr_fleet_msgs/msg/detail/communication_profile__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_key_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace amr_fleet_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amr_fleet_msgs
cdr_serialize(
  const amr_fleet_msgs::msg::CommunicationProfile & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);

  // Member: profile_name
  cdr << ros_message.profile_name;

  // Member: enabled
  cdr << (ros_message.enabled ? true : false);

  // Member: latency_ms
  cdr << ros_message.latency_ms;

  // Member: jitter_ms
  cdr << ros_message.jitter_ms;

  // Member: loss_probability
  cdr << ros_message.loss_probability;

  // Member: burst_loss_probability
  cdr << ros_message.burst_loss_probability;

  // Member: outage_duration_s
  cdr << ros_message.outage_duration_s;

  // Member: seed
  cdr << ros_message.seed;

  // Member: isolated_robots
  {
    cdr << ros_message.isolated_robots;
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amr_fleet_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  amr_fleet_msgs::msg::CommunicationProfile & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: profile_name
  cdr >> ros_message.profile_name;

  // Member: enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.enabled = tmp ? true : false;
  }

  // Member: latency_ms
  cdr >> ros_message.latency_ms;

  // Member: jitter_ms
  cdr >> ros_message.jitter_ms;

  // Member: loss_probability
  cdr >> ros_message.loss_probability;

  // Member: burst_loss_probability
  cdr >> ros_message.burst_loss_probability;

  // Member: outage_duration_s
  cdr >> ros_message.outage_duration_s;

  // Member: seed
  cdr >> ros_message.seed;

  // Member: isolated_robots
  {
    cdr >> ros_message.isolated_robots;
  }

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amr_fleet_msgs
get_serialized_size(
  const amr_fleet_msgs::msg::CommunicationProfile & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header
  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);

  // Member: profile_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.profile_name.size() + 1);

  // Member: enabled
  {
    size_t item_size = sizeof(ros_message.enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: latency_ms
  {
    size_t item_size = sizeof(ros_message.latency_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: jitter_ms
  {
    size_t item_size = sizeof(ros_message.jitter_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: loss_probability
  {
    size_t item_size = sizeof(ros_message.loss_probability);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: burst_loss_probability
  {
    size_t item_size = sizeof(ros_message.burst_loss_probability);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: outage_duration_s
  {
    size_t item_size = sizeof(ros_message.outage_duration_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: seed
  {
    size_t item_size = sizeof(ros_message.seed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: isolated_robots
  {
    size_t array_size = ros_message.isolated_robots.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.isolated_robots[index].size() + 1);
    }
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amr_fleet_msgs
max_serialized_size_CommunicationProfile(
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

  // Member: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: profile_name
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
  // Member: enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: latency_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: jitter_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: loss_probability
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: burst_loss_probability
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: outage_duration_s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: seed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: isolated_robots
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
    using DataType = amr_fleet_msgs::msg::CommunicationProfile;
    is_plain =
      (
      offsetof(DataType, isolated_robots) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amr_fleet_msgs
cdr_serialize_key(
  const amr_fleet_msgs::msg::CommunicationProfile & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.header,
    cdr);

  // Member: profile_name
  cdr << ros_message.profile_name;

  // Member: enabled
  cdr << (ros_message.enabled ? true : false);

  // Member: latency_ms
  cdr << ros_message.latency_ms;

  // Member: jitter_ms
  cdr << ros_message.jitter_ms;

  // Member: loss_probability
  cdr << ros_message.loss_probability;

  // Member: burst_loss_probability
  cdr << ros_message.burst_loss_probability;

  // Member: outage_duration_s
  cdr << ros_message.outage_duration_s;

  // Member: seed
  cdr << ros_message.seed;

  // Member: isolated_robots
  {
    cdr << ros_message.isolated_robots;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amr_fleet_msgs
get_serialized_size_key(
  const amr_fleet_msgs::msg::CommunicationProfile & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header
  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.header, current_alignment);

  // Member: profile_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.profile_name.size() + 1);

  // Member: enabled
  {
    size_t item_size = sizeof(ros_message.enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: latency_ms
  {
    size_t item_size = sizeof(ros_message.latency_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: jitter_ms
  {
    size_t item_size = sizeof(ros_message.jitter_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: loss_probability
  {
    size_t item_size = sizeof(ros_message.loss_probability);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: burst_loss_probability
  {
    size_t item_size = sizeof(ros_message.burst_loss_probability);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: outage_duration_s
  {
    size_t item_size = sizeof(ros_message.outage_duration_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: seed
  {
    size_t item_size = sizeof(ros_message.seed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: isolated_robots
  {
    size_t array_size = ros_message.isolated_robots.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.isolated_robots[index].size() + 1);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amr_fleet_msgs
max_serialized_size_key_CommunicationProfile(
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

  // Member: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: profile_name
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

  // Member: enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: latency_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: jitter_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: loss_probability
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: burst_loss_probability
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: outage_duration_s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: seed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: isolated_robots
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
    using DataType = amr_fleet_msgs::msg::CommunicationProfile;
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
  auto typed_message =
    static_cast<const amr_fleet_msgs::msg::CommunicationProfile *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CommunicationProfile__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<amr_fleet_msgs::msg::CommunicationProfile *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CommunicationProfile__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const amr_fleet_msgs::msg::CommunicationProfile *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CommunicationProfile__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_CommunicationProfile(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _CommunicationProfile__callbacks = {
  "amr_fleet_msgs::msg",
  "CommunicationProfile",
  _CommunicationProfile__cdr_serialize,
  _CommunicationProfile__cdr_deserialize,
  _CommunicationProfile__get_serialized_size,
  _CommunicationProfile__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _CommunicationProfile__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CommunicationProfile__callbacks,
  get_message_typesupport_handle_function,
  &amr_fleet_msgs__msg__CommunicationProfile__get_type_hash,
  &amr_fleet_msgs__msg__CommunicationProfile__get_type_description,
  &amr_fleet_msgs__msg__CommunicationProfile__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace amr_fleet_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_amr_fleet_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<amr_fleet_msgs::msg::CommunicationProfile>()
{
  return &amr_fleet_msgs::msg::typesupport_fastrtps_cpp::_CommunicationProfile__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, amr_fleet_msgs, msg, CommunicationProfile)() {
  return &amr_fleet_msgs::msg::typesupport_fastrtps_cpp::_CommunicationProfile__handle;
}

#ifdef __cplusplus
}
#endif
