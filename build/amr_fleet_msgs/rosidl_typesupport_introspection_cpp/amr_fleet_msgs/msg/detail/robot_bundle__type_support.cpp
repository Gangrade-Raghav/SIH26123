// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from amr_fleet_msgs:msg/RobotBundle.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "amr_fleet_msgs/msg/detail/robot_bundle__functions.h"
#include "amr_fleet_msgs/msg/detail/robot_bundle__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace amr_fleet_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RobotBundle_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) amr_fleet_msgs::msg::RobotBundle(_init);
}

void RobotBundle_fini_function(void * message_memory)
{
  auto typed_message = static_cast<amr_fleet_msgs::msg::RobotBundle *>(message_memory);
  typed_message->~RobotBundle();
}

size_t size_function__RobotBundle__task_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RobotBundle__task_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotBundle__task_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__RobotBundle__task_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__RobotBundle__task_ids(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__RobotBundle__task_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__RobotBundle__task_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__RobotBundle__task_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RobotBundle__bid_values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RobotBundle__bid_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotBundle__bid_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__RobotBundle__bid_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__RobotBundle__bid_values(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__RobotBundle__bid_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__RobotBundle__bid_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__RobotBundle__bid_values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RobotBundle_message_member_array[5] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs::msg::RobotBundle, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "robot_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs::msg::RobotBundle, robot_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "task_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs::msg::RobotBundle, task_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotBundle__task_ids,  // size() function pointer
    get_const_function__RobotBundle__task_ids,  // get_const(index) function pointer
    get_function__RobotBundle__task_ids,  // get(index) function pointer
    fetch_function__RobotBundle__task_ids,  // fetch(index, &value) function pointer
    assign_function__RobotBundle__task_ids,  // assign(index, value) function pointer
    resize_function__RobotBundle__task_ids  // resize(index) function pointer
  },
  {
    "bid_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs::msg::RobotBundle, bid_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotBundle__bid_values,  // size() function pointer
    get_const_function__RobotBundle__bid_values,  // get_const(index) function pointer
    get_function__RobotBundle__bid_values,  // get(index) function pointer
    fetch_function__RobotBundle__bid_values,  // fetch(index, &value) function pointer
    assign_function__RobotBundle__bid_values,  // assign(index, value) function pointer
    resize_function__RobotBundle__bid_values  // resize(index) function pointer
  },
  {
    "is_converged",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs::msg::RobotBundle, is_converged),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RobotBundle_message_members = {
  "amr_fleet_msgs::msg",  // message namespace
  "RobotBundle",  // message name
  5,  // number of fields
  sizeof(amr_fleet_msgs::msg::RobotBundle),
  false,  // has_any_key_member_
  RobotBundle_message_member_array,  // message members
  RobotBundle_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotBundle_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RobotBundle_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RobotBundle_message_members,
  get_message_typesupport_handle_function,
  &amr_fleet_msgs__msg__RobotBundle__get_type_hash,
  &amr_fleet_msgs__msg__RobotBundle__get_type_description,
  &amr_fleet_msgs__msg__RobotBundle__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace amr_fleet_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<amr_fleet_msgs::msg::RobotBundle>()
{
  return &::amr_fleet_msgs::msg::rosidl_typesupport_introspection_cpp::RobotBundle_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, amr_fleet_msgs, msg, RobotBundle)() {
  return &::amr_fleet_msgs::msg::rosidl_typesupport_introspection_cpp::RobotBundle_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
