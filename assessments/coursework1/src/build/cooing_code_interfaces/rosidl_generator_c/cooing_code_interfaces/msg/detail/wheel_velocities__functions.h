// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cooing_code_interfaces:msg/WheelVelocities.idl
// generated code does not contain a copyright notice

#ifndef COOING_CODE_INTERFACES__MSG__DETAIL__WHEEL_VELOCITIES__FUNCTIONS_H_
#define COOING_CODE_INTERFACES__MSG__DETAIL__WHEEL_VELOCITIES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cooing_code_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "cooing_code_interfaces/msg/detail/wheel_velocities__struct.h"

/// Initialize msg/WheelVelocities message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cooing_code_interfaces__msg__WheelVelocities
 * )) before or use
 * cooing_code_interfaces__msg__WheelVelocities__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cooing_code_interfaces
bool
cooing_code_interfaces__msg__WheelVelocities__init(cooing_code_interfaces__msg__WheelVelocities * msg);

/// Finalize msg/WheelVelocities message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cooing_code_interfaces
void
cooing_code_interfaces__msg__WheelVelocities__fini(cooing_code_interfaces__msg__WheelVelocities * msg);

/// Create msg/WheelVelocities message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cooing_code_interfaces__msg__WheelVelocities__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cooing_code_interfaces
cooing_code_interfaces__msg__WheelVelocities *
cooing_code_interfaces__msg__WheelVelocities__create();

/// Destroy msg/WheelVelocities message.
/**
 * It calls
 * cooing_code_interfaces__msg__WheelVelocities__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cooing_code_interfaces
void
cooing_code_interfaces__msg__WheelVelocities__destroy(cooing_code_interfaces__msg__WheelVelocities * msg);

/// Check for msg/WheelVelocities message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cooing_code_interfaces
bool
cooing_code_interfaces__msg__WheelVelocities__are_equal(const cooing_code_interfaces__msg__WheelVelocities * lhs, const cooing_code_interfaces__msg__WheelVelocities * rhs);

/// Copy a msg/WheelVelocities message.
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
ROSIDL_GENERATOR_C_PUBLIC_cooing_code_interfaces
bool
cooing_code_interfaces__msg__WheelVelocities__copy(
  const cooing_code_interfaces__msg__WheelVelocities * input,
  cooing_code_interfaces__msg__WheelVelocities * output);

/// Initialize array of msg/WheelVelocities messages.
/**
 * It allocates the memory for the number of elements and calls
 * cooing_code_interfaces__msg__WheelVelocities__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cooing_code_interfaces
bool
cooing_code_interfaces__msg__WheelVelocities__Sequence__init(cooing_code_interfaces__msg__WheelVelocities__Sequence * array, size_t size);

/// Finalize array of msg/WheelVelocities messages.
/**
 * It calls
 * cooing_code_interfaces__msg__WheelVelocities__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cooing_code_interfaces
void
cooing_code_interfaces__msg__WheelVelocities__Sequence__fini(cooing_code_interfaces__msg__WheelVelocities__Sequence * array);

/// Create array of msg/WheelVelocities messages.
/**
 * It allocates the memory for the array and calls
 * cooing_code_interfaces__msg__WheelVelocities__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cooing_code_interfaces
cooing_code_interfaces__msg__WheelVelocities__Sequence *
cooing_code_interfaces__msg__WheelVelocities__Sequence__create(size_t size);

/// Destroy array of msg/WheelVelocities messages.
/**
 * It calls
 * cooing_code_interfaces__msg__WheelVelocities__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cooing_code_interfaces
void
cooing_code_interfaces__msg__WheelVelocities__Sequence__destroy(cooing_code_interfaces__msg__WheelVelocities__Sequence * array);

/// Check for msg/WheelVelocities message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cooing_code_interfaces
bool
cooing_code_interfaces__msg__WheelVelocities__Sequence__are_equal(const cooing_code_interfaces__msg__WheelVelocities__Sequence * lhs, const cooing_code_interfaces__msg__WheelVelocities__Sequence * rhs);

/// Copy an array of msg/WheelVelocities messages.
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
ROSIDL_GENERATOR_C_PUBLIC_cooing_code_interfaces
bool
cooing_code_interfaces__msg__WheelVelocities__Sequence__copy(
  const cooing_code_interfaces__msg__WheelVelocities__Sequence * input,
  cooing_code_interfaces__msg__WheelVelocities__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // COOING_CODE_INTERFACES__MSG__DETAIL__WHEEL_VELOCITIES__FUNCTIONS_H_
