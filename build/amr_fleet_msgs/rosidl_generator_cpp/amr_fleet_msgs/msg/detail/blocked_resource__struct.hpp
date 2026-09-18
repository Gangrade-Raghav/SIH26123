// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from amr_fleet_msgs:msg/BlockedResource.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/blocked_resource.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__BLOCKED_RESOURCE__STRUCT_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__BLOCKED_RESOURCE__STRUCT_HPP_

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
# define DEPRECATED__amr_fleet_msgs__msg__BlockedResource __attribute__((deprecated))
#else
# define DEPRECATED__amr_fleet_msgs__msg__BlockedResource __declspec(deprecated)
#endif

namespace amr_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BlockedResource_
{
  using Type = BlockedResource_<ContainerAllocator>;

  explicit BlockedResource_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->waiting_for_robot_id = "";
      this->resource_x = 0l;
      this->resource_y = 0l;
      this->resource_t = 0l;
      this->epoch = 0ull;
    }
  }

  explicit BlockedResource_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    robot_id(_alloc),
    waiting_for_robot_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->waiting_for_robot_id = "";
      this->resource_x = 0l;
      this->resource_y = 0l;
      this->resource_t = 0l;
      this->epoch = 0ull;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _robot_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_id_type robot_id;
  using _waiting_for_robot_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _waiting_for_robot_id_type waiting_for_robot_id;
  using _resource_x_type =
    int32_t;
  _resource_x_type resource_x;
  using _resource_y_type =
    int32_t;
  _resource_y_type resource_y;
  using _resource_t_type =
    int32_t;
  _resource_t_type resource_t;
  using _epoch_type =
    uint64_t;
  _epoch_type epoch;

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
  Type & set__waiting_for_robot_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->waiting_for_robot_id = _arg;
    return *this;
  }
  Type & set__resource_x(
    const int32_t & _arg)
  {
    this->resource_x = _arg;
    return *this;
  }
  Type & set__resource_y(
    const int32_t & _arg)
  {
    this->resource_y = _arg;
    return *this;
  }
  Type & set__resource_t(
    const int32_t & _arg)
  {
    this->resource_t = _arg;
    return *this;
  }
  Type & set__epoch(
    const uint64_t & _arg)
  {
    this->epoch = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    amr_fleet_msgs::msg::BlockedResource_<ContainerAllocator> *;
  using ConstRawPtr =
    const amr_fleet_msgs::msg::BlockedResource_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::BlockedResource_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::BlockedResource_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::BlockedResource_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::BlockedResource_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::BlockedResource_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::BlockedResource_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::BlockedResource_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::BlockedResource_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amr_fleet_msgs__msg__BlockedResource
    std::shared_ptr<amr_fleet_msgs::msg::BlockedResource_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amr_fleet_msgs__msg__BlockedResource
    std::shared_ptr<amr_fleet_msgs::msg::BlockedResource_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BlockedResource_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->waiting_for_robot_id != other.waiting_for_robot_id) {
      return false;
    }
    if (this->resource_x != other.resource_x) {
      return false;
    }
    if (this->resource_y != other.resource_y) {
      return false;
    }
    if (this->resource_t != other.resource_t) {
      return false;
    }
    if (this->epoch != other.epoch) {
      return false;
    }
    return true;
  }
  bool operator!=(const BlockedResource_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BlockedResource_

// alias to use template instance with default allocator
using BlockedResource =
  amr_fleet_msgs::msg::BlockedResource_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__BLOCKED_RESOURCE__STRUCT_HPP_
