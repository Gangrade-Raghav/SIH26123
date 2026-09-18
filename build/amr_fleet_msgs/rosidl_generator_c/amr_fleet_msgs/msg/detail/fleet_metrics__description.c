// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from amr_fleet_msgs:msg/FleetMetrics.idl
// generated code does not contain a copyright notice

#include "amr_fleet_msgs/msg/detail/fleet_metrics__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
const rosidl_type_hash_t *
amr_fleet_msgs__msg__FleetMetrics__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x95, 0xc4, 0xe9, 0xec, 0x6b, 0x7f, 0x82, 0xef,
      0xb9, 0x37, 0x6d, 0xb1, 0x4b, 0x33, 0x8a, 0xf2,
      0x67, 0xf0, 0x69, 0x12, 0xc2, 0x9e, 0x94, 0xad,
      0x58, 0x13, 0x6c, 0x50, 0xee, 0x2b, 0x2f, 0xcf,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char amr_fleet_msgs__msg__FleetMetrics__TYPE_NAME[] = "amr_fleet_msgs/msg/FleetMetrics";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char amr_fleet_msgs__msg__FleetMetrics__FIELD_NAME__header[] = "header";
static char amr_fleet_msgs__msg__FleetMetrics__FIELD_NAME__active_robots[] = "active_robots";
static char amr_fleet_msgs__msg__FleetMetrics__FIELD_NAME__completed_tasks[] = "completed_tasks";
static char amr_fleet_msgs__msg__FleetMetrics__FIELD_NAME__throughput[] = "throughput";
static char amr_fleet_msgs__msg__FleetMetrics__FIELD_NAME__p50_planning_latency_ms[] = "p50_planning_latency_ms";
static char amr_fleet_msgs__msg__FleetMetrics__FIELD_NAME__p95_planning_latency_ms[] = "p95_planning_latency_ms";
static char amr_fleet_msgs__msg__FleetMetrics__FIELD_NAME__p99_planning_latency_ms[] = "p99_planning_latency_ms";
static char amr_fleet_msgs__msg__FleetMetrics__FIELD_NAME__total_network_bytes[] = "total_network_bytes";
static char amr_fleet_msgs__msg__FleetMetrics__FIELD_NAME__deadlock_count[] = "deadlock_count";

static rosidl_runtime_c__type_description__Field amr_fleet_msgs__msg__FleetMetrics__FIELDS[] = {
  {
    {amr_fleet_msgs__msg__FleetMetrics__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__msg__FleetMetrics__FIELD_NAME__active_robots, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__msg__FleetMetrics__FIELD_NAME__completed_tasks, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__msg__FleetMetrics__FIELD_NAME__throughput, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__msg__FleetMetrics__FIELD_NAME__p50_planning_latency_ms, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__msg__FleetMetrics__FIELD_NAME__p95_planning_latency_ms, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__msg__FleetMetrics__FIELD_NAME__p99_planning_latency_ms, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__msg__FleetMetrics__FIELD_NAME__total_network_bytes, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__msg__FleetMetrics__FIELD_NAME__deadlock_count, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription amr_fleet_msgs__msg__FleetMetrics__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
amr_fleet_msgs__msg__FleetMetrics__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {amr_fleet_msgs__msg__FleetMetrics__TYPE_NAME, 31, 31},
      {amr_fleet_msgs__msg__FleetMetrics__FIELDS, 9, 9},
    },
    {amr_fleet_msgs__msg__FleetMetrics__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "uint32 active_robots\n"
  "uint32 completed_tasks\n"
  "float64 throughput\n"
  "float64 p50_planning_latency_ms\n"
  "float64 p95_planning_latency_ms\n"
  "float64 p99_planning_latency_ms\n"
  "uint64 total_network_bytes\n"
  "uint32 deadlock_count";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
amr_fleet_msgs__msg__FleetMetrics__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {amr_fleet_msgs__msg__FleetMetrics__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 231, 231},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
amr_fleet_msgs__msg__FleetMetrics__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *amr_fleet_msgs__msg__FleetMetrics__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
