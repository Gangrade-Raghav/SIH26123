// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from amr_fleet_msgs:srv/CreateTask.idl
// generated code does not contain a copyright notice

#include "amr_fleet_msgs/srv/detail/create_task__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
const rosidl_type_hash_t *
amr_fleet_msgs__srv__CreateTask__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa4, 0x7f, 0xdb, 0xba, 0xe1, 0xf6, 0x64, 0x5f,
      0x97, 0xc3, 0xbf, 0xdf, 0x39, 0x7c, 0xd9, 0x45,
      0x57, 0x0f, 0x16, 0xe2, 0x05, 0x85, 0x2d, 0x59,
      0x76, 0xb3, 0xed, 0xed, 0xd8, 0xe5, 0x4f, 0x00,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
const rosidl_type_hash_t *
amr_fleet_msgs__srv__CreateTask_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc4, 0xa1, 0xfa, 0x40, 0x75, 0x7e, 0x8b, 0xa9,
      0xc7, 0x29, 0x97, 0xd4, 0x1a, 0xdc, 0x89, 0xe8,
      0x06, 0x3d, 0x2d, 0xcb, 0xb4, 0x91, 0xbd, 0x86,
      0x43, 0xa4, 0x64, 0x6d, 0x3e, 0x90, 0x00, 0xe5,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
const rosidl_type_hash_t *
amr_fleet_msgs__srv__CreateTask_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x16, 0x37, 0xa8, 0xee, 0x5c, 0x88, 0xe3, 0x0d,
      0x43, 0x48, 0xcd, 0xdc, 0xe5, 0x76, 0xc5, 0xf5,
      0x63, 0x2f, 0x94, 0x44, 0xf8, 0x4d, 0x7b, 0x42,
      0xa1, 0xe6, 0x3c, 0x4b, 0x94, 0xaf, 0xf9, 0x88,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
const rosidl_type_hash_t *
amr_fleet_msgs__srv__CreateTask_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6b, 0x0e, 0x45, 0x84, 0x37, 0xee, 0x2d, 0x62,
      0x5a, 0x8f, 0xbd, 0xc9, 0x64, 0x6d, 0xd1, 0x52,
      0xb2, 0x2a, 0x25, 0x91, 0xb1, 0x0a, 0x48, 0x87,
      0x17, 0x11, 0xee, 0xd7, 0x8c, 0x01, 0xf7, 0x8c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char amr_fleet_msgs__srv__CreateTask__TYPE_NAME[] = "amr_fleet_msgs/srv/CreateTask";
static char amr_fleet_msgs__srv__CreateTask_Event__TYPE_NAME[] = "amr_fleet_msgs/srv/CreateTask_Event";
static char amr_fleet_msgs__srv__CreateTask_Request__TYPE_NAME[] = "amr_fleet_msgs/srv/CreateTask_Request";
static char amr_fleet_msgs__srv__CreateTask_Response__TYPE_NAME[] = "amr_fleet_msgs/srv/CreateTask_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char amr_fleet_msgs__srv__CreateTask__FIELD_NAME__request_message[] = "request_message";
static char amr_fleet_msgs__srv__CreateTask__FIELD_NAME__response_message[] = "response_message";
static char amr_fleet_msgs__srv__CreateTask__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field amr_fleet_msgs__srv__CreateTask__FIELDS[] = {
  {
    {amr_fleet_msgs__srv__CreateTask__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {amr_fleet_msgs__srv__CreateTask_Request__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__srv__CreateTask__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {amr_fleet_msgs__srv__CreateTask_Response__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__srv__CreateTask__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {amr_fleet_msgs__srv__CreateTask_Event__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription amr_fleet_msgs__srv__CreateTask__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {amr_fleet_msgs__srv__CreateTask_Event__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__srv__CreateTask_Request__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__srv__CreateTask_Response__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
amr_fleet_msgs__srv__CreateTask__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {amr_fleet_msgs__srv__CreateTask__TYPE_NAME, 29, 29},
      {amr_fleet_msgs__srv__CreateTask__FIELDS, 3, 3},
    },
    {amr_fleet_msgs__srv__CreateTask__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = amr_fleet_msgs__srv__CreateTask_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = amr_fleet_msgs__srv__CreateTask_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = amr_fleet_msgs__srv__CreateTask_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char amr_fleet_msgs__srv__CreateTask_Request__FIELD_NAME__task_id[] = "task_id";
static char amr_fleet_msgs__srv__CreateTask_Request__FIELD_NAME__pickup_x[] = "pickup_x";
static char amr_fleet_msgs__srv__CreateTask_Request__FIELD_NAME__pickup_y[] = "pickup_y";
static char amr_fleet_msgs__srv__CreateTask_Request__FIELD_NAME__dropoff_x[] = "dropoff_x";
static char amr_fleet_msgs__srv__CreateTask_Request__FIELD_NAME__dropoff_y[] = "dropoff_y";
static char amr_fleet_msgs__srv__CreateTask_Request__FIELD_NAME__priority[] = "priority";
static char amr_fleet_msgs__srv__CreateTask_Request__FIELD_NAME__deadline[] = "deadline";
static char amr_fleet_msgs__srv__CreateTask_Request__FIELD_NAME__requested_robot[] = "requested_robot";

static rosidl_runtime_c__type_description__Field amr_fleet_msgs__srv__CreateTask_Request__FIELDS[] = {
  {
    {amr_fleet_msgs__srv__CreateTask_Request__FIELD_NAME__task_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__srv__CreateTask_Request__FIELD_NAME__pickup_x, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__srv__CreateTask_Request__FIELD_NAME__pickup_y, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__srv__CreateTask_Request__FIELD_NAME__dropoff_x, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__srv__CreateTask_Request__FIELD_NAME__dropoff_y, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__srv__CreateTask_Request__FIELD_NAME__priority, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__srv__CreateTask_Request__FIELD_NAME__deadline, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__srv__CreateTask_Request__FIELD_NAME__requested_robot, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
amr_fleet_msgs__srv__CreateTask_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {amr_fleet_msgs__srv__CreateTask_Request__TYPE_NAME, 37, 37},
      {amr_fleet_msgs__srv__CreateTask_Request__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char amr_fleet_msgs__srv__CreateTask_Response__FIELD_NAME__accepted[] = "accepted";
static char amr_fleet_msgs__srv__CreateTask_Response__FIELD_NAME__task_id[] = "task_id";
static char amr_fleet_msgs__srv__CreateTask_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field amr_fleet_msgs__srv__CreateTask_Response__FIELDS[] = {
  {
    {amr_fleet_msgs__srv__CreateTask_Response__FIELD_NAME__accepted, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__srv__CreateTask_Response__FIELD_NAME__task_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__srv__CreateTask_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
amr_fleet_msgs__srv__CreateTask_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {amr_fleet_msgs__srv__CreateTask_Response__TYPE_NAME, 38, 38},
      {amr_fleet_msgs__srv__CreateTask_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char amr_fleet_msgs__srv__CreateTask_Event__FIELD_NAME__info[] = "info";
static char amr_fleet_msgs__srv__CreateTask_Event__FIELD_NAME__request[] = "request";
static char amr_fleet_msgs__srv__CreateTask_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field amr_fleet_msgs__srv__CreateTask_Event__FIELDS[] = {
  {
    {amr_fleet_msgs__srv__CreateTask_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__srv__CreateTask_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {amr_fleet_msgs__srv__CreateTask_Request__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__srv__CreateTask_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {amr_fleet_msgs__srv__CreateTask_Response__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription amr_fleet_msgs__srv__CreateTask_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {amr_fleet_msgs__srv__CreateTask_Request__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {amr_fleet_msgs__srv__CreateTask_Response__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
amr_fleet_msgs__srv__CreateTask_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {amr_fleet_msgs__srv__CreateTask_Event__TYPE_NAME, 35, 35},
      {amr_fleet_msgs__srv__CreateTask_Event__FIELDS, 3, 3},
    },
    {amr_fleet_msgs__srv__CreateTask_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = amr_fleet_msgs__srv__CreateTask_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = amr_fleet_msgs__srv__CreateTask_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string task_id\n"
  "float64 pickup_x\n"
  "float64 pickup_y\n"
  "float64 dropoff_x\n"
  "float64 dropoff_y\n"
  "int32 priority\n"
  "float64 deadline\n"
  "string requested_robot\n"
  "---\n"
  "bool accepted\n"
  "string task_id\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
amr_fleet_msgs__srv__CreateTask__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {amr_fleet_msgs__srv__CreateTask__TYPE_NAME, 29, 29},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 188, 188},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
amr_fleet_msgs__srv__CreateTask_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {amr_fleet_msgs__srv__CreateTask_Request__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
amr_fleet_msgs__srv__CreateTask_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {amr_fleet_msgs__srv__CreateTask_Response__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
amr_fleet_msgs__srv__CreateTask_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {amr_fleet_msgs__srv__CreateTask_Event__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
amr_fleet_msgs__srv__CreateTask__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *amr_fleet_msgs__srv__CreateTask__get_individual_type_description_source(NULL),
    sources[1] = *amr_fleet_msgs__srv__CreateTask_Event__get_individual_type_description_source(NULL);
    sources[2] = *amr_fleet_msgs__srv__CreateTask_Request__get_individual_type_description_source(NULL);
    sources[3] = *amr_fleet_msgs__srv__CreateTask_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
amr_fleet_msgs__srv__CreateTask_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *amr_fleet_msgs__srv__CreateTask_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
amr_fleet_msgs__srv__CreateTask_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *amr_fleet_msgs__srv__CreateTask_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
amr_fleet_msgs__srv__CreateTask_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *amr_fleet_msgs__srv__CreateTask_Event__get_individual_type_description_source(NULL),
    sources[1] = *amr_fleet_msgs__srv__CreateTask_Request__get_individual_type_description_source(NULL);
    sources[2] = *amr_fleet_msgs__srv__CreateTask_Response__get_individual_type_description_source(NULL);
    sources[3] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
