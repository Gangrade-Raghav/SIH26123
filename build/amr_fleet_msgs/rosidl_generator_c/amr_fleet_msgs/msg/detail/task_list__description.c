// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from amr_fleet_msgs:msg/TaskList.idl
// generated code does not contain a copyright notice

#include "amr_fleet_msgs/msg/detail/task_list__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
const rosidl_type_hash_t *
amr_fleet_msgs__msg__TaskList__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x67, 0xc0, 0xa5, 0x68, 0xe9, 0x0b, 0x1a, 0x65,
      0x87, 0xbb, 0x1c, 0x5d, 0x58, 0xa7, 0xb6, 0x5d,
      0x17, 0xa0, 0xdc, 0xf5, 0x67, 0x5b, 0x36, 0x1d,
      0x8e, 0xd3, 0x41, 0x1a, 0x60, 0xa1, 0x63, 0x32,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "amr_fleet_msgs/msg/detail/task_definition__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t amr_fleet_msgs__msg__TaskDefinition__EXPECTED_HASH = {1, {
    0xb8, 0xfc, 0xb9, 0x08, 0x79, 0x52, 0x17, 0x66,
    0x47, 0xb9, 0xfd, 0xbd, 0x49, 0xd0, 0x63, 0x84,
    0xa1, 0xd0, 0x3a, 0xd8, 0xd3, 0x6b, 0xc6, 0x9d,
    0x41, 0xb3, 0xf0, 0x95, 0x8d, 0xcd, 0x57, 0x2d,
  }};
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char amr_fleet_msgs__msg__TaskList__TYPE_NAME[] = "amr_fleet_msgs/msg/TaskList";
static char amr_fleet_msgs__msg__TaskDefinition__TYPE_NAME[] = "amr_fleet_msgs/msg/TaskDefinition";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char amr_fleet_msgs__msg__TaskList__FIELD_NAME__header[] = "header";
static char amr_fleet_msgs__msg__TaskList__FIELD_NAME__tasks[] = "tasks";

static rosidl_runtime_c__type_description__Field amr_fleet_msgs__msg__TaskList__FIELDS[] = {
  {
    {amr_fleet_msgs__msg__TaskList__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__msg__TaskList__FIELD_NAME__tasks, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {amr_fleet_msgs__msg__TaskDefinition__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription amr_fleet_msgs__msg__TaskList__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {amr_fleet_msgs__msg__TaskDefinition__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
amr_fleet_msgs__msg__TaskList__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {amr_fleet_msgs__msg__TaskList__TYPE_NAME, 27, 27},
      {amr_fleet_msgs__msg__TaskList__FIELDS, 2, 2},
    },
    {amr_fleet_msgs__msg__TaskList__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&amr_fleet_msgs__msg__TaskDefinition__EXPECTED_HASH, amr_fleet_msgs__msg__TaskDefinition__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = amr_fleet_msgs__msg__TaskDefinition__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "amr_fleet_msgs/TaskDefinition[] tasks";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
amr_fleet_msgs__msg__TaskList__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {amr_fleet_msgs__msg__TaskList__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 61, 61},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
amr_fleet_msgs__msg__TaskList__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *amr_fleet_msgs__msg__TaskList__get_individual_type_description_source(NULL),
    sources[1] = *amr_fleet_msgs__msg__TaskDefinition__get_individual_type_description_source(NULL);
    sources[2] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[4] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
