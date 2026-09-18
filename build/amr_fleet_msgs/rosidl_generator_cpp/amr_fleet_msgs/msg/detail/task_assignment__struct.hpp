// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from amr_fleet_msgs:msg/TaskAssignment.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/task_assignment.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__TASK_ASSIGNMENT__STRUCT_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__TASK_ASSIGNMENT__STRUCT_HPP_

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
# define DEPRECATED__amr_fleet_msgs__msg__TaskAssignment __attribute__((deprecated))
#else
# define DEPRECATED__amr_fleet_msgs__msg__TaskAssignment __declspec(deprecated)
#endif

namespace amr_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TaskAssignment_
{
  using Type = TaskAssignment_<ContainerAllocator>;

  explicit TaskAssignment_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = "";
      this->assigned_robot_id = "";
      this->allocation_epoch = 0ull;
      this->confirmed = false;
    }
  }

  explicit TaskAssignment_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    task_id(_alloc),
    assigned_robot_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = "";
      this->assigned_robot_id = "";
      this->allocation_epoch = 0ull;
      this->confirmed = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_id_type task_id;
  using _assigned_robot_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _assigned_robot_id_type assigned_robot_id;
  using _allocation_epoch_type =
    uint64_t;
  _allocation_epoch_type allocation_epoch;
  using _confirmed_type =
    bool;
  _confirmed_type confirmed;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__task_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_id = _arg;
    return *this;
  }
  Type & set__assigned_robot_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->assigned_robot_id = _arg;
    return *this;
  }
  Type & set__allocation_epoch(
    const uint64_t & _arg)
  {
    this->allocation_epoch = _arg;
    return *this;
  }
  Type & set__confirmed(
    const bool & _arg)
  {
    this->confirmed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    amr_fleet_msgs::msg::TaskAssignment_<ContainerAllocator> *;
  using ConstRawPtr =
    const amr_fleet_msgs::msg::TaskAssignment_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::TaskAssignment_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::TaskAssignment_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::TaskAssignment_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::TaskAssignment_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::TaskAssignment_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::TaskAssignment_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::TaskAssignment_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::TaskAssignment_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amr_fleet_msgs__msg__TaskAssignment
    std::shared_ptr<amr_fleet_msgs::msg::TaskAssignment_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amr_fleet_msgs__msg__TaskAssignment
    std::shared_ptr<amr_fleet_msgs::msg::TaskAssignment_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskAssignment_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->assigned_robot_id != other.assigned_robot_id) {
      return false;
    }
    if (this->allocation_epoch != other.allocation_epoch) {
      return false;
    }
    if (this->confirmed != other.confirmed) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskAssignment_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskAssignment_

// alias to use template instance with default allocator
using TaskAssignment =
  amr_fleet_msgs::msg::TaskAssignment_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__TASK_ASSIGNMENT__STRUCT_HPP_
