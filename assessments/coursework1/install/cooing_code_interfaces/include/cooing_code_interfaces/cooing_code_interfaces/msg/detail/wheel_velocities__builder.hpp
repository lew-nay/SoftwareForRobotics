// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cooing_code_interfaces:msg/WheelVelocities.idl
// generated code does not contain a copyright notice

#ifndef COOING_CODE_INTERFACES__MSG__DETAIL__WHEEL_VELOCITIES__BUILDER_HPP_
#define COOING_CODE_INTERFACES__MSG__DETAIL__WHEEL_VELOCITIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cooing_code_interfaces/msg/detail/wheel_velocities__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cooing_code_interfaces
{

namespace msg
{

namespace builder
{

class Init_WheelVelocities_left_wheel_velocity
{
public:
  explicit Init_WheelVelocities_left_wheel_velocity(::cooing_code_interfaces::msg::WheelVelocities & msg)
  : msg_(msg)
  {}
  ::cooing_code_interfaces::msg::WheelVelocities left_wheel_velocity(::cooing_code_interfaces::msg::WheelVelocities::_left_wheel_velocity_type arg)
  {
    msg_.left_wheel_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cooing_code_interfaces::msg::WheelVelocities msg_;
};

class Init_WheelVelocities_right_wheel_velocity
{
public:
  Init_WheelVelocities_right_wheel_velocity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelVelocities_left_wheel_velocity right_wheel_velocity(::cooing_code_interfaces::msg::WheelVelocities::_right_wheel_velocity_type arg)
  {
    msg_.right_wheel_velocity = std::move(arg);
    return Init_WheelVelocities_left_wheel_velocity(msg_);
  }

private:
  ::cooing_code_interfaces::msg::WheelVelocities msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cooing_code_interfaces::msg::WheelVelocities>()
{
  return cooing_code_interfaces::msg::builder::Init_WheelVelocities_right_wheel_velocity();
}

}  // namespace cooing_code_interfaces

#endif  // COOING_CODE_INTERFACES__MSG__DETAIL__WHEEL_VELOCITIES__BUILDER_HPP_
