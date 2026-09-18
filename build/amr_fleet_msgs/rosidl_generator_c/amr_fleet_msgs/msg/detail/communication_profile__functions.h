// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from amr_fleet_msgs:msg/CommunicationProfile.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/communication_profile.h"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__COMMUNICATION_PROFILE__FUNCTIONS_H_
#define AMR_FLEET_MSGS__MSG__DETAIL__COMMUNICATION_PROFILE__FUNCTIONS_H_

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

#include "amr_fleet_msgs/msg/detail/communication_profile__struct.h"

/// Initialize msg/CommunicationProfile message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * amr_fleet_msgs__msg__CommunicationProfile
 * )) before or use
 * amr_fleet_msgs__msg__CommunicationProfile__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
bool
amr_fleet_msgs__msg__CommunicationProfile__init(amr_fleet_msgs__msg__CommunicationProfile * msg);

/// Finalize msg/CommunicationProfile message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
void
amr_fleet_msgs__msg__CommunicationProfile__fini(amr_fleet_msgs__msg__CommunicationProfile * msg);

/// Create msg/CommunicationProfile message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * amr_fleet_msgs__msg__CommunicationProfile__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
amr_fleet_msgs__msg__CommunicationProfile *
amr_fleet_msgs__msg__CommunicationProfile__create(void);

/// Destroy msg/CommunicationProfile message.
/**
 * It calls
 * amr_fleet_msgs__msg__CommunicationProfile__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
void
amr_fleet_msgs__msg__CommunicationProfile__destroy(amr_fleet_msgs__msg__CommunicationProfile * msg);

/// Check for msg/CommunicationProfile message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
bool
amr_fleet_msgs__msg__CommunicationProfile__are_equal(const amr_fleet_msgs__msg__CommunicationProfile * lhs, const amr_fleet_msgs__msg__CommunicationProfile * rhs);

/// Copy a msg/CommunicationProfile message.
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
amr_fleet_msgs__msg__CommunicationProfile__copy(
  const amr_fleet_msgs__msg__CommunicationProfile * input,
  amr_fleet_msgs__msg__CommunicationProfile * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
const rosidl_type_hash_t *
amr_fleet_msgs__msg__CommunicationProfile__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
const rosidl_runtime_c__type_description__TypeDescription *
amr_fleet_msgs__msg__CommunicationProfile__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
const rosidl_runtime_c__type_description__TypeSource *
amr_fleet_msgs__msg__CommunicationProfile__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
amr_fleet_msgs__msg__CommunicationProfile__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/CommunicationProfile messages.
/**
 * It allocates the memory for the number of elements and calls
 * amr_fleet_msgs__msg__CommunicationProfile__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
bool
amr_fleet_msgs__msg__CommunicationProfile__Sequence__init(amr_fleet_msgs__msg__CommunicationProfile__Sequence * array, size_t size);

/// Finalize array of msg/CommunicationProfile messages.
/**
 * It calls
 * amr_fleet_msgs__msg__CommunicationProfile__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
void
amr_fleet_msgs__msg__CommunicationProfile__Sequence__fini(amr_fleet_msgs__msg__CommunicationProfile__Sequence * array);

/// Create array of msg/CommunicationProfile messages.
/**
 * It allocates the memory for the array and calls
 * amr_fleet_msgs__msg__CommunicationProfile__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
amr_fleet_msgs__msg__CommunicationProfile__Sequence *
amr_fleet_msgs__msg__CommunicationProfile__Sequence__create(size_t size);

/// Destroy array of msg/CommunicationProfile messages.
/**
 * It calls
 * amr_fleet_msgs__msg__CommunicationProfile__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
void
amr_fleet_msgs__msg__CommunicationProfile__Sequence__destroy(amr_fleet_msgs__msg__CommunicationProfile__Sequence * array);

/// Check for msg/CommunicationProfile message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_amr_fleet_msgs
bool
amr_fleet_msgs__msg__CommunicationProfile__Sequence__are_equal(const amr_fleet_msgs__msg__CommunicationProfile__Sequence * lhs, const amr_fleet_msgs__msg__CommunicationProfile__Sequence * rhs);

/// Copy an array of msg/CommunicationProfile messages.
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
amr_fleet_msgs__msg__CommunicationProfile__Sequence__copy(
  const amr_fleet_msgs__msg__CommunicationProfile__Sequence * input,
  amr_fleet_msgs__msg__CommunicationProfile__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__COMMUNICATION_PROFILE__FUNCTIONS_H_
