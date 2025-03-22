// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cooing_code_interfaces:msg/TaskSpacePose.idl
// generated code does not contain a copyright notice

#ifndef COOING_CODE_INTERFACES__MSG__DETAIL__TASK_SPACE_POSE__TRAITS_HPP_
#define COOING_CODE_INTERFACES__MSG__DETAIL__TASK_SPACE_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cooing_code_interfaces/msg/detail/task_space_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace cooing_code_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TaskSpacePose & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: phi_z
  {
    out << "phi_z: ";
    rosidl_generator_traits::value_to_yaml(msg.phi_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskSpacePose & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: phi_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "phi_z: ";
    rosidl_generator_traits::value_to_yaml(msg.phi_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskSpacePose & msg, bool use_flow_style = false)
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
  const cooing_code_interfaces::msg::TaskSpacePose & msg,
  std::ostream & out, size_t indentation = 0)
{
  cooing_code_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cooing_code_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const cooing_code_interfaces::msg::TaskSpacePose & msg)
{
  return cooing_code_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cooing_code_interfaces::msg::TaskSpacePose>()
{
  return "cooing_code_interfaces::msg::TaskSpacePose";
}

template<>
inline const char * name<cooing_code_interfaces::msg::TaskSpacePose>()
{
  return "cooing_code_interfaces/msg/TaskSpacePose";
}

template<>
struct has_fixed_size<cooing_code_interfaces::msg::TaskSpacePose>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cooing_code_interfaces::msg::TaskSpacePose>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cooing_code_interfaces::msg::TaskSpacePose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COOING_CODE_INTERFACES__MSG__DETAIL__TASK_SPACE_POSE__TRAITS_HPP_
