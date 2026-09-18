// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from amr_fleet_msgs:msg/RobotStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/robot_status.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_HPP_

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
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__amr_fleet_msgs__msg__RobotStatus __attribute__((deprecated))
#else
# define DEPRECATED__amr_fleet_msgs__msg__RobotStatus __declspec(deprecated)
#endif

namespace amr_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotStatus_
{
  using Type = RobotStatus_<ContainerAllocator>;

  explicit RobotStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init),
    velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->state = "";
      this->plan_epoch = 0ull;
      this->battery_percentage = 0.0f;
      this->cpu_load = 0.0f;
    }
  }

  explicit RobotStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    robot_id(_alloc),
    pose(_alloc, _init),
    velocity(_alloc, _init),
    state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->state = "";
      this->plan_epoch = 0ull;
      this->battery_percentage = 0.0f;
      this->cpu_load = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _robot_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_id_type robot_id;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _velocity_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _velocity_type velocity;
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;
  using _plan_epoch_type =
    uint64_t;
  _plan_epoch_type plan_epoch;
  using _battery_percentage_type =
    float;
  _battery_percentage_type battery_percentage;
  using _cpu_load_type =
    float;
  _cpu_load_type cpu_load;

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
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__plan_epoch(
    const uint64_t & _arg)
  {
    this->plan_epoch = _arg;
    return *this;
  }
  Type & set__battery_percentage(
    const float & _arg)
  {
    this->battery_percentage = _arg;
    return *this;
  }
  Type & set__cpu_load(
    const float & _arg)
  {
    this->cpu_load = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    amr_fleet_msgs::msg::RobotStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const amr_fleet_msgs::msg::RobotStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::RobotStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::RobotStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::RobotStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::RobotStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::RobotStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::RobotStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::RobotStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::RobotStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amr_fleet_msgs__msg__RobotStatus
    std::shared_ptr<amr_fleet_msgs::msg::RobotStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amr_fleet_msgs__msg__RobotStatus
    std::shared_ptr<amr_fleet_msgs::msg::RobotStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->plan_epoch != other.plan_epoch) {
      return false;
    }
    if (this->battery_percentage != other.battery_percentage) {
      return false;
    }
    if (this->cpu_load != other.cpu_load) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotStatus_

// alias to use template instance with default allocator
using RobotStatus =
  amr_fleet_msgs::msg::RobotStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_HPP_
