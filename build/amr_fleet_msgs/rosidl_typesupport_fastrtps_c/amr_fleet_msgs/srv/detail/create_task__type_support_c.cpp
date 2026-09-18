// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from amr_fleet_msgs:srv/CreateTask.idl
// generated code does not contain a copyright notice
#include "amr_fleet_msgs/srv/detail/create_task__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "amr_fleet_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "amr_fleet_msgs/srv/detail/create_task__struct.h"
#include "amr_fleet_msgs/srv/detail/create_task__functions.h"
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

#include "rosidl_runtime_c/string.h"  // requested_robot, task_id
#include "rosidl_runtime_c/string_functions.h"  // requested_robot, task_id

// forward declare type support functions


using _CreateTask_Request__ros_msg_type = amr_fleet_msgs__srv__CreateTask_Request;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
bool cdr_serialize_amr_fleet_msgs__srv__CreateTask_Request(
  const amr_fleet_msgs__srv__CreateTask_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: task_id
  {
    const rosidl_runtime_c__String * str = &ros_message->task_id;
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

  // Field name: pickup_x
  {
    cdr << ros_message->pickup_x;
  }

  // Field name: pickup_y
  {
    cdr << ros_message->pickup_y;
  }

  // Field name: dropoff_x
  {
    cdr << ros_message->dropoff_x;
  }

  // Field name: dropoff_y
  {
    cdr << ros_message->dropoff_y;
  }

  // Field name: priority
  {
    cdr << ros_message->priority;
  }

  // Field name: deadline
  {
    cdr << ros_message->deadline;
  }

  // Field name: requested_robot
  {
    const rosidl_runtime_c__String * str = &ros_message->requested_robot;
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

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
bool cdr_deserialize_amr_fleet_msgs__srv__CreateTask_Request(
  eprosima::fastcdr::Cdr & cdr,
  amr_fleet_msgs__srv__CreateTask_Request * ros_message)
{
  // Field name: task_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->task_id.data) {
      rosidl_runtime_c__String__init(&ros_message->task_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->task_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'task_id'\n");
      return false;
    }
  }

  // Field name: pickup_x
  {
    cdr >> ros_message->pickup_x;
  }

  // Field name: pickup_y
  {
    cdr >> ros_message->pickup_y;
  }

  // Field name: dropoff_x
  {
    cdr >> ros_message->dropoff_x;
  }

  // Field name: dropoff_y
  {
    cdr >> ros_message->dropoff_y;
  }

  // Field name: priority
  {
    cdr >> ros_message->priority;
  }

  // Field name: deadline
  {
    cdr >> ros_message->deadline;
  }

  // Field name: requested_robot
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->requested_robot.data) {
      rosidl_runtime_c__String__init(&ros_message->requested_robot);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->requested_robot,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'requested_robot'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
size_t get_serialized_size_amr_fleet_msgs__srv__CreateTask_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CreateTask_Request__ros_msg_type * ros_message = static_cast<const _CreateTask_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: task_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->task_id.size + 1);

  // Field name: pickup_x
  {
    size_t item_size = sizeof(ros_message->pickup_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pickup_y
  {
    size_t item_size = sizeof(ros_message->pickup_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dropoff_x
  {
    size_t item_size = sizeof(ros_message->dropoff_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dropoff_y
  {
    size_t item_size = sizeof(ros_message->dropoff_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: priority
  {
    size_t item_size = sizeof(ros_message->priority);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: deadline
  {
    size_t item_size = sizeof(ros_message->deadline);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: requested_robot
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->requested_robot.size + 1);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
size_t max_serialized_size_amr_fleet_msgs__srv__CreateTask_Request(
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

  // Field name: task_id
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

  // Field name: pickup_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: pickup_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: dropoff_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: dropoff_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: priority
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: deadline
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: requested_robot
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


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = amr_fleet_msgs__srv__CreateTask_Request;
    is_plain =
      (
      offsetof(DataType, requested_robot) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
bool cdr_serialize_key_amr_fleet_msgs__srv__CreateTask_Request(
  const amr_fleet_msgs__srv__CreateTask_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: task_id
  {
    const rosidl_runtime_c__String * str = &ros_message->task_id;
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

  // Field name: pickup_x
  {
    cdr << ros_message->pickup_x;
  }

  // Field name: pickup_y
  {
    cdr << ros_message->pickup_y;
  }

  // Field name: dropoff_x
  {
    cdr << ros_message->dropoff_x;
  }

  // Field name: dropoff_y
  {
    cdr << ros_message->dropoff_y;
  }

  // Field name: priority
  {
    cdr << ros_message->priority;
  }

  // Field name: deadline
  {
    cdr << ros_message->deadline;
  }

  // Field name: requested_robot
  {
    const rosidl_runtime_c__String * str = &ros_message->requested_robot;
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

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
size_t get_serialized_size_key_amr_fleet_msgs__srv__CreateTask_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CreateTask_Request__ros_msg_type * ros_message = static_cast<const _CreateTask_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: task_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->task_id.size + 1);

  // Field name: pickup_x
  {
    size_t item_size = sizeof(ros_message->pickup_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pickup_y
  {
    size_t item_size = sizeof(ros_message->pickup_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dropoff_x
  {
    size_t item_size = sizeof(ros_message->dropoff_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dropoff_y
  {
    size_t item_size = sizeof(ros_message->dropoff_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: priority
  {
    size_t item_size = sizeof(ros_message->priority);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: deadline
  {
    size_t item_size = sizeof(ros_message->deadline);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: requested_robot
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->requested_robot.size + 1);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
size_t max_serialized_size_key_amr_fleet_msgs__srv__CreateTask_Request(
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
  // Field name: task_id
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

  // Field name: pickup_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: pickup_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: dropoff_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: dropoff_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: priority
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: deadline
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: requested_robot
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = amr_fleet_msgs__srv__CreateTask_Request;
    is_plain =
      (
      offsetof(DataType, requested_robot) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _CreateTask_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const amr_fleet_msgs__srv__CreateTask_Request * ros_message = static_cast<const amr_fleet_msgs__srv__CreateTask_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_amr_fleet_msgs__srv__CreateTask_Request(ros_message, cdr);
}

static bool _CreateTask_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  amr_fleet_msgs__srv__CreateTask_Request * ros_message = static_cast<amr_fleet_msgs__srv__CreateTask_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_amr_fleet_msgs__srv__CreateTask_Request(cdr, ros_message);
}

static uint32_t _CreateTask_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_amr_fleet_msgs__srv__CreateTask_Request(
      untyped_ros_message, 0));
}

static size_t _CreateTask_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_amr_fleet_msgs__srv__CreateTask_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CreateTask_Request = {
  "amr_fleet_msgs::srv",
  "CreateTask_Request",
  _CreateTask_Request__cdr_serialize,
  _CreateTask_Request__cdr_deserialize,
  _CreateTask_Request__get_serialized_size,
  _CreateTask_Request__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _CreateTask_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CreateTask_Request,
  get_message_typesupport_handle_function,
  &amr_fleet_msgs__srv__CreateTask_Request__get_type_hash,
  &amr_fleet_msgs__srv__CreateTask_Request__get_type_description,
  &amr_fleet_msgs__srv__CreateTask_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, amr_fleet_msgs, srv, CreateTask_Request)() {
  return &_CreateTask_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "amr_fleet_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "amr_fleet_msgs/srv/detail/create_task__struct.h"
// already included above
// #include "amr_fleet_msgs/srv/detail/create_task__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "rosidl_runtime_c/string.h"  // message, task_id
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // message, task_id

// forward declare type support functions


using _CreateTask_Response__ros_msg_type = amr_fleet_msgs__srv__CreateTask_Response;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
bool cdr_serialize_amr_fleet_msgs__srv__CreateTask_Response(
  const amr_fleet_msgs__srv__CreateTask_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: accepted
  {
    cdr << (ros_message->accepted ? true : false);
  }

  // Field name: task_id
  {
    const rosidl_runtime_c__String * str = &ros_message->task_id;
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

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
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

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
bool cdr_deserialize_amr_fleet_msgs__srv__CreateTask_Response(
  eprosima::fastcdr::Cdr & cdr,
  amr_fleet_msgs__srv__CreateTask_Response * ros_message)
{
  // Field name: accepted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accepted = tmp ? true : false;
  }

  // Field name: task_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->task_id.data) {
      rosidl_runtime_c__String__init(&ros_message->task_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->task_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'task_id'\n");
      return false;
    }
  }

  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_runtime_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
size_t get_serialized_size_amr_fleet_msgs__srv__CreateTask_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CreateTask_Response__ros_msg_type * ros_message = static_cast<const _CreateTask_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: accepted
  {
    size_t item_size = sizeof(ros_message->accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: task_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->task_id.size + 1);

  // Field name: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
size_t max_serialized_size_amr_fleet_msgs__srv__CreateTask_Response(
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

  // Field name: accepted
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: task_id
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

  // Field name: message
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


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = amr_fleet_msgs__srv__CreateTask_Response;
    is_plain =
      (
      offsetof(DataType, message) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
bool cdr_serialize_key_amr_fleet_msgs__srv__CreateTask_Response(
  const amr_fleet_msgs__srv__CreateTask_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: accepted
  {
    cdr << (ros_message->accepted ? true : false);
  }

  // Field name: task_id
  {
    const rosidl_runtime_c__String * str = &ros_message->task_id;
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

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
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

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
size_t get_serialized_size_key_amr_fleet_msgs__srv__CreateTask_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CreateTask_Response__ros_msg_type * ros_message = static_cast<const _CreateTask_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: accepted
  {
    size_t item_size = sizeof(ros_message->accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: task_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->task_id.size + 1);

  // Field name: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
size_t max_serialized_size_key_amr_fleet_msgs__srv__CreateTask_Response(
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
  // Field name: accepted
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: task_id
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

  // Field name: message
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = amr_fleet_msgs__srv__CreateTask_Response;
    is_plain =
      (
      offsetof(DataType, message) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _CreateTask_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const amr_fleet_msgs__srv__CreateTask_Response * ros_message = static_cast<const amr_fleet_msgs__srv__CreateTask_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_amr_fleet_msgs__srv__CreateTask_Response(ros_message, cdr);
}

static bool _CreateTask_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  amr_fleet_msgs__srv__CreateTask_Response * ros_message = static_cast<amr_fleet_msgs__srv__CreateTask_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_amr_fleet_msgs__srv__CreateTask_Response(cdr, ros_message);
}

static uint32_t _CreateTask_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_amr_fleet_msgs__srv__CreateTask_Response(
      untyped_ros_message, 0));
}

static size_t _CreateTask_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_amr_fleet_msgs__srv__CreateTask_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CreateTask_Response = {
  "amr_fleet_msgs::srv",
  "CreateTask_Response",
  _CreateTask_Response__cdr_serialize,
  _CreateTask_Response__cdr_deserialize,
  _CreateTask_Response__get_serialized_size,
  _CreateTask_Response__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _CreateTask_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CreateTask_Response,
  get_message_typesupport_handle_function,
  &amr_fleet_msgs__srv__CreateTask_Response__get_type_hash,
  &amr_fleet_msgs__srv__CreateTask_Response__get_type_description,
  &amr_fleet_msgs__srv__CreateTask_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, amr_fleet_msgs, srv, CreateTask_Response)() {
  return &_CreateTask_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "amr_fleet_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "amr_fleet_msgs/srv/detail/create_task__struct.h"
// already included above
// #include "amr_fleet_msgs/srv/detail/create_task__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions

bool cdr_serialize_amr_fleet_msgs__srv__CreateTask_Request(
  const amr_fleet_msgs__srv__CreateTask_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_amr_fleet_msgs__srv__CreateTask_Request(
  eprosima::fastcdr::Cdr & cdr,
  amr_fleet_msgs__srv__CreateTask_Request * ros_message);

size_t get_serialized_size_amr_fleet_msgs__srv__CreateTask_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_amr_fleet_msgs__srv__CreateTask_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_amr_fleet_msgs__srv__CreateTask_Request(
  const amr_fleet_msgs__srv__CreateTask_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_amr_fleet_msgs__srv__CreateTask_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_amr_fleet_msgs__srv__CreateTask_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, amr_fleet_msgs, srv, CreateTask_Request)();

bool cdr_serialize_amr_fleet_msgs__srv__CreateTask_Response(
  const amr_fleet_msgs__srv__CreateTask_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_amr_fleet_msgs__srv__CreateTask_Response(
  eprosima::fastcdr::Cdr & cdr,
  amr_fleet_msgs__srv__CreateTask_Response * ros_message);

size_t get_serialized_size_amr_fleet_msgs__srv__CreateTask_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_amr_fleet_msgs__srv__CreateTask_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_amr_fleet_msgs__srv__CreateTask_Response(
  const amr_fleet_msgs__srv__CreateTask_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_amr_fleet_msgs__srv__CreateTask_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_amr_fleet_msgs__srv__CreateTask_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, amr_fleet_msgs, srv, CreateTask_Response)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_amr_fleet_msgs
bool cdr_serialize_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_amr_fleet_msgs
bool cdr_deserialize_service_msgs__msg__ServiceEventInfo(
  eprosima::fastcdr::Cdr & cdr,
  service_msgs__msg__ServiceEventInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_amr_fleet_msgs
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_amr_fleet_msgs
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_amr_fleet_msgs
bool cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_amr_fleet_msgs
size_t get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_amr_fleet_msgs
size_t max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_amr_fleet_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();


using _CreateTask_Event__ros_msg_type = amr_fleet_msgs__srv__CreateTask_Event;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
bool cdr_serialize_amr_fleet_msgs__srv__CreateTask_Event(
  const amr_fleet_msgs__srv__CreateTask_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_amr_fleet_msgs__srv__CreateTask_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_amr_fleet_msgs__srv__CreateTask_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
bool cdr_deserialize_amr_fleet_msgs__srv__CreateTask_Event(
  eprosima::fastcdr::Cdr & cdr,
  amr_fleet_msgs__srv__CreateTask_Event * ros_message)
{
  // Field name: info
  {
    cdr_deserialize_service_msgs__msg__ServiceEventInfo(cdr, &ros_message->info);
  }

  // Field name: request
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

    if (ros_message->request.data) {
      amr_fleet_msgs__srv__CreateTask_Request__Sequence__fini(&ros_message->request);
    }
    if (!amr_fleet_msgs__srv__CreateTask_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_amr_fleet_msgs__srv__CreateTask_Request(cdr, &array_ptr[i]);
    }
  }

  // Field name: response
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

    if (ros_message->response.data) {
      amr_fleet_msgs__srv__CreateTask_Response__Sequence__fini(&ros_message->response);
    }
    if (!amr_fleet_msgs__srv__CreateTask_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_amr_fleet_msgs__srv__CreateTask_Response(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
size_t get_serialized_size_amr_fleet_msgs__srv__CreateTask_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CreateTask_Event__ros_msg_type * ros_message = static_cast<const _CreateTask_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_amr_fleet_msgs__srv__CreateTask_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_amr_fleet_msgs__srv__CreateTask_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
size_t max_serialized_size_amr_fleet_msgs__srv__CreateTask_Event(
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

  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_amr_fleet_msgs__srv__CreateTask_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_amr_fleet_msgs__srv__CreateTask_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = amr_fleet_msgs__srv__CreateTask_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
bool cdr_serialize_key_amr_fleet_msgs__srv__CreateTask_Event(
  const amr_fleet_msgs__srv__CreateTask_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_amr_fleet_msgs__srv__CreateTask_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_amr_fleet_msgs__srv__CreateTask_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
size_t get_serialized_size_key_amr_fleet_msgs__srv__CreateTask_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CreateTask_Event__ros_msg_type * ros_message = static_cast<const _CreateTask_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_amr_fleet_msgs__srv__CreateTask_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_amr_fleet_msgs__srv__CreateTask_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_fleet_msgs
size_t max_serialized_size_key_amr_fleet_msgs__srv__CreateTask_Event(
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
  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_amr_fleet_msgs__srv__CreateTask_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_amr_fleet_msgs__srv__CreateTask_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = amr_fleet_msgs__srv__CreateTask_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _CreateTask_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const amr_fleet_msgs__srv__CreateTask_Event * ros_message = static_cast<const amr_fleet_msgs__srv__CreateTask_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_amr_fleet_msgs__srv__CreateTask_Event(ros_message, cdr);
}

static bool _CreateTask_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  amr_fleet_msgs__srv__CreateTask_Event * ros_message = static_cast<amr_fleet_msgs__srv__CreateTask_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_amr_fleet_msgs__srv__CreateTask_Event(cdr, ros_message);
}

static uint32_t _CreateTask_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_amr_fleet_msgs__srv__CreateTask_Event(
      untyped_ros_message, 0));
}

static size_t _CreateTask_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_amr_fleet_msgs__srv__CreateTask_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CreateTask_Event = {
  "amr_fleet_msgs::srv",
  "CreateTask_Event",
  _CreateTask_Event__cdr_serialize,
  _CreateTask_Event__cdr_deserialize,
  _CreateTask_Event__get_serialized_size,
  _CreateTask_Event__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _CreateTask_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CreateTask_Event,
  get_message_typesupport_handle_function,
  &amr_fleet_msgs__srv__CreateTask_Event__get_type_hash,
  &amr_fleet_msgs__srv__CreateTask_Event__get_type_description,
  &amr_fleet_msgs__srv__CreateTask_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, amr_fleet_msgs, srv, CreateTask_Event)() {
  return &_CreateTask_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "amr_fleet_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "amr_fleet_msgs/srv/create_task.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t CreateTask__callbacks = {
  "amr_fleet_msgs::srv",
  "CreateTask",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, amr_fleet_msgs, srv, CreateTask_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, amr_fleet_msgs, srv, CreateTask_Response)(),
};

static rosidl_service_type_support_t CreateTask__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &CreateTask__callbacks,
  get_service_typesupport_handle_function,
  &_CreateTask_Request__type_support,
  &_CreateTask_Response__type_support,
  &_CreateTask_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    amr_fleet_msgs,
    srv,
    CreateTask
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    amr_fleet_msgs,
    srv,
    CreateTask
  ),
  &amr_fleet_msgs__srv__CreateTask__get_type_hash,
  &amr_fleet_msgs__srv__CreateTask__get_type_description,
  &amr_fleet_msgs__srv__CreateTask__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, amr_fleet_msgs, srv, CreateTask)() {
  return &CreateTask__handle;
}

#if defined(__cplusplus)
}
#endif
