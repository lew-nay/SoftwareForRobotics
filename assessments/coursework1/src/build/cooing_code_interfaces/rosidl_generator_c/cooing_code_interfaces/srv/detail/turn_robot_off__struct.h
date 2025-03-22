// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cooing_code_interfaces:srv/TurnRobotOff.idl
// generated code does not contain a copyright notice

#ifndef COOING_CODE_INTERFACES__SRV__DETAIL__TURN_ROBOT_OFF__STRUCT_H_
#define COOING_CODE_INTERFACES__SRV__DETAIL__TURN_ROBOT_OFF__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/TurnRobotOff in the package cooing_code_interfaces.
typedef struct cooing_code_interfaces__srv__TurnRobotOff_Request
{
  uint8_t structure_needs_at_least_one_member;
} cooing_code_interfaces__srv__TurnRobotOff_Request;

// Struct for a sequence of cooing_code_interfaces__srv__TurnRobotOff_Request.
typedef struct cooing_code_interfaces__srv__TurnRobotOff_Request__Sequence
{
  cooing_code_interfaces__srv__TurnRobotOff_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cooing_code_interfaces__srv__TurnRobotOff_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/TurnRobotOff in the package cooing_code_interfaces.
typedef struct cooing_code_interfaces__srv__TurnRobotOff_Response
{
  bool success;
} cooing_code_interfaces__srv__TurnRobotOff_Response;

// Struct for a sequence of cooing_code_interfaces__srv__TurnRobotOff_Response.
typedef struct cooing_code_interfaces__srv__TurnRobotOff_Response__Sequence
{
  cooing_code_interfaces__srv__TurnRobotOff_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cooing_code_interfaces__srv__TurnRobotOff_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COOING_CODE_INTERFACES__SRV__DETAIL__TURN_ROBOT_OFF__STRUCT_H_
