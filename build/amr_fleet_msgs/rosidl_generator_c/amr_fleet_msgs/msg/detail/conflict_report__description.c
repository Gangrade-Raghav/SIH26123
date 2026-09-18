// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from amr_fleet_msgs:msg/ConflictReport.idl
// generated code does not contain a copyright notice

#include "amr_fleet_msgs/msg/detail/conflict_report__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
const rosidl_type_hash_t *
amr_fleet_msgs__msg__ConflictReport__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x72, 0xb9, 0xeb, 0xfa, 0x15, 0x22, 0xf7, 0x1b,
      0x79, 0x1d, 0x4b, 0xb4, 0x4d, 0xeb, 0x94, 0xdd,
      0x37, 0x79, 0xc1, 0x6c, 0xe0, 0x9a, 0xab, 0xc6,
      0x40, 0xfa, 0x9a, 0xfe, 0xe8, 0x2e, 0x39, 0x5a,
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

static char amr_fleet_msgs__msg__ConflictReport__TYPE_NAME[] = "amr_fleet_msgs/msg/ConflictReport";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char amr_fleet_msgs__msg__ConflictReport__FIELD_NAME__header[] = "header";
static char amr_fleet_msgs__msg__ConflictReport__FIELD_NAME__conflict_type[] = "conflict_type";
static char amr_fleet_msgs__msg__ConflictReport__FIELD_NAME__robot_a[] = "robot_a";
static char amr_fleet_msgs__msg__ConflictReport__FIELD_NAME__robot_b[] = "robot_b";
static char amr_fleet_msgs__msg__ConflictReport__FIELD_NAME__cell_x[] = "cell_x";
static char amr_fleet_msgs__msg__ConflictReport__FIELD_NAME__cell_y[] = "cell_y";
static char amr_fleet_msgs__msg__ConflictReport__FIELD_NAME__time_step[] = "time_step";
static char amr_fleet_msgs__msg__ConflictReport__FIELD_NAME__resolved[] = "resolved";

static rosidl_runtime_c__type_description__Field amr_fleet_msgs__msg__ConflictReport__FIELDS[] = {
  {
    {amr_fleet_msgs__msg__ConflictReport__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__msg__ConflictReport__FIELD_NAME__conflict_type, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__msg__ConflictReport__FIELD_NAME__robot_a, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__msg__ConflictReport__FIELD_NAME__robot_b, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__msg__ConflictReport__FIELD_NAME__cell_x, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__msg__ConflictReport__FIELD_NAME__cell_y, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__msg__ConflictReport__FIELD_NAME__time_step, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__msg__ConflictReport__FIELD_NAME__resolved, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription amr_fleet_msgs__msg__ConflictReport__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
amr_fleet_msgs__msg__ConflictReport__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {amr_fleet_msgs__msg__ConflictReport__TYPE_NAME, 33, 33},
      {amr_fleet_msgs__msg__ConflictReport__FIELDS, 8, 8},
    },
    {amr_fleet_msgs__msg__ConflictReport__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "string conflict_type\n"
  "string robot_a\n"
  "string robot_b\n"
  "int32 cell_x\n"
  "int32 cell_y\n"
  "int32 time_step\n"
  "bool resolved";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
amr_fleet_msgs__msg__ConflictReport__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {amr_fleet_msgs__msg__ConflictReport__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 130, 130},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
amr_fleet_msgs__msg__ConflictReport__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *amr_fleet_msgs__msg__ConflictReport__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
