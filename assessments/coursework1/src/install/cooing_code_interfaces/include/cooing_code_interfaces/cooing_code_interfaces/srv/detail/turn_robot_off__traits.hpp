// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cooing_code_interfaces:srv/TurnRobotOff.idl
// generated code does not contain a copyright notice

#ifndef COOING_CODE_INTERFACES__SRV__DETAIL__TURN_ROBOT_OFF__TRAITS_HPP_
#define COOING_CODE_INTERFACES__SRV__DETAIL__TURN_ROBOT_OFF__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cooing_code_interfaces/srv/detail/turn_robot_off__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace cooing_code_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TurnRobotOff_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurnRobotOff_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurnRobotOff_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace cooing_code_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use cooing_code_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cooing_code_interfaces::srv::TurnRobotOff_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  cooing_code_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cooing_code_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const cooing_code_interfaces::srv::TurnRobotOff_Request & msg)
{
  return cooing_code_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cooing_code_interfaces::srv::TurnRobotOff_Request>()
{
  return "cooing_code_interfaces::srv::TurnRobotOff_Request";
}

template<>
inline const char * name<cooing_code_interfaces::srv::TurnRobotOff_Request>()
{
  return "cooing_code_interfaces/srv/TurnRobotOff_Request";
}

template<>
struct has_fixed_size<cooing_code_interfaces::srv::TurnRobotOff_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cooing_code_interfaces::srv::TurnRobotOff_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cooing_code_interfaces::srv::TurnRobotOff_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace cooing_code_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TurnRobotOff_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurnRobotOff_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurnRobotOff_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace cooing_code_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use cooing_code_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cooing_code_interfaces::srv::TurnRobotOff_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  cooing_code_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cooing_code_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const cooing_code_interfaces::srv::TurnRobotOff_Response & msg)
{
  return cooing_code_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cooing_code_interfaces::srv::TurnRobotOff_Response>()
{
  return "cooing_code_interfaces::srv::TurnRobotOff_Response";
}

template<>
inline const char * name<cooing_code_interfaces::srv::TurnRobotOff_Response>()
{
  return "cooing_code_interfaces/srv/TurnRobotOff_Response";
}

template<>
struct has_fixed_size<cooing_code_interfaces::srv::TurnRobotOff_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cooing_code_interfaces::srv::TurnRobotOff_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cooing_code_interfaces::srv::TurnRobotOff_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cooing_code_interfaces::srv::TurnRobotOff>()
{
  return "cooing_code_interfaces::srv::TurnRobotOff";
}

template<>
inline const char * name<cooing_code_interfaces::srv::TurnRobotOff>()
{
  return "cooing_code_interfaces/srv/TurnRobotOff";
}

template<>
struct has_fixed_size<cooing_code_interfaces::srv::TurnRobotOff>
  : std::integral_constant<
    bool,
    has_fixed_size<cooing_code_interfaces::srv::TurnRobotOff_Request>::value &&
    has_fixed_size<cooing_code_interfaces::srv::TurnRobotOff_Response>::value
  >
{
};

template<>
struct has_bounded_size<cooing_code_interfaces::srv::TurnRobotOff>
  : std::integral_constant<
    bool,
    has_bounded_size<cooing_code_interfaces::srv::TurnRobotOff_Request>::value &&
    has_bounded_size<cooing_code_interfaces::srv::TurnRobotOff_Response>::value
  >
{
};

template<>
struct is_service<cooing_code_interfaces::srv::TurnRobotOff>
  : std::true_type
{
};

template<>
struct is_service_request<cooing_code_interfaces::srv::TurnRobotOff_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cooing_code_interfaces::srv::TurnRobotOff_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COOING_CODE_INTERFACES__SRV__DETAIL__TURN_ROBOT_OFF__TRAITS_HPP_
