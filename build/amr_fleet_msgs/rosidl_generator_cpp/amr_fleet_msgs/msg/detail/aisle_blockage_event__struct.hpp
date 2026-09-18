// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from amr_fleet_msgs:msg/AisleBlockageEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/aisle_blockage_event.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__AISLE_BLOCKAGE_EVENT__STRUCT_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__AISLE_BLOCKAGE_EVENT__STRUCT_HPP_

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
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__amr_fleet_msgs__msg__AisleBlockageEvent __attribute__((deprecated))
#else
# define DEPRECATED__amr_fleet_msgs__msg__AisleBlockageEvent __declspec(deprecated)
#endif

namespace amr_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AisleBlockageEvent_
{
  using Type = AisleBlockageEvent_<ContainerAllocator>;

  explicit AisleBlockageEvent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->blockage_id = "";
      this->is_blocked = false;
      this->min_x = 0.0;
      this->max_x = 0.0;
      this->min_y = 0.0;
      this->max_y = 0.0;
    }
  }

  explicit AisleBlockageEvent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    blockage_id(_alloc),
    timestamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->blockage_id = "";
      this->is_blocked = false;
      this->min_x = 0.0;
      this->max_x = 0.0;
      this->min_y = 0.0;
      this->max_y = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _blockage_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _blockage_id_type blockage_id;
  using _is_blocked_type =
    bool;
  _is_blocked_type is_blocked;
  using _min_x_type =
    double;
  _min_x_type min_x;
  using _max_x_type =
    double;
  _max_x_type max_x;
  using _min_y_type =
    double;
  _min_y_type min_y;
  using _max_y_type =
    double;
  _max_y_type max_y;
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__blockage_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->blockage_id = _arg;
    return *this;
  }
  Type & set__is_blocked(
    const bool & _arg)
  {
    this->is_blocked = _arg;
    return *this;
  }
  Type & set__min_x(
    const double & _arg)
  {
    this->min_x = _arg;
    return *this;
  }
  Type & set__max_x(
    const double & _arg)
  {
    this->max_x = _arg;
    return *this;
  }
  Type & set__min_y(
    const double & _arg)
  {
    this->min_y = _arg;
    return *this;
  }
  Type & set__max_y(
    const double & _arg)
  {
    this->max_y = _arg;
    return *this;
  }
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    amr_fleet_msgs::msg::AisleBlockageEvent_<ContainerAllocator> *;
  using ConstRawPtr =
    const amr_fleet_msgs::msg::AisleBlockageEvent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::AisleBlockageEvent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::AisleBlockageEvent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::AisleBlockageEvent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::AisleBlockageEvent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::AisleBlockageEvent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::AisleBlockageEvent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::AisleBlockageEvent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::AisleBlockageEvent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amr_fleet_msgs__msg__AisleBlockageEvent
    std::shared_ptr<amr_fleet_msgs::msg::AisleBlockageEvent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amr_fleet_msgs__msg__AisleBlockageEvent
    std::shared_ptr<amr_fleet_msgs::msg::AisleBlockageEvent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AisleBlockageEvent_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->blockage_id != other.blockage_id) {
      return false;
    }
    if (this->is_blocked != other.is_blocked) {
      return false;
    }
    if (this->min_x != other.min_x) {
      return false;
    }
    if (this->max_x != other.max_x) {
      return false;
    }
    if (this->min_y != other.min_y) {
      return false;
    }
    if (this->max_y != other.max_y) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const AisleBlockageEvent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AisleBlockageEvent_

// alias to use template instance with default allocator
using AisleBlockageEvent =
  amr_fleet_msgs::msg::AisleBlockageEvent_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__AISLE_BLOCKAGE_EVENT__STRUCT_HPP_
