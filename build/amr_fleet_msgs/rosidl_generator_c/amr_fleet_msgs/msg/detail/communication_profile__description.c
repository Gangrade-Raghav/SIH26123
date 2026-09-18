// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from amr_fleet_msgs:msg/CommunicationProfile.idl
// generated code does not contain a copyright notice

#include "amr_fleet_msgs/msg/detail/communication_profile__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
const rosidl_type_hash_t *
amr_fleet_msgs__msg__CommunicationProfile__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x71, 0xef, 0xba, 0xcc, 0x29, 0x83, 0xa6, 0x75,
      0x7c, 0xf1, 0xe9, 0xa4, 0x12, 0xe5, 0x04, 0xfb,
      0xfc, 0x23, 0x29, 0x88, 0xc0, 0x2c, 0x4f, 0x2a,
      0x17, 0x51, 0x36, 0xd5, 0x21, 0xd2, 0x34, 0x5a,
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

static char amr_fleet_msgs__msg__CommunicationProfile__TYPE_NAME[] = "amr_fleet_msgs/msg/CommunicationProfile";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char amr_fleet_msgs__msg__CommunicationProfile__FIELD_NAME__header[] = "header";
static char amr_fleet_msgs__msg__CommunicationProfile__FIELD_NAME__profile_name[] = "profile_name";
static char amr_fleet_msgs__msg__CommunicationProfile__FIELD_NAME__enabled[] = "enabled";
static char amr_fleet_msgs__msg__CommunicationProfile__FIELD_NAME__latency_ms[] = "latency_ms";
static char amr_fleet_msgs__msg__CommunicationProfile__FIELD_NAME__jitter_ms[] = "jitter_ms";
static char amr_fleet_msgs__msg__CommunicationProfile__FIELD_NAME__loss_probability[] = "loss_probability";
static char amr_fleet_msgs__msg__CommunicationProfile__FIELD_NAME__burst_loss_probability[] = "burst_loss_probability";
static char amr_fleet_msgs__msg__CommunicationProfile__FIELD_NAME__outage_duration_s[] = "outage_duration_s";
static char amr_fleet_msgs__msg__CommunicationProfile__FIELD_NAME__seed[] = "seed";
static char amr_fleet_msgs__msg__CommunicationProfile__FIELD_NAME__isolated_robots[] = "isolated_robots";

static rosidl_runtime_c__type_description__Field amr_fleet_msgs__msg__CommunicationProfile__FIELDS[] = {
  {
    {amr_fleet_msgs__msg__CommunicationProfile__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__msg__CommunicationProfile__FIELD_NAME__profile_name, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__msg__CommunicationProfile__FIELD_NAME__enabled, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__msg__CommunicationProfile__FIELD_NAME__latency_ms, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__msg__CommunicationProfile__FIELD_NAME__jitter_ms, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__msg__CommunicationProfile__FIELD_NAME__loss_probability, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__msg__CommunicationProfile__FIELD_NAME__burst_loss_probability, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__msg__CommunicationProfile__FIELD_NAME__outage_duration_s, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__msg__CommunicationProfile__FIELD_NAME__seed, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__msg__CommunicationProfile__FIELD_NAME__isolated_robots, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription amr_fleet_msgs__msg__CommunicationProfile__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
amr_fleet_msgs__msg__CommunicationProfile__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {amr_fleet_msgs__msg__CommunicationProfile__TYPE_NAME, 39, 39},
      {amr_fleet_msgs__msg__CommunicationProfile__FIELDS, 10, 10},
    },
    {amr_fleet_msgs__msg__CommunicationProfile__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "string profile_name\n"
  "bool enabled\n"
  "float64 latency_ms\n"
  "float64 jitter_ms\n"
  "float64 loss_probability\n"
  "float64 burst_loss_probability\n"
  "float64 outage_duration_s\n"
  "uint32 seed\n"
  "string[] isolated_robots";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
amr_fleet_msgs__msg__CommunicationProfile__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {amr_fleet_msgs__msg__CommunicationProfile__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 212, 212},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
amr_fleet_msgs__msg__CommunicationProfile__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *amr_fleet_msgs__msg__CommunicationProfile__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
