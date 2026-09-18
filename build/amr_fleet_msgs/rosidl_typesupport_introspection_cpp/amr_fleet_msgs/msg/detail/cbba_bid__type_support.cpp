// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from amr_fleet_msgs:msg/CBBABid.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "amr_fleet_msgs/msg/detail/cbba_bid__functions.h"
#include "amr_fleet_msgs/msg/detail/cbba_bid__struct.hpp"
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

void CBBABid_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) amr_fleet_msgs::msg::CBBABid(_init);
}

void CBBABid_fini_function(void * message_memory)
{
  auto typed_message = static_cast<amr_fleet_msgs::msg::CBBABid *>(message_memory);
  typed_message->~CBBABid();
}

size_t size_function__CBBABid__task_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CBBABid__task_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__CBBABid__task_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__CBBABid__task_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__CBBABid__task_ids(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__CBBABid__task_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__CBBABid__task_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__CBBABid__task_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CBBABid__winning_bids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CBBABid__winning_bids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__CBBABid__winning_bids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__CBBABid__winning_bids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__CBBABid__winning_bids(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__CBBABid__winning_bids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__CBBABid__winning_bids(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__CBBABid__winning_bids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CBBABid__winning_robots(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CBBABid__winning_robots(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__CBBABid__winning_robots(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__CBBABid__winning_robots(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__CBBABid__winning_robots(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__CBBABid__winning_robots(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__CBBABid__winning_robots(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__CBBABid__winning_robots(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CBBABid__timestamps(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CBBABid__timestamps(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__CBBABid__timestamps(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__CBBABid__timestamps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__CBBABid__timestamps(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__CBBABid__timestamps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__CBBABid__timestamps(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__CBBABid__timestamps(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CBBABid_message_member_array[7] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs::msg::CBBABid, header),  // bytes offset in struct
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
    offsetof(amr_fleet_msgs::msg::CBBABid, robot_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "iteration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs::msg::CBBABid, iteration),  // bytes offset in struct
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
    offsetof(amr_fleet_msgs::msg::CBBABid, task_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__CBBABid__task_ids,  // size() function pointer
    get_const_function__CBBABid__task_ids,  // get_const(index) function pointer
    get_function__CBBABid__task_ids,  // get(index) function pointer
    fetch_function__CBBABid__task_ids,  // fetch(index, &value) function pointer
    assign_function__CBBABid__task_ids,  // assign(index, value) function pointer
    resize_function__CBBABid__task_ids  // resize(index) function pointer
  },
  {
    "winning_bids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs::msg::CBBABid, winning_bids),  // bytes offset in struct
    nullptr,  // default value
    size_function__CBBABid__winning_bids,  // size() function pointer
    get_const_function__CBBABid__winning_bids,  // get_const(index) function pointer
    get_function__CBBABid__winning_bids,  // get(index) function pointer
    fetch_function__CBBABid__winning_bids,  // fetch(index, &value) function pointer
    assign_function__CBBABid__winning_bids,  // assign(index, value) function pointer
    resize_function__CBBABid__winning_bids  // resize(index) function pointer
  },
  {
    "winning_robots",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs::msg::CBBABid, winning_robots),  // bytes offset in struct
    nullptr,  // default value
    size_function__CBBABid__winning_robots,  // size() function pointer
    get_const_function__CBBABid__winning_robots,  // get_const(index) function pointer
    get_function__CBBABid__winning_robots,  // get(index) function pointer
    fetch_function__CBBABid__winning_robots,  // fetch(index, &value) function pointer
    assign_function__CBBABid__winning_robots,  // assign(index, value) function pointer
    resize_function__CBBABid__winning_robots  // resize(index) function pointer
  },
  {
    "timestamps",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_fleet_msgs::msg::CBBABid, timestamps),  // bytes offset in struct
    nullptr,  // default value
    size_function__CBBABid__timestamps,  // size() function pointer
    get_const_function__CBBABid__timestamps,  // get_const(index) function pointer
    get_function__CBBABid__timestamps,  // get(index) function pointer
    fetch_function__CBBABid__timestamps,  // fetch(index, &value) function pointer
    assign_function__CBBABid__timestamps,  // assign(index, value) function pointer
    resize_function__CBBABid__timestamps  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CBBABid_message_members = {
  "amr_fleet_msgs::msg",  // message namespace
  "CBBABid",  // message name
  7,  // number of fields
  sizeof(amr_fleet_msgs::msg::CBBABid),
  false,  // has_any_key_member_
  CBBABid_message_member_array,  // message members
  CBBABid_init_function,  // function to initialize message memory (memory has to be allocated)
  CBBABid_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CBBABid_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CBBABid_message_members,
  get_message_typesupport_handle_function,
  &amr_fleet_msgs__msg__CBBABid__get_type_hash,
  &amr_fleet_msgs__msg__CBBABid__get_type_description,
  &amr_fleet_msgs__msg__CBBABid__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace amr_fleet_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<amr_fleet_msgs::msg::CBBABid>()
{
  return &::amr_fleet_msgs::msg::rosidl_typesupport_introspection_cpp::CBBABid_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, amr_fleet_msgs, msg, CBBABid)() {
  return &::amr_fleet_msgs::msg::rosidl_typesupport_introspection_cpp::CBBABid_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
