// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amr_fleet_msgs:msg/CommunicationMetrics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/communication_metrics.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__COMMUNICATION_METRICS__BUILDER_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__COMMUNICATION_METRICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amr_fleet_msgs/msg/detail/communication_metrics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amr_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_CommunicationMetrics_safety_interventions
{
public:
  explicit Init_CommunicationMetrics_safety_interventions(::amr_fleet_msgs::msg::CommunicationMetrics & msg)
  : msg_(msg)
  {}
  ::amr_fleet_msgs::msg::CommunicationMetrics safety_interventions(::amr_fleet_msgs::msg::CommunicationMetrics::_safety_interventions_type arg)
  {
    msg_.safety_interventions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CommunicationMetrics msg_;
};

class Init_CommunicationMetrics_collision_count
{
public:
  explicit Init_CommunicationMetrics_collision_count(::amr_fleet_msgs::msg::CommunicationMetrics & msg)
  : msg_(msg)
  {}
  Init_CommunicationMetrics_safety_interventions collision_count(::amr_fleet_msgs::msg::CommunicationMetrics::_collision_count_type arg)
  {
    msg_.collision_count = std::move(arg);
    return Init_CommunicationMetrics_safety_interventions(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CommunicationMetrics msg_;
};

class Init_CommunicationMetrics_min_distance_m
{
public:
  explicit Init_CommunicationMetrics_min_distance_m(::amr_fleet_msgs::msg::CommunicationMetrics & msg)
  : msg_(msg)
  {}
  Init_CommunicationMetrics_collision_count min_distance_m(::amr_fleet_msgs::msg::CommunicationMetrics::_min_distance_m_type arg)
  {
    msg_.min_distance_m = std::move(arg);
    return Init_CommunicationMetrics_collision_count(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CommunicationMetrics msg_;
};

class Init_CommunicationMetrics_expired_reservations_count
{
public:
  explicit Init_CommunicationMetrics_expired_reservations_count(::amr_fleet_msgs::msg::CommunicationMetrics & msg)
  : msg_(msg)
  {}
  Init_CommunicationMetrics_min_distance_m expired_reservations_count(::amr_fleet_msgs::msg::CommunicationMetrics::_expired_reservations_count_type arg)
  {
    msg_.expired_reservations_count = std::move(arg);
    return Init_CommunicationMetrics_min_distance_m(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CommunicationMetrics msg_;
};

class Init_CommunicationMetrics_stale_messages_count
{
public:
  explicit Init_CommunicationMetrics_stale_messages_count(::amr_fleet_msgs::msg::CommunicationMetrics & msg)
  : msg_(msg)
  {}
  Init_CommunicationMetrics_expired_reservations_count stale_messages_count(::amr_fleet_msgs::msg::CommunicationMetrics::_stale_messages_count_type arg)
  {
    msg_.stale_messages_count = std::move(arg);
    return Init_CommunicationMetrics_expired_reservations_count(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CommunicationMetrics msg_;
};

class Init_CommunicationMetrics_outage_active
{
public:
  explicit Init_CommunicationMetrics_outage_active(::amr_fleet_msgs::msg::CommunicationMetrics & msg)
  : msg_(msg)
  {}
  Init_CommunicationMetrics_stale_messages_count outage_active(::amr_fleet_msgs::msg::CommunicationMetrics::_outage_active_type arg)
  {
    msg_.outage_active = std::move(arg);
    return Init_CommunicationMetrics_stale_messages_count(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CommunicationMetrics msg_;
};

class Init_CommunicationMetrics_burst_events_count
{
public:
  explicit Init_CommunicationMetrics_burst_events_count(::amr_fleet_msgs::msg::CommunicationMetrics & msg)
  : msg_(msg)
  {}
  Init_CommunicationMetrics_outage_active burst_events_count(::amr_fleet_msgs::msg::CommunicationMetrics::_burst_events_count_type arg)
  {
    msg_.burst_events_count = std::move(arg);
    return Init_CommunicationMetrics_outage_active(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CommunicationMetrics msg_;
};

class Init_CommunicationMetrics_jitter_ms
{
public:
  explicit Init_CommunicationMetrics_jitter_ms(::amr_fleet_msgs::msg::CommunicationMetrics & msg)
  : msg_(msg)
  {}
  Init_CommunicationMetrics_burst_events_count jitter_ms(::amr_fleet_msgs::msg::CommunicationMetrics::_jitter_ms_type arg)
  {
    msg_.jitter_ms = std::move(arg);
    return Init_CommunicationMetrics_burst_events_count(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CommunicationMetrics msg_;
};

class Init_CommunicationMetrics_p95_latency_ms
{
public:
  explicit Init_CommunicationMetrics_p95_latency_ms(::amr_fleet_msgs::msg::CommunicationMetrics & msg)
  : msg_(msg)
  {}
  Init_CommunicationMetrics_jitter_ms p95_latency_ms(::amr_fleet_msgs::msg::CommunicationMetrics::_p95_latency_ms_type arg)
  {
    msg_.p95_latency_ms = std::move(arg);
    return Init_CommunicationMetrics_jitter_ms(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CommunicationMetrics msg_;
};

class Init_CommunicationMetrics_avg_latency_ms
{
public:
  explicit Init_CommunicationMetrics_avg_latency_ms(::amr_fleet_msgs::msg::CommunicationMetrics & msg)
  : msg_(msg)
  {}
  Init_CommunicationMetrics_p95_latency_ms avg_latency_ms(::amr_fleet_msgs::msg::CommunicationMetrics::_avg_latency_ms_type arg)
  {
    msg_.avg_latency_ms = std::move(arg);
    return Init_CommunicationMetrics_p95_latency_ms(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CommunicationMetrics msg_;
};

class Init_CommunicationMetrics_packet_loss_rate
{
public:
  explicit Init_CommunicationMetrics_packet_loss_rate(::amr_fleet_msgs::msg::CommunicationMetrics & msg)
  : msg_(msg)
  {}
  Init_CommunicationMetrics_avg_latency_ms packet_loss_rate(::amr_fleet_msgs::msg::CommunicationMetrics::_packet_loss_rate_type arg)
  {
    msg_.packet_loss_rate = std::move(arg);
    return Init_CommunicationMetrics_avg_latency_ms(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CommunicationMetrics msg_;
};

class Init_CommunicationMetrics_messages_dropped
{
public:
  explicit Init_CommunicationMetrics_messages_dropped(::amr_fleet_msgs::msg::CommunicationMetrics & msg)
  : msg_(msg)
  {}
  Init_CommunicationMetrics_packet_loss_rate messages_dropped(::amr_fleet_msgs::msg::CommunicationMetrics::_messages_dropped_type arg)
  {
    msg_.messages_dropped = std::move(arg);
    return Init_CommunicationMetrics_packet_loss_rate(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CommunicationMetrics msg_;
};

class Init_CommunicationMetrics_messages_delivered
{
public:
  explicit Init_CommunicationMetrics_messages_delivered(::amr_fleet_msgs::msg::CommunicationMetrics & msg)
  : msg_(msg)
  {}
  Init_CommunicationMetrics_messages_dropped messages_delivered(::amr_fleet_msgs::msg::CommunicationMetrics::_messages_delivered_type arg)
  {
    msg_.messages_delivered = std::move(arg);
    return Init_CommunicationMetrics_messages_dropped(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CommunicationMetrics msg_;
};

class Init_CommunicationMetrics_messages_sent
{
public:
  explicit Init_CommunicationMetrics_messages_sent(::amr_fleet_msgs::msg::CommunicationMetrics & msg)
  : msg_(msg)
  {}
  Init_CommunicationMetrics_messages_delivered messages_sent(::amr_fleet_msgs::msg::CommunicationMetrics::_messages_sent_type arg)
  {
    msg_.messages_sent = std::move(arg);
    return Init_CommunicationMetrics_messages_delivered(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CommunicationMetrics msg_;
};

class Init_CommunicationMetrics_profile_name
{
public:
  explicit Init_CommunicationMetrics_profile_name(::amr_fleet_msgs::msg::CommunicationMetrics & msg)
  : msg_(msg)
  {}
  Init_CommunicationMetrics_messages_sent profile_name(::amr_fleet_msgs::msg::CommunicationMetrics::_profile_name_type arg)
  {
    msg_.profile_name = std::move(arg);
    return Init_CommunicationMetrics_messages_sent(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CommunicationMetrics msg_;
};

class Init_CommunicationMetrics_header
{
public:
  Init_CommunicationMetrics_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CommunicationMetrics_profile_name header(::amr_fleet_msgs::msg::CommunicationMetrics::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CommunicationMetrics_profile_name(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CommunicationMetrics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_fleet_msgs::msg::CommunicationMetrics>()
{
  return amr_fleet_msgs::msg::builder::Init_CommunicationMetrics_header();
}

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__COMMUNICATION_METRICS__BUILDER_HPP_
