// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from amr_fleet_msgs:msg/ConflictReport.idl
// generated code does not contain a copyright notice
#include "amr_fleet_msgs/msg/detail/conflict_report__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "amr_fleet_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "amr_fleet_msgs/msg/detail/conflict_report__struct.h"
#include "amr_fleet_msgs/msg/detail/conflict_report__functions.h"
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

#include "rosidl_runtime_c/string.h"  // conflict_type, robot_a, robot_b
#include "rosidl_runtime_c/string_functions.h"  // conflict_type, robot_a, robot_b
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


using _ConflictReport__ros_msg_type = amr_fleet_msgs__msg__ConflictReport;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
bool cdr_serialize_amr_fleet_msgs__msg__ConflictReport(
  const amr_fleet_msgs__msg__ConflictReport * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: conflict_type
  {
    const rosidl_runtime_c__String * str = &ros_message->conflict_type;
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

  // Field name: robot_a
  {
    const rosidl_runtime_c__String * str = &ros_message->robot_a;
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

  // Field name: robot_b
  {
    const rosidl_runtime_c__String * str = &ros_message->robot_b;
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

  // Field name: cell_x
  {
    cdr << ros_message->cell_x;
  }

  // Field name: cell_y
  {
    cdr << ros_message->cell_y;
  }

  // Field name: time_step
  {
    cdr << ros_message->time_step;
  }

  // Field name: resolved
  {
    cdr << (ros_message->resolved ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
bool cdr_deserialize_amr_fleet_msgs__msg__ConflictReport(
  eprosima::fastcdr::Cdr & cdr,
  amr_fleet_msgs__msg__ConflictReport * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: conflict_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->conflict_type.data) {
      rosidl_runtime_c__String__init(&ros_message->conflict_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->conflict_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'conflict_type'\n");
      return false;
    }
  }

  // Field name: robot_a
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->robot_a.data) {
      rosidl_runtime_c__String__init(&ros_message->robot_a);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->robot_a,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'robot_a'\n");
      return false;
    }
  }

  // Field name: robot_b
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->robot_b.data) {
      rosidl_runtime_c__String__init(&ros_message->robot_b);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->robot_b,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'robot_b'\n");
      return false;
    }
  }

  // Field name: cell_x
  {
    cdr >> ros_message->cell_x;
  }

  // Field name: cell_y
  {
    cdr >> ros_message->cell_y;
  }

  // Field name: time_step
  {
    cdr >> ros_message->time_step;
  }

  // Field name: resolved
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->resolved = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
size_t get_serialized_size_amr_fleet_msgs__msg__ConflictReport(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ConflictReport__ros_msg_type * ros_message = static_cast<const _ConflictReport__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: conflict_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->conflict_type.size + 1);

  // Field name: robot_a
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->robot_a.size + 1);

  // Field name: robot_b
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->robot_b.size + 1);

  // Field name: cell_x
  {
    size_t item_size = sizeof(ros_message->cell_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cell_y
  {
    size_t item_size = sizeof(ros_message->cell_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: time_step
  {
    size_t item_size = sizeof(ros_message->time_step);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: resolved
  {
    size_t item_size = sizeof(ros_message->resolved);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
size_t max_serialized_size_amr_fleet_msgs__msg__ConflictReport(
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

  // Field name: conflict_type
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

  // Field name: robot_a
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

  // Field name: robot_b
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

  // Field name: cell_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: cell_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: time_step
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: resolved
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = amr_fleet_msgs__msg__ConflictReport;
    is_plain =
      (
      offsetof(DataType, resolved) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
bool cdr_serialize_key_amr_fleet_msgs__msg__ConflictReport(
  const amr_fleet_msgs__msg__ConflictReport * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: conflict_type
  {
    const rosidl_runtime_c__String * str = &ros_message->conflict_type;
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

  // Field name: robot_a
  {
    const rosidl_runtime_c__String * str = &ros_message->robot_a;
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

  // Field name: robot_b
  {
    const rosidl_runtime_c__String * str = &ros_message->robot_b;
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

  // Field name: cell_x
  {
    cdr << ros_message->cell_x;
  }

  // Field name: cell_y
  {
    cdr << ros_message->cell_y;
  }

  // Field name: time_step
  {
    cdr << ros_message->time_step;
  }

  // Field name: resolved
  {
    cdr << (ros_message->resolved ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
size_t get_serialized_size_key_amr_fleet_msgs__msg__ConflictReport(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ConflictReport__ros_msg_type * ros_message = static_cast<const _ConflictReport__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: conflict_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->conflict_type.size + 1);

  // Field name: robot_a
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->robot_a.size + 1);

  // Field name: robot_b
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->robot_b.size + 1);

  // Field name: cell_x
  {
    size_t item_size = sizeof(ros_message->cell_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cell_y
  {
    size_t item_size = sizeof(ros_message->cell_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: time_step
  {
    size_t item_size = sizeof(ros_message->time_step);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: resolved
  {
    size_t item_size = sizeof(ros_message->resolved);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
size_t max_serialized_size_key_amr_fleet_msgs__msg__ConflictReport(
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

  // Field name: conflict_type
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

  // Field name: robot_a
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

  // Field name: robot_b
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

  // Field name: cell_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: cell_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: time_step
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: resolved
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = amr_fleet_msgs__msg__ConflictReport;
    is_plain =
      (
      offsetof(DataType, resolved) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _ConflictReport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const amr_fleet_msgs__msg__ConflictReport * ros_message = static_cast<const amr_fleet_msgs__msg__ConflictReport *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_amr_fleet_msgs__msg__ConflictReport(ros_message, cdr);
}

static bool _ConflictReport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  amr_fleet_msgs__msg__ConflictReport * ros_message = static_cast<amr_fleet_msgs__msg__ConflictReport *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_amr_fleet_msgs__msg__ConflictReport(cdr, ros_message);
}

static uint32_t _ConflictReport__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_amr_fleet_msgs__msg__ConflictReport(
      untyped_ros_message, 0));
}

static size_t _ConflictReport__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_amr_fleet_msgs__msg__ConflictReport(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ConflictReport = {
  "amr_fleet_msgs::msg",
  "ConflictReport",
  _ConflictReport__cdr_serialize,
  _ConflictReport__cdr_deserialize,
  _ConflictReport__get_serialized_size,
  _ConflictReport__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ConflictReport__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ConflictReport,
  get_message_typesupport_handle_function,
  &amr_fleet_msgs__msg__ConflictReport__get_type_hash,
  &amr_fleet_msgs__msg__ConflictReport__get_type_description,
  &amr_fleet_msgs__msg__ConflictReport__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, amr_fleet_msgs, msg, ConflictReport)() {
  return &_ConflictReport__type_support;
}

#if defined(__cplusplus)
}
#endif
