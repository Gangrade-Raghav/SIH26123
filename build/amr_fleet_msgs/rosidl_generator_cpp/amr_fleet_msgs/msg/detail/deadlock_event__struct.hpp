// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from amr_fleet_msgs:msg/DeadlockEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/deadlock_event.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__DEADLOCK_EVENT__STRUCT_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__DEADLOCK_EVENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__amr_fleet_msgs__msg__DeadlockEvent __attribute__((deprecated))
#else
# define DEPRECATED__amr_fleet_msgs__msg__DeadlockEvent __declspec(deprecated)
#endif

namespace amr_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DeadlockEvent_
{
  using Type = DeadlockEvent_<ContainerAllocator>;

  explicit DeadlockEvent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->root_cause = "";
      this->persistence_duration_sec = 0.0;
      this->recovery_action = "";
      this->recovery_success = false;
      this->recovery_duration_sec = 0.0;
    }
  }

  explicit DeadlockEvent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    root_cause(_alloc),
    recovery_action(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->root_cause = "";
      this->persistence_duration_sec = 0.0;
      this->recovery_action = "";
      this->recovery_success = false;
      this->recovery_duration_sec = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _cycle_robot_ids_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _cycle_robot_ids_type cycle_robot_ids;
  using _root_cause_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _root_cause_type root_cause;
  using _persistence_duration_sec_type =
    double;
  _persistence_duration_sec_type persistence_duration_sec;
  using _recovery_action_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _recovery_action_type recovery_action;
  using _recovery_success_type =
    bool;
  _recovery_success_type recovery_success;
  using _recovery_duration_sec_type =
    double;
  _recovery_duration_sec_type recovery_duration_sec;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__cycle_robot_ids(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->cycle_robot_ids = _arg;
    return *this;
  }
  Type & set__root_cause(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->root_cause = _arg;
    return *this;
  }
  Type & set__persistence_duration_sec(
    const double & _arg)
  {
    this->persistence_duration_sec = _arg;
    return *this;
  }
  Type & set__recovery_action(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->recovery_action = _arg;
    return *this;
  }
  Type & set__recovery_success(
    const bool & _arg)
  {
    this->recovery_success = _arg;
    return *this;
  }
  Type & set__recovery_duration_sec(
    const double & _arg)
  {
    this->recovery_duration_sec = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    amr_fleet_msgs::msg::DeadlockEvent_<ContainerAllocator> *;
  using ConstRawPtr =
    const amr_fleet_msgs::msg::DeadlockEvent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::DeadlockEvent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::DeadlockEvent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::DeadlockEvent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::DeadlockEvent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::DeadlockEvent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::DeadlockEvent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::DeadlockEvent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::DeadlockEvent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amr_fleet_msgs__msg__DeadlockEvent
    std::shared_ptr<amr_fleet_msgs::msg::DeadlockEvent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amr_fleet_msgs__msg__DeadlockEvent
    std::shared_ptr<amr_fleet_msgs::msg::DeadlockEvent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeadlockEvent_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->cycle_robot_ids != other.cycle_robot_ids) {
      return false;
    }
    if (this->root_cause != other.root_cause) {
      return false;
    }
    if (this->persistence_duration_sec != other.persistence_duration_sec) {
      return false;
    }
    if (this->recovery_action != other.recovery_action) {
      return false;
    }
    if (this->recovery_success != other.recovery_success) {
      return false;
    }
    if (this->recovery_duration_sec != other.recovery_duration_sec) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeadlockEvent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeadlockEvent_

// alias to use template instance with default allocator
using DeadlockEvent =
  amr_fleet_msgs::msg::DeadlockEvent_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__DEADLOCK_EVENT__STRUCT_HPP_
