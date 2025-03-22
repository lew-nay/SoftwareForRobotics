// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cooing_code_interfaces:srv/TurnRobotOn.idl
// generated code does not contain a copyright notice

#ifndef COOING_CODE_INTERFACES__SRV__DETAIL__TURN_ROBOT_ON__BUILDER_HPP_
#define COOING_CODE_INTERFACES__SRV__DETAIL__TURN_ROBOT_ON__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cooing_code_interfaces/srv/detail/turn_robot_on__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cooing_code_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cooing_code_interfaces::srv::TurnRobotOn_Request>()
{
  return ::cooing_code_interfaces::srv::TurnRobotOn_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace cooing_code_interfaces


namespace cooing_code_interfaces
{

namespace srv
{

namespace builder
{

class Init_TurnRobotOn_Response_success
{
public:
  Init_TurnRobotOn_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cooing_code_interfaces::srv::TurnRobotOn_Response success(::cooing_code_interfaces::srv::TurnRobotOn_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cooing_code_interfaces::srv::TurnRobotOn_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cooing_code_interfaces::srv::TurnRobotOn_Response>()
{
  return cooing_code_interfaces::srv::builder::Init_TurnRobotOn_Response_success();
}

}  // namespace cooing_code_interfaces

#endif  // COOING_CODE_INTERFACES__SRV__DETAIL__TURN_ROBOT_ON__BUILDER_HPP_
