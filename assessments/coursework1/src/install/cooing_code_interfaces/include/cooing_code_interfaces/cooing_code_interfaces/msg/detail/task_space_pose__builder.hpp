// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cooing_code_interfaces:msg/TaskSpacePose.idl
// generated code does not contain a copyright notice

#ifndef COOING_CODE_INTERFACES__MSG__DETAIL__TASK_SPACE_POSE__BUILDER_HPP_
#define COOING_CODE_INTERFACES__MSG__DETAIL__TASK_SPACE_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cooing_code_interfaces/msg/detail/task_space_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cooing_code_interfaces
{

namespace msg
{

namespace builder
{

class Init_TaskSpacePose_phi_z
{
public:
  explicit Init_TaskSpacePose_phi_z(::cooing_code_interfaces::msg::TaskSpacePose & msg)
  : msg_(msg)
  {}
  ::cooing_code_interfaces::msg::TaskSpacePose phi_z(::cooing_code_interfaces::msg::TaskSpacePose::_phi_z_type arg)
  {
    msg_.phi_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cooing_code_interfaces::msg::TaskSpacePose msg_;
};

class Init_TaskSpacePose_y
{
public:
  explicit Init_TaskSpacePose_y(::cooing_code_interfaces::msg::TaskSpacePose & msg)
  : msg_(msg)
  {}
  Init_TaskSpacePose_phi_z y(::cooing_code_interfaces::msg::TaskSpacePose::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_TaskSpacePose_phi_z(msg_);
  }

private:
  ::cooing_code_interfaces::msg::TaskSpacePose msg_;
};

class Init_TaskSpacePose_x
{
public:
  Init_TaskSpacePose_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskSpacePose_y x(::cooing_code_interfaces::msg::TaskSpacePose::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_TaskSpacePose_y(msg_);
  }

private:
  ::cooing_code_interfaces::msg::TaskSpacePose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cooing_code_interfaces::msg::TaskSpacePose>()
{
  return cooing_code_interfaces::msg::builder::Init_TaskSpacePose_x();
}

}  // namespace cooing_code_interfaces

#endif  // COOING_CODE_INTERFACES__MSG__DETAIL__TASK_SPACE_POSE__BUILDER_HPP_
