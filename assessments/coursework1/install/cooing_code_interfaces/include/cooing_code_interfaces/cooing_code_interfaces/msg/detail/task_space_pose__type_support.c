// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cooing_code_interfaces:msg/TaskSpacePose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cooing_code_interfaces/msg/detail/task_space_pose__rosidl_typesupport_introspection_c.h"
#include "cooing_code_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cooing_code_interfaces/msg/detail/task_space_pose__functions.h"
#include "cooing_code_interfaces/msg/detail/task_space_pose__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void cooing_code_interfaces__msg__TaskSpacePose__rosidl_typesupport_introspection_c__TaskSpacePose_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cooing_code_interfaces__msg__TaskSpacePose__init(message_memory);
}

void cooing_code_interfaces__msg__TaskSpacePose__rosidl_typesupport_introspection_c__TaskSpacePose_fini_function(void * message_memory)
{
  cooing_code_interfaces__msg__TaskSpacePose__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cooing_code_interfaces__msg__TaskSpacePose__rosidl_typesupport_introspection_c__TaskSpacePose_message_member_array[3] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cooing_code_interfaces__msg__TaskSpacePose, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cooing_code_interfaces__msg__TaskSpacePose, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "phi_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cooing_code_interfaces__msg__TaskSpacePose, phi_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cooing_code_interfaces__msg__TaskSpacePose__rosidl_typesupport_introspection_c__TaskSpacePose_message_members = {
  "cooing_code_interfaces__msg",  // message namespace
  "TaskSpacePose",  // message name
  3,  // number of fields
  sizeof(cooing_code_interfaces__msg__TaskSpacePose),
  cooing_code_interfaces__msg__TaskSpacePose__rosidl_typesupport_introspection_c__TaskSpacePose_message_member_array,  // message members
  cooing_code_interfaces__msg__TaskSpacePose__rosidl_typesupport_introspection_c__TaskSpacePose_init_function,  // function to initialize message memory (memory has to be allocated)
  cooing_code_interfaces__msg__TaskSpacePose__rosidl_typesupport_introspection_c__TaskSpacePose_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cooing_code_interfaces__msg__TaskSpacePose__rosidl_typesupport_introspection_c__TaskSpacePose_message_type_support_handle = {
  0,
  &cooing_code_interfaces__msg__TaskSpacePose__rosidl_typesupport_introspection_c__TaskSpacePose_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cooing_code_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cooing_code_interfaces, msg, TaskSpacePose)() {
  if (!cooing_code_interfaces__msg__TaskSpacePose__rosidl_typesupport_introspection_c__TaskSpacePose_message_type_support_handle.typesupport_identifier) {
    cooing_code_interfaces__msg__TaskSpacePose__rosidl_typesupport_introspection_c__TaskSpacePose_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cooing_code_interfaces__msg__TaskSpacePose__rosidl_typesupport_introspection_c__TaskSpacePose_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
