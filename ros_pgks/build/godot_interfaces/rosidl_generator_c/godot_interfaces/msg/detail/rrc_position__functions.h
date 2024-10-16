// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from godot_interfaces:msg/RRCPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "godot_interfaces/msg/rrc_position.h"


#ifndef GODOT_INTERFACES__MSG__DETAIL__RRC_POSITION__FUNCTIONS_H_
#define GODOT_INTERFACES__MSG__DETAIL__RRC_POSITION__FUNCTIONS_H_

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
#include "godot_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "godot_interfaces/msg/detail/rrc_position__struct.h"

/// Initialize msg/RRCPosition message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * godot_interfaces__msg__RRCPosition
 * )) before or use
 * godot_interfaces__msg__RRCPosition__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_godot_interfaces
bool
godot_interfaces__msg__RRCPosition__init(godot_interfaces__msg__RRCPosition * msg);

/// Finalize msg/RRCPosition message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godot_interfaces
void
godot_interfaces__msg__RRCPosition__fini(godot_interfaces__msg__RRCPosition * msg);

/// Create msg/RRCPosition message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * godot_interfaces__msg__RRCPosition__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_godot_interfaces
godot_interfaces__msg__RRCPosition *
godot_interfaces__msg__RRCPosition__create(void);

/// Destroy msg/RRCPosition message.
/**
 * It calls
 * godot_interfaces__msg__RRCPosition__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godot_interfaces
void
godot_interfaces__msg__RRCPosition__destroy(godot_interfaces__msg__RRCPosition * msg);

/// Check for msg/RRCPosition message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_godot_interfaces
bool
godot_interfaces__msg__RRCPosition__are_equal(const godot_interfaces__msg__RRCPosition * lhs, const godot_interfaces__msg__RRCPosition * rhs);

/// Copy a msg/RRCPosition message.
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
ROSIDL_GENERATOR_C_PUBLIC_godot_interfaces
bool
godot_interfaces__msg__RRCPosition__copy(
  const godot_interfaces__msg__RRCPosition * input,
  godot_interfaces__msg__RRCPosition * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_godot_interfaces
const rosidl_type_hash_t *
godot_interfaces__msg__RRCPosition__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_godot_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
godot_interfaces__msg__RRCPosition__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_godot_interfaces
const rosidl_runtime_c__type_description__TypeSource *
godot_interfaces__msg__RRCPosition__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_godot_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
godot_interfaces__msg__RRCPosition__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/RRCPosition messages.
/**
 * It allocates the memory for the number of elements and calls
 * godot_interfaces__msg__RRCPosition__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_godot_interfaces
bool
godot_interfaces__msg__RRCPosition__Sequence__init(godot_interfaces__msg__RRCPosition__Sequence * array, size_t size);

/// Finalize array of msg/RRCPosition messages.
/**
 * It calls
 * godot_interfaces__msg__RRCPosition__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godot_interfaces
void
godot_interfaces__msg__RRCPosition__Sequence__fini(godot_interfaces__msg__RRCPosition__Sequence * array);

/// Create array of msg/RRCPosition messages.
/**
 * It allocates the memory for the array and calls
 * godot_interfaces__msg__RRCPosition__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_godot_interfaces
godot_interfaces__msg__RRCPosition__Sequence *
godot_interfaces__msg__RRCPosition__Sequence__create(size_t size);

/// Destroy array of msg/RRCPosition messages.
/**
 * It calls
 * godot_interfaces__msg__RRCPosition__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_godot_interfaces
void
godot_interfaces__msg__RRCPosition__Sequence__destroy(godot_interfaces__msg__RRCPosition__Sequence * array);

/// Check for msg/RRCPosition message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_godot_interfaces
bool
godot_interfaces__msg__RRCPosition__Sequence__are_equal(const godot_interfaces__msg__RRCPosition__Sequence * lhs, const godot_interfaces__msg__RRCPosition__Sequence * rhs);

/// Copy an array of msg/RRCPosition messages.
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
ROSIDL_GENERATOR_C_PUBLIC_godot_interfaces
bool
godot_interfaces__msg__RRCPosition__Sequence__copy(
  const godot_interfaces__msg__RRCPosition__Sequence * input,
  godot_interfaces__msg__RRCPosition__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GODOT_INTERFACES__MSG__DETAIL__RRC_POSITION__FUNCTIONS_H_
