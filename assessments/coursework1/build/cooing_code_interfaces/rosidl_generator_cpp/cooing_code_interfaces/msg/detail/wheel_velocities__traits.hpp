// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cooing_code_interfaces:msg/WheelVelocities.idl
// generated code does not contain a copyright notice

#ifndef COOING_CODE_INTERFACES__MSG__DETAIL__WHEEL_VELOCITIES__TRAITS_HPP_
#define COOING_CODE_INTERFACES__MSG__DETAIL__WHEEL_VELOCITIES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cooing_code_interfaces/msg/detail/wheel_velocities__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace cooing_code_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const WheelVelocities & msg,
  std::ostream & out)
{
  out << "{";
  // member: right_wheel_velocity
  {
    out << "right_wheel_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.right_wheel_velocity, out);
    out << ", ";
  }

  // member: left_wheel_velocity
  {
    out << "left_wheel_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.left_wheel_velocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WheelVelocities & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: right_wheel_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_wheel_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.right_wheel_velocity, out);
    out << "\n";
  }

  // member: left_wheel_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_wheel_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.left_wheel_velocity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WheelVelocities & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace cooing_code_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use cooing_code_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cooing_code_interfaces::msg::WheelVelocities & msg,
  std::ostream & out, size_t indentation = 0)
{
  cooing_code_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cooing_code_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const cooing_code_interfaces::msg::WheelVelocities & msg)
{
  return cooing_code_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cooing_code_interfaces::msg::WheelVelocities>()
{
  return "cooing_code_interfaces::msg::WheelVelocities";
}

template<>
inline const char * name<cooing_code_interfaces::msg::WheelVelocities>()
{
  return "cooing_code_interfaces/msg/WheelVelocities";
}

template<>
struct has_fixed_size<cooing_code_interfaces::msg::WheelVelocities>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cooing_code_interfaces::msg::WheelVelocities>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cooing_code_interfaces::msg::WheelVelocities>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COOING_CODE_INTERFACES__MSG__DETAIL__WHEEL_VELOCITIES__TRAITS_HPP_
