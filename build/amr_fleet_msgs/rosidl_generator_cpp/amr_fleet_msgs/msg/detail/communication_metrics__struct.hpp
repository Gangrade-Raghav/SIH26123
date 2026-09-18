// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from amr_fleet_msgs:msg/CommunicationMetrics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/communication_metrics.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__COMMUNICATION_METRICS__STRUCT_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__COMMUNICATION_METRICS__STRUCT_HPP_

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
# define DEPRECATED__amr_fleet_msgs__msg__CommunicationMetrics __attribute__((deprecated))
#else
# define DEPRECATED__amr_fleet_msgs__msg__CommunicationMetrics __declspec(deprecated)
#endif

namespace amr_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CommunicationMetrics_
{
  using Type = CommunicationMetrics_<ContainerAllocator>;

  explicit CommunicationMetrics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->profile_name = "";
      this->messages_sent = 0ull;
      this->messages_delivered = 0ull;
      this->messages_dropped = 0ull;
      this->packet_loss_rate = 0.0;
      this->avg_latency_ms = 0.0;
      this->p95_latency_ms = 0.0;
      this->jitter_ms = 0.0;
      this->burst_events_count = 0ul;
      this->outage_active = false;
      this->stale_messages_count = 0ul;
      this->expired_reservations_count = 0ul;
      this->min_distance_m = 0.0;
      this->collision_count = 0ul;
      this->safety_interventions = 0ul;
    }
  }

  explicit CommunicationMetrics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    profile_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->profile_name = "";
      this->messages_sent = 0ull;
      this->messages_delivered = 0ull;
      this->messages_dropped = 0ull;
      this->packet_loss_rate = 0.0;
      this->avg_latency_ms = 0.0;
      this->p95_latency_ms = 0.0;
      this->jitter_ms = 0.0;
      this->burst_events_count = 0ul;
      this->outage_active = false;
      this->stale_messages_count = 0ul;
      this->expired_reservations_count = 0ul;
      this->min_distance_m = 0.0;
      this->collision_count = 0ul;
      this->safety_interventions = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _profile_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _profile_name_type profile_name;
  using _messages_sent_type =
    uint64_t;
  _messages_sent_type messages_sent;
  using _messages_delivered_type =
    uint64_t;
  _messages_delivered_type messages_delivered;
  using _messages_dropped_type =
    uint64_t;
  _messages_dropped_type messages_dropped;
  using _packet_loss_rate_type =
    double;
  _packet_loss_rate_type packet_loss_rate;
  using _avg_latency_ms_type =
    double;
  _avg_latency_ms_type avg_latency_ms;
  using _p95_latency_ms_type =
    double;
  _p95_latency_ms_type p95_latency_ms;
  using _jitter_ms_type =
    double;
  _jitter_ms_type jitter_ms;
  using _burst_events_count_type =
    uint32_t;
  _burst_events_count_type burst_events_count;
  using _outage_active_type =
    bool;
  _outage_active_type outage_active;
  using _stale_messages_count_type =
    uint32_t;
  _stale_messages_count_type stale_messages_count;
  using _expired_reservations_count_type =
    uint32_t;
  _expired_reservations_count_type expired_reservations_count;
  using _min_distance_m_type =
    double;
  _min_distance_m_type min_distance_m;
  using _collision_count_type =
    uint32_t;
  _collision_count_type collision_count;
  using _safety_interventions_type =
    uint32_t;
  _safety_interventions_type safety_interventions;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__profile_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->profile_name = _arg;
    return *this;
  }
  Type & set__messages_sent(
    const uint64_t & _arg)
  {
    this->messages_sent = _arg;
    return *this;
  }
  Type & set__messages_delivered(
    const uint64_t & _arg)
  {
    this->messages_delivered = _arg;
    return *this;
  }
  Type & set__messages_dropped(
    const uint64_t & _arg)
  {
    this->messages_dropped = _arg;
    return *this;
  }
  Type & set__packet_loss_rate(
    const double & _arg)
  {
    this->packet_loss_rate = _arg;
    return *this;
  }
  Type & set__avg_latency_ms(
    const double & _arg)
  {
    this->avg_latency_ms = _arg;
    return *this;
  }
  Type & set__p95_latency_ms(
    const double & _arg)
  {
    this->p95_latency_ms = _arg;
    return *this;
  }
  Type & set__jitter_ms(
    const double & _arg)
  {
    this->jitter_ms = _arg;
    return *this;
  }
  Type & set__burst_events_count(
    const uint32_t & _arg)
  {
    this->burst_events_count = _arg;
    return *this;
  }
  Type & set__outage_active(
    const bool & _arg)
  {
    this->outage_active = _arg;
    return *this;
  }
  Type & set__stale_messages_count(
    const uint32_t & _arg)
  {
    this->stale_messages_count = _arg;
    return *this;
  }
  Type & set__expired_reservations_count(
    const uint32_t & _arg)
  {
    this->expired_reservations_count = _arg;
    return *this;
  }
  Type & set__min_distance_m(
    const double & _arg)
  {
    this->min_distance_m = _arg;
    return *this;
  }
  Type & set__collision_count(
    const uint32_t & _arg)
  {
    this->collision_count = _arg;
    return *this;
  }
  Type & set__safety_interventions(
    const uint32_t & _arg)
  {
    this->safety_interventions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    amr_fleet_msgs::msg::CommunicationMetrics_<ContainerAllocator> *;
  using ConstRawPtr =
    const amr_fleet_msgs::msg::CommunicationMetrics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::CommunicationMetrics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::CommunicationMetrics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::CommunicationMetrics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::CommunicationMetrics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::CommunicationMetrics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::CommunicationMetrics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::CommunicationMetrics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::CommunicationMetrics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amr_fleet_msgs__msg__CommunicationMetrics
    std::shared_ptr<amr_fleet_msgs::msg::CommunicationMetrics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amr_fleet_msgs__msg__CommunicationMetrics
    std::shared_ptr<amr_fleet_msgs::msg::CommunicationMetrics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CommunicationMetrics_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->profile_name != other.profile_name) {
      return false;
    }
    if (this->messages_sent != other.messages_sent) {
      return false;
    }
    if (this->messages_delivered != other.messages_delivered) {
      return false;
    }
    if (this->messages_dropped != other.messages_dropped) {
      return false;
    }
    if (this->packet_loss_rate != other.packet_loss_rate) {
      return false;
    }
    if (this->avg_latency_ms != other.avg_latency_ms) {
      return false;
    }
    if (this->p95_latency_ms != other.p95_latency_ms) {
      return false;
    }
    if (this->jitter_ms != other.jitter_ms) {
      return false;
    }
    if (this->burst_events_count != other.burst_events_count) {
      return false;
    }
    if (this->outage_active != other.outage_active) {
      return false;
    }
    if (this->stale_messages_count != other.stale_messages_count) {
      return false;
    }
    if (this->expired_reservations_count != other.expired_reservations_count) {
      return false;
    }
    if (this->min_distance_m != other.min_distance_m) {
      return false;
    }
    if (this->collision_count != other.collision_count) {
      return false;
    }
    if (this->safety_interventions != other.safety_interventions) {
      return false;
    }
    return true;
  }
  bool operator!=(const CommunicationMetrics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CommunicationMetrics_

// alias to use template instance with default allocator
using CommunicationMetrics =
  amr_fleet_msgs::msg::CommunicationMetrics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__COMMUNICATION_METRICS__STRUCT_HPP_
