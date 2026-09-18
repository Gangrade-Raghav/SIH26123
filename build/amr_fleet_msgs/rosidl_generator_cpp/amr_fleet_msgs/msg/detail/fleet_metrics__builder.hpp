// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amr_fleet_msgs:msg/FleetMetrics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/fleet_metrics.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__FLEET_METRICS__BUILDER_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__FLEET_METRICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amr_fleet_msgs/msg/detail/fleet_metrics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amr_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_FleetMetrics_deadlock_count
{
public:
  explicit Init_FleetMetrics_deadlock_count(::amr_fleet_msgs::msg::FleetMetrics & msg)
  : msg_(msg)
  {}
  ::amr_fleet_msgs::msg::FleetMetrics deadlock_count(::amr_fleet_msgs::msg::FleetMetrics::_deadlock_count_type arg)
  {
    msg_.deadlock_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_fleet_msgs::msg::FleetMetrics msg_;
};

class Init_FleetMetrics_total_network_bytes
{
public:
  explicit Init_FleetMetrics_total_network_bytes(::amr_fleet_msgs::msg::FleetMetrics & msg)
  : msg_(msg)
  {}
  Init_FleetMetrics_deadlock_count total_network_bytes(::amr_fleet_msgs::msg::FleetMetrics::_total_network_bytes_type arg)
  {
    msg_.total_network_bytes = std::move(arg);
    return Init_FleetMetrics_deadlock_count(msg_);
  }

private:
  ::amr_fleet_msgs::msg::FleetMetrics msg_;
};

class Init_FleetMetrics_p99_planning_latency_ms
{
public:
  explicit Init_FleetMetrics_p99_planning_latency_ms(::amr_fleet_msgs::msg::FleetMetrics & msg)
  : msg_(msg)
  {}
  Init_FleetMetrics_total_network_bytes p99_planning_latency_ms(::amr_fleet_msgs::msg::FleetMetrics::_p99_planning_latency_ms_type arg)
  {
    msg_.p99_planning_latency_ms = std::move(arg);
    return Init_FleetMetrics_total_network_bytes(msg_);
  }

private:
  ::amr_fleet_msgs::msg::FleetMetrics msg_;
};

class Init_FleetMetrics_p95_planning_latency_ms
{
public:
  explicit Init_FleetMetrics_p95_planning_latency_ms(::amr_fleet_msgs::msg::FleetMetrics & msg)
  : msg_(msg)
  {}
  Init_FleetMetrics_p99_planning_latency_ms p95_planning_latency_ms(::amr_fleet_msgs::msg::FleetMetrics::_p95_planning_latency_ms_type arg)
  {
    msg_.p95_planning_latency_ms = std::move(arg);
    return Init_FleetMetrics_p99_planning_latency_ms(msg_);
  }

private:
  ::amr_fleet_msgs::msg::FleetMetrics msg_;
};

class Init_FleetMetrics_p50_planning_latency_ms
{
public:
  explicit Init_FleetMetrics_p50_planning_latency_ms(::amr_fleet_msgs::msg::FleetMetrics & msg)
  : msg_(msg)
  {}
  Init_FleetMetrics_p95_planning_latency_ms p50_planning_latency_ms(::amr_fleet_msgs::msg::FleetMetrics::_p50_planning_latency_ms_type arg)
  {
    msg_.p50_planning_latency_ms = std::move(arg);
    return Init_FleetMetrics_p95_planning_latency_ms(msg_);
  }

private:
  ::amr_fleet_msgs::msg::FleetMetrics msg_;
};

class Init_FleetMetrics_throughput
{
public:
  explicit Init_FleetMetrics_throughput(::amr_fleet_msgs::msg::FleetMetrics & msg)
  : msg_(msg)
  {}
  Init_FleetMetrics_p50_planning_latency_ms throughput(::amr_fleet_msgs::msg::FleetMetrics::_throughput_type arg)
  {
    msg_.throughput = std::move(arg);
    return Init_FleetMetrics_p50_planning_latency_ms(msg_);
  }

private:
  ::amr_fleet_msgs::msg::FleetMetrics msg_;
};

class Init_FleetMetrics_completed_tasks
{
public:
  explicit Init_FleetMetrics_completed_tasks(::amr_fleet_msgs::msg::FleetMetrics & msg)
  : msg_(msg)
  {}
  Init_FleetMetrics_throughput completed_tasks(::amr_fleet_msgs::msg::FleetMetrics::_completed_tasks_type arg)
  {
    msg_.completed_tasks = std::move(arg);
    return Init_FleetMetrics_throughput(msg_);
  }

private:
  ::amr_fleet_msgs::msg::FleetMetrics msg_;
};

class Init_FleetMetrics_active_robots
{
public:
  explicit Init_FleetMetrics_active_robots(::amr_fleet_msgs::msg::FleetMetrics & msg)
  : msg_(msg)
  {}
  Init_FleetMetrics_completed_tasks active_robots(::amr_fleet_msgs::msg::FleetMetrics::_active_robots_type arg)
  {
    msg_.active_robots = std::move(arg);
    return Init_FleetMetrics_completed_tasks(msg_);
  }

private:
  ::amr_fleet_msgs::msg::FleetMetrics msg_;
};

class Init_FleetMetrics_header
{
public:
  Init_FleetMetrics_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FleetMetrics_active_robots header(::amr_fleet_msgs::msg::FleetMetrics::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FleetMetrics_active_robots(msg_);
  }

private:
  ::amr_fleet_msgs::msg::FleetMetrics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_fleet_msgs::msg::FleetMetrics>()
{
  return amr_fleet_msgs::msg::builder::Init_FleetMetrics_header();
}

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__FLEET_METRICS__BUILDER_HPP_
