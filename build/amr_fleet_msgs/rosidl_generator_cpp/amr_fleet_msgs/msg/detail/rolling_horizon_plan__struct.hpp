// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from amr_fleet_msgs:msg/RollingHorizonPlan.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/rolling_horizon_plan.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__ROLLING_HORIZON_PLAN__STRUCT_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__ROLLING_HORIZON_PLAN__STRUCT_HPP_

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
// Member 'current_goal'
// Member 'horizon_path'
// Member 'execution_path'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__amr_fleet_msgs__msg__RollingHorizonPlan __attribute__((deprecated))
#else
# define DEPRECATED__amr_fleet_msgs__msg__RollingHorizonPlan __declspec(deprecated)
#endif

namespace amr_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RollingHorizonPlan_
{
  using Type = RollingHorizonPlan_<ContainerAllocator>;

  explicit RollingHorizonPlan_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    current_goal(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->current_task_id = "";
      this->current_phase = "";
      this->horizon_steps = 0ul;
      this->execution_window = 0ul;
      this->replan_count = 0ul;
      this->planning_latency_ms = 0.0;
      this->is_valid = false;
    }
  }

  explicit RollingHorizonPlan_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    robot_id(_alloc),
    current_task_id(_alloc),
    current_phase(_alloc),
    current_goal(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->current_task_id = "";
      this->current_phase = "";
      this->horizon_steps = 0ul;
      this->execution_window = 0ul;
      this->replan_count = 0ul;
      this->planning_latency_ms = 0.0;
      this->is_valid = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _robot_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_id_type robot_id;
  using _assigned_bundle_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _assigned_bundle_type assigned_bundle;
  using _current_task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_task_id_type current_task_id;
  using _current_phase_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_phase_type current_phase;
  using _current_goal_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _current_goal_type current_goal;
  using _horizon_path_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _horizon_path_type horizon_path;
  using _execution_path_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _execution_path_type execution_path;
  using _horizon_steps_type =
    uint32_t;
  _horizon_steps_type horizon_steps;
  using _execution_window_type =
    uint32_t;
  _execution_window_type execution_window;
  using _replan_count_type =
    uint32_t;
  _replan_count_type replan_count;
  using _planning_latency_ms_type =
    double;
  _planning_latency_ms_type planning_latency_ms;
  using _is_valid_type =
    bool;
  _is_valid_type is_valid;

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
  Type & set__assigned_bundle(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->assigned_bundle = _arg;
    return *this;
  }
  Type & set__current_task_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_task_id = _arg;
    return *this;
  }
  Type & set__current_phase(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_phase = _arg;
    return *this;
  }
  Type & set__current_goal(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->current_goal = _arg;
    return *this;
  }
  Type & set__horizon_path(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->horizon_path = _arg;
    return *this;
  }
  Type & set__execution_path(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->execution_path = _arg;
    return *this;
  }
  Type & set__horizon_steps(
    const uint32_t & _arg)
  {
    this->horizon_steps = _arg;
    return *this;
  }
  Type & set__execution_window(
    const uint32_t & _arg)
  {
    this->execution_window = _arg;
    return *this;
  }
  Type & set__replan_count(
    const uint32_t & _arg)
  {
    this->replan_count = _arg;
    return *this;
  }
  Type & set__planning_latency_ms(
    const double & _arg)
  {
    this->planning_latency_ms = _arg;
    return *this;
  }
  Type & set__is_valid(
    const bool & _arg)
  {
    this->is_valid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    amr_fleet_msgs::msg::RollingHorizonPlan_<ContainerAllocator> *;
  using ConstRawPtr =
    const amr_fleet_msgs::msg::RollingHorizonPlan_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::RollingHorizonPlan_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::RollingHorizonPlan_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::RollingHorizonPlan_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::RollingHorizonPlan_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::RollingHorizonPlan_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::RollingHorizonPlan_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::RollingHorizonPlan_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::RollingHorizonPlan_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amr_fleet_msgs__msg__RollingHorizonPlan
    std::shared_ptr<amr_fleet_msgs::msg::RollingHorizonPlan_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amr_fleet_msgs__msg__RollingHorizonPlan
    std::shared_ptr<amr_fleet_msgs::msg::RollingHorizonPlan_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RollingHorizonPlan_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->assigned_bundle != other.assigned_bundle) {
      return false;
    }
    if (this->current_task_id != other.current_task_id) {
      return false;
    }
    if (this->current_phase != other.current_phase) {
      return false;
    }
    if (this->current_goal != other.current_goal) {
      return false;
    }
    if (this->horizon_path != other.horizon_path) {
      return false;
    }
    if (this->execution_path != other.execution_path) {
      return false;
    }
    if (this->horizon_steps != other.horizon_steps) {
      return false;
    }
    if (this->execution_window != other.execution_window) {
      return false;
    }
    if (this->replan_count != other.replan_count) {
      return false;
    }
    if (this->planning_latency_ms != other.planning_latency_ms) {
      return false;
    }
    if (this->is_valid != other.is_valid) {
      return false;
    }
    return true;
  }
  bool operator!=(const RollingHorizonPlan_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RollingHorizonPlan_

// alias to use template instance with default allocator
using RollingHorizonPlan =
  amr_fleet_msgs::msg::RollingHorizonPlan_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__ROLLING_HORIZON_PLAN__STRUCT_HPP_
