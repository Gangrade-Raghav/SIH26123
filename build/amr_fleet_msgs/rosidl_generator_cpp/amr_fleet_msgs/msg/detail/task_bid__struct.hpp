// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from amr_fleet_msgs:msg/TaskBid.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/task_bid.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__TASK_BID__STRUCT_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__TASK_BID__STRUCT_HPP_

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
# define DEPRECATED__amr_fleet_msgs__msg__TaskBid __attribute__((deprecated))
#else
# define DEPRECATED__amr_fleet_msgs__msg__TaskBid __declspec(deprecated)
#endif

namespace amr_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TaskBid_
{
  using Type = TaskBid_<ContainerAllocator>;

  explicit TaskBid_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->task_id = "";
      this->bid_value = 0.0;
      this->path_cost = 0.0;
      this->allocation_epoch = 0ull;
    }
  }

  explicit TaskBid_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    robot_id(_alloc),
    task_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->task_id = "";
      this->bid_value = 0.0;
      this->path_cost = 0.0;
      this->allocation_epoch = 0ull;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _robot_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_id_type robot_id;
  using _task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_id_type task_id;
  using _bid_value_type =
    double;
  _bid_value_type bid_value;
  using _path_cost_type =
    double;
  _path_cost_type path_cost;
  using _allocation_epoch_type =
    uint64_t;
  _allocation_epoch_type allocation_epoch;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__robot_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__task_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_id = _arg;
    return *this;
  }
  Type & set__bid_value(
    const double & _arg)
  {
    this->bid_value = _arg;
    return *this;
  }
  Type & set__path_cost(
    const double & _arg)
  {
    this->path_cost = _arg;
    return *this;
  }
  Type & set__allocation_epoch(
    const uint64_t & _arg)
  {
    this->allocation_epoch = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    amr_fleet_msgs::msg::TaskBid_<ContainerAllocator> *;
  using ConstRawPtr =
    const amr_fleet_msgs::msg::TaskBid_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::TaskBid_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::TaskBid_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::TaskBid_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::TaskBid_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::TaskBid_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::TaskBid_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::TaskBid_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::TaskBid_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amr_fleet_msgs__msg__TaskBid
    std::shared_ptr<amr_fleet_msgs::msg::TaskBid_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amr_fleet_msgs__msg__TaskBid
    std::shared_ptr<amr_fleet_msgs::msg::TaskBid_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskBid_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->bid_value != other.bid_value) {
      return false;
    }
    if (this->path_cost != other.path_cost) {
      return false;
    }
    if (this->allocation_epoch != other.allocation_epoch) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskBid_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskBid_

// alias to use template instance with default allocator
using TaskBid =
  amr_fleet_msgs::msg::TaskBid_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__TASK_BID__STRUCT_HPP_
