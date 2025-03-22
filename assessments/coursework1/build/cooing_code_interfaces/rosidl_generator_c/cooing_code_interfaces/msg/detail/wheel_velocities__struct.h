// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cooing_code_interfaces:msg/WheelVelocities.idl
// generated code does not contain a copyright notice

#ifndef COOING_CODE_INTERFACES__MSG__DETAIL__WHEEL_VELOCITIES__STRUCT_H_
#define COOING_CODE_INTERFACES__MSG__DETAIL__WHEEL_VELOCITIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/WheelVelocities in the package cooing_code_interfaces.
typedef struct cooing_code_interfaces__msg__WheelVelocities
{
  double right_wheel_velocity;
  double left_wheel_velocity;
} cooing_code_interfaces__msg__WheelVelocities;

// Struct for a sequence of cooing_code_interfaces__msg__WheelVelocities.
typedef struct cooing_code_interfaces__msg__WheelVelocities__Sequence
{
  cooing_code_interfaces__msg__WheelVelocities * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cooing_code_interfaces__msg__WheelVelocities__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COOING_CODE_INTERFACES__MSG__DETAIL__WHEEL_VELOCITIES__STRUCT_H_
