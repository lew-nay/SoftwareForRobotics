// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cooing_code_interfaces:msg/WheelVelocities.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cooing_code_interfaces/msg/detail/wheel_velocities__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace cooing_code_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void WheelVelocities_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cooing_code_interfaces::msg::WheelVelocities(_init);
}

void WheelVelocities_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cooing_code_interfaces::msg::WheelVelocities *>(message_memory);
  typed_message->~WheelVelocities();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember WheelVelocities_message_member_array[2] = {
  {
    "right_wheel_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cooing_code_interfaces::msg::WheelVelocities, right_wheel_velocity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "left_wheel_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cooing_code_interfaces::msg::WheelVelocities, left_wheel_velocity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WheelVelocities_message_members = {
  "cooing_code_interfaces::msg",  // message namespace
  "WheelVelocities",  // message name
  2,  // number of fields
  sizeof(cooing_code_interfaces::msg::WheelVelocities),
  WheelVelocities_message_member_array,  // message members
  WheelVelocities_init_function,  // function to initialize message memory (memory has to be allocated)
  WheelVelocities_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t WheelVelocities_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &WheelVelocities_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace cooing_code_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cooing_code_interfaces::msg::WheelVelocities>()
{
  return &::cooing_code_interfaces::msg::rosidl_typesupport_introspection_cpp::WheelVelocities_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cooing_code_interfaces, msg, WheelVelocities)() {
  return &::cooing_code_interfaces::msg::rosidl_typesupport_introspection_cpp::WheelVelocities_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
