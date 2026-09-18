// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from amr_fleet_msgs:msg/FleetMetrics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/fleet_metrics.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__FLEET_METRICS__STRUCT_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__FLEET_METRICS__STRUCT_HPP_

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
# define DEPRECATED__amr_fleet_msgs__msg__FleetMetrics __attribute__((deprecated))
#else
# define DEPRECATED__amr_fleet_msgs__msg__FleetMetrics __declspec(deprecated)
#endif

namespace amr_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FleetMetrics_
{
  using Type = FleetMetrics_<ContainerAllocator>;

  explicit FleetMetrics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->active_robots = 0ul;
      this->completed_tasks = 0ul;
      this->throughput = 0.0;
      this->p50_planning_latency_ms = 0.0;
      this->p95_planning_latency_ms = 0.0;
      this->p99_planning_latency_ms = 0.0;
      this->total_network_bytes = 0ull;
      this->deadlock_count = 0ul;
    }
  }

  explicit FleetMetrics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->active_robots = 0ul;
      this->completed_tasks = 0ul;
      this->throughput = 0.0;
      this->p50_planning_latency_ms = 0.0;
      this->p95_planning_latency_ms = 0.0;
      this->p99_planning_latency_ms = 0.0;
      this->total_network_bytes = 0ull;
      this->deadlock_count = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _active_robots_type =
    uint32_t;
  _active_robots_type active_robots;
  using _completed_tasks_type =
    uint32_t;
  _completed_tasks_type completed_tasks;
  using _throughput_type =
    double;
  _throughput_type throughput;
  using _p50_planning_latency_ms_type =
    double;
  _p50_planning_latency_ms_type p50_planning_latency_ms;
  using _p95_planning_latency_ms_type =
    double;
  _p95_planning_latency_ms_type p95_planning_latency_ms;
  using _p99_planning_latency_ms_type =
    double;
  _p99_planning_latency_ms_type p99_planning_latency_ms;
  using _total_network_bytes_type =
    uint64_t;
  _total_network_bytes_type total_network_bytes;
  using _deadlock_count_type =
    uint32_t;
  _deadlock_count_type deadlock_count;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__active_robots(
    const uint32_t & _arg)
  {
    this->active_robots = _arg;
    return *this;
  }
  Type & set__completed_tasks(
    const uint32_t & _arg)
  {
    this->completed_tasks = _arg;
    return *this;
  }
  Type & set__throughput(
    const double & _arg)
  {
    this->throughput = _arg;
    return *this;
  }
  Type & set__p50_planning_latency_ms(
    const double & _arg)
  {
    this->p50_planning_latency_ms = _arg;
    return *this;
  }
  Type & set__p95_planning_latency_ms(
    const double & _arg)
  {
    this->p95_planning_latency_ms = _arg;
    return *this;
  }
  Type & set__p99_planning_latency_ms(
    const double & _arg)
  {
    this->p99_planning_latency_ms = _arg;
    return *this;
  }
  Type & set__total_network_bytes(
    const uint64_t & _arg)
  {
    this->total_network_bytes = _arg;
    return *this;
  }
  Type & set__deadlock_count(
    const uint32_t & _arg)
  {
    this->deadlock_count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    amr_fleet_msgs::msg::FleetMetrics_<ContainerAllocator> *;
  using ConstRawPtr =
    const amr_fleet_msgs::msg::FleetMetrics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::FleetMetrics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::FleetMetrics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::FleetMetrics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::FleetMetrics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::FleetMetrics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::FleetMetrics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::FleetMetrics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::FleetMetrics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amr_fleet_msgs__msg__FleetMetrics
    std::shared_ptr<amr_fleet_msgs::msg::FleetMetrics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amr_fleet_msgs__msg__FleetMetrics
    std::shared_ptr<amr_fleet_msgs::msg::FleetMetrics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FleetMetrics_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->active_robots != other.active_robots) {
      return false;
    }
    if (this->completed_tasks != other.completed_tasks) {
      return false;
    }
    if (this->throughput != other.throughput) {
      return false;
    }
    if (this->p50_planning_latency_ms != other.p50_planning_latency_ms) {
      return false;
    }
    if (this->p95_planning_latency_ms != other.p95_planning_latency_ms) {
      return false;
    }
    if (this->p99_planning_latency_ms != other.p99_planning_latency_ms) {
      return false;
    }
    if (this->total_network_bytes != other.total_network_bytes) {
      return false;
    }
    if (this->deadlock_count != other.deadlock_count) {
      return false;
    }
    return true;
  }
  bool operator!=(const FleetMetrics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FleetMetrics_

// alias to use template instance with default allocator
using FleetMetrics =
  amr_fleet_msgs::msg::FleetMetrics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__FLEET_METRICS__STRUCT_HPP_
