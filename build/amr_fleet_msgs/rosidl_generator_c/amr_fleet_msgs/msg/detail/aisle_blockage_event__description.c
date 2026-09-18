// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from amr_fleet_msgs:msg/AisleBlockageEvent.idl
// generated code does not contain a copyright notice

#include "amr_fleet_msgs/msg/detail/aisle_blockage_event__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
const rosidl_type_hash_t *
amr_fleet_msgs__msg__AisleBlockageEvent__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc9, 0x7e, 0x04, 0x64, 0x33, 0x45, 0x30, 0x53,
      0xc9, 0x7c, 0x95, 0xf2, 0x8b, 0xf5, 0x57, 0x5c,
      0x2c, 0x4b, 0xca, 0x17, 0xd0, 0x0e, 0x07, 0xb4,
      0x0c, 0xdc, 0xac, 0x56, 0xd1, 0x7a, 0x93, 0xff,
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

static char amr_fleet_msgs__msg__AisleBlockageEvent__TYPE_NAME[] = "amr_fleet_msgs/msg/AisleBlockageEvent";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char amr_fleet_msgs__msg__AisleBlockageEvent__FIELD_NAME__header[] = "header";
static char amr_fleet_msgs__msg__AisleBlockageEvent__FIELD_NAME__blockage_id[] = "blockage_id";
static char amr_fleet_msgs__msg__AisleBlockageEvent__FIELD_NAME__is_blocked[] = "is_blocked";
static char amr_fleet_msgs__msg__AisleBlockageEvent__FIELD_NAME__min_x[] = "min_x";
static char amr_fleet_msgs__msg__AisleBlockageEvent__FIELD_NAME__max_x[] = "max_x";
static char amr_fleet_msgs__msg__AisleBlockageEvent__FIELD_NAME__min_y[] = "min_y";
static char amr_fleet_msgs__msg__AisleBlockageEvent__FIELD_NAME__max_y[] = "max_y";
static char amr_fleet_msgs__msg__AisleBlockageEvent__FIELD_NAME__timestamp[] = "timestamp";

static rosidl_runtime_c__type_description__Field amr_fleet_msgs__msg__AisleBlockageEvent__FIELDS[] = {
  {
    {amr_fleet_msgs__msg__AisleBlockageEvent__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__msg__AisleBlockageEvent__FIELD_NAME__blockage_id, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__msg__AisleBlockageEvent__FIELD_NAME__is_blocked, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__msg__AisleBlockageEvent__FIELD_NAME__min_x, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__msg__AisleBlockageEvent__FIELD_NAME__max_x, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__msg__AisleBlockageEvent__FIELD_NAME__min_y, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__msg__AisleBlockageEvent__FIELD_NAME__max_y, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__msg__AisleBlockageEvent__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription amr_fleet_msgs__msg__AisleBlockageEvent__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
amr_fleet_msgs__msg__AisleBlockageEvent__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {amr_fleet_msgs__msg__AisleBlockageEvent__TYPE_NAME, 37, 37},
      {amr_fleet_msgs__msg__AisleBlockageEvent__FIELDS, 8, 8},
    },
    {amr_fleet_msgs__msg__AisleBlockageEvent__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "string blockage_id\n"
  "bool is_blocked\n"
  "float64 min_x\n"
  "float64 max_x\n"
  "float64 min_y\n"
  "float64 max_y\n"
  "builtin_interfaces/Time timestamp";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
amr_fleet_msgs__msg__AisleBlockageEvent__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {amr_fleet_msgs__msg__AisleBlockageEvent__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 148, 148},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
amr_fleet_msgs__msg__AisleBlockageEvent__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *amr_fleet_msgs__msg__AisleBlockageEvent__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
