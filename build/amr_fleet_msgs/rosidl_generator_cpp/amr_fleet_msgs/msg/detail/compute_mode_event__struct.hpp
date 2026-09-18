// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from amr_fleet_msgs:msg/ComputeModeEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/compute_mode_event.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__COMPUTE_MODE_EVENT__STRUCT_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__COMPUTE_MODE_EVENT__STRUCT_HPP_

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
# define DEPRECATED__amr_fleet_msgs__msg__ComputeModeEvent __attribute__((deprecated))
#else
# define DEPRECATED__amr_fleet_msgs__msg__ComputeModeEvent __declspec(deprecated)
#endif

namespace amr_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ComputeModeEvent_
{
  using Type = ComputeModeEvent_<ContainerAllocator>;

  explicit ComputeModeEvent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->previous_mode = "";
      this->current_mode = "";
      this->trigger_signal = "";
      this->trigger_value = 0.0;
      this->threshold_value = 0.0;
      this->reason = "";
      this->dwell_time_sec = 0.0;
    }
  }

  explicit ComputeModeEvent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    robot_id(_alloc),
    previous_mode(_alloc),
    current_mode(_alloc),
    trigger_signal(_alloc),
    reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->previous_mode = "";
      this->current_mode = "";
      this->trigger_signal = "";
      this->trigger_value = 0.0;
      this->threshold_value = 0.0;
      this->reason = "";
      this->dwell_time_sec = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _robot_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_id_type robot_id;
  using _previous_mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _previous_mode_type previous_mode;
  using _current_mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_mode_type current_mode;
  using _trigger_signal_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _trigger_signal_type trigger_signal;
  using _trigger_value_type =
    double;
  _trigger_value_type trigger_value;
  using _threshold_value_type =
    double;
  _threshold_value_type threshold_value;
  using _reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reason_type reason;
  using _dwell_time_sec_type =
    double;
  _dwell_time_sec_type dwell_time_sec;

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
  Type & set__previous_mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->previous_mode = _arg;
    return *this;
  }
  Type & set__current_mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_mode = _arg;
    return *this;
  }
  Type & set__trigger_signal(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->trigger_signal = _arg;
    return *this;
  }
  Type & set__trigger_value(
    const double & _arg)
  {
    this->trigger_value = _arg;
    return *this;
  }
  Type & set__threshold_value(
    const double & _arg)
  {
    this->threshold_value = _arg;
    return *this;
  }
  Type & set__reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->reason = _arg;
    return *this;
  }
  Type & set__dwell_time_sec(
    const double & _arg)
  {
    this->dwell_time_sec = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    amr_fleet_msgs::msg::ComputeModeEvent_<ContainerAllocator> *;
  using ConstRawPtr =
    const amr_fleet_msgs::msg::ComputeModeEvent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::ComputeModeEvent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::ComputeModeEvent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::ComputeModeEvent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::ComputeModeEvent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::ComputeModeEvent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::ComputeModeEvent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::ComputeModeEvent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::ComputeModeEvent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amr_fleet_msgs__msg__ComputeModeEvent
    std::shared_ptr<amr_fleet_msgs::msg::ComputeModeEvent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amr_fleet_msgs__msg__ComputeModeEvent
    std::shared_ptr<amr_fleet_msgs::msg::ComputeModeEvent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputeModeEvent_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->previous_mode != other.previous_mode) {
      return false;
    }
    if (this->current_mode != other.current_mode) {
      return false;
    }
    if (this->trigger_signal != other.trigger_signal) {
      return false;
    }
    if (this->trigger_value != other.trigger_value) {
      return false;
    }
    if (this->threshold_value != other.threshold_value) {
      return false;
    }
    if (this->reason != other.reason) {
      return false;
    }
    if (this->dwell_time_sec != other.dwell_time_sec) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputeModeEvent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputeModeEvent_

// alias to use template instance with default allocator
using ComputeModeEvent =
  amr_fleet_msgs::msg::ComputeModeEvent_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__COMPUTE_MODE_EVENT__STRUCT_HPP_
