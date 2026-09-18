// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from amr_fleet_msgs:msg/CoordinationStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/coordination_status.h"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__COORDINATION_STATUS__FUNCTIONS_H_
#define AMR_FLEET_MSGS__MSG__DETAIL__COORDINATION_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "amr_fleet_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "amr_fleet_msgs/msg/detail/coordination_status__struct.h"

/// Initialize msg/CoordinationStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * amr_fleet_msgs__msg__CoordinationStatus
 * )) before or use
 * amr_fleet_msgs__msg__CoordinationStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
bool
amr_fleet_msgs__msg__CoordinationStatus__init(amr_fleet_msgs__msg__CoordinationStatus * msg);

/// Finalize msg/CoordinationStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
void
amr_fleet_msgs__msg__CoordinationStatus__fini(amr_fleet_msgs__msg__CoordinationStatus * msg);

/// Create msg/CoordinationStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * amr_fleet_msgs__msg__CoordinationStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
amr_fleet_msgs__msg__CoordinationStatus *
amr_fleet_msgs__msg__CoordinationStatus__create(void);

/// Destroy msg/CoordinationStatus message.
/**
 * It calls
 * amr_fleet_msgs__msg__CoordinationStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
void
amr_fleet_msgs__msg__CoordinationStatus__destroy(amr_fleet_msgs__msg__CoordinationStatus * msg);

/// Check for msg/CoordinationStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
bool
amr_fleet_msgs__msg__CoordinationStatus__are_equal(const amr_fleet_msgs__msg__CoordinationStatus * lhs, const amr_fleet_msgs__msg__CoordinationStatus * rhs);

/// Copy a msg/CoordinationStatus message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
bool
amr_fleet_msgs__msg__CoordinationStatus__copy(
  const amr_fleet_msgs__msg__CoordinationStatus * input,
  amr_fleet_msgs__msg__CoordinationStatus * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
const rosidl_type_hash_t *
amr_fleet_msgs__msg__CoordinationStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
const rosidl_runtime_c__type_description__TypeDescription *
amr_fleet_msgs__msg__CoordinationStatus__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
const rosidl_runtime_c__type_description__TypeSource *
amr_fleet_msgs__msg__CoordinationStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
amr_fleet_msgs__msg__CoordinationStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/CoordinationStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * amr_fleet_msgs__msg__CoordinationStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
bool
amr_fleet_msgs__msg__CoordinationStatus__Sequence__init(amr_fleet_msgs__msg__CoordinationStatus__Sequence * array, size_t size);

/// Finalize array of msg/CoordinationStatus messages.
/**
 * It calls
 * amr_fleet_msgs__msg__CoordinationStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
void
amr_fleet_msgs__msg__CoordinationStatus__Sequence__fini(amr_fleet_msgs__msg__CoordinationStatus__Sequence * array);

/// Create array of msg/CoordinationStatus messages.
/**
 * It allocates the memory for the array and calls
 * amr_fleet_msgs__msg__CoordinationStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
amr_fleet_msgs__msg__CoordinationStatus__Sequence *
amr_fleet_msgs__msg__CoordinationStatus__Sequence__create(size_t size);

/// Destroy array of msg/CoordinationStatus messages.
/**
 * It calls
 * amr_fleet_msgs__msg__CoordinationStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
void
amr_fleet_msgs__msg__CoordinationStatus__Sequence__destroy(amr_fleet_msgs__msg__CoordinationStatus__Sequence * array);

/// Check for msg/CoordinationStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
bool
amr_fleet_msgs__msg__CoordinationStatus__Sequence__are_equal(const amr_fleet_msgs__msg__CoordinationStatus__Sequence * lhs, const amr_fleet_msgs__msg__CoordinationStatus__Sequence * rhs);

/// Copy an array of msg/CoordinationStatus messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
bool
amr_fleet_msgs__msg__CoordinationStatus__Sequence__copy(
  const amr_fleet_msgs__msg__CoordinationStatus__Sequence * input,
  amr_fleet_msgs__msg__CoordinationStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__COORDINATION_STATUS__FUNCTIONS_H_
