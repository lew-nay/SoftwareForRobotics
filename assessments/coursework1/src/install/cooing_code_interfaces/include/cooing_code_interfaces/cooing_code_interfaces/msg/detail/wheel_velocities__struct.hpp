// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cooing_code_interfaces:msg/WheelVelocities.idl
// generated code does not contain a copyright notice

#ifndef COOING_CODE_INTERFACES__MSG__DETAIL__WHEEL_VELOCITIES__STRUCT_HPP_
#define COOING_CODE_INTERFACES__MSG__DETAIL__WHEEL_VELOCITIES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__cooing_code_interfaces__msg__WheelVelocities __attribute__((deprecated))
#else
# define DEPRECATED__cooing_code_interfaces__msg__WheelVelocities __declspec(deprecated)
#endif

namespace cooing_code_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelVelocities_
{
  using Type = WheelVelocities_<ContainerAllocator>;

  explicit WheelVelocities_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->right_wheel_velocity = 0.0;
      this->left_wheel_velocity = 0.0;
    }
  }

  explicit WheelVelocities_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->right_wheel_velocity = 0.0;
      this->left_wheel_velocity = 0.0;
    }
  }

  // field types and members
  using _right_wheel_velocity_type =
    double;
  _right_wheel_velocity_type right_wheel_velocity;
  using _left_wheel_velocity_type =
    double;
  _left_wheel_velocity_type left_wheel_velocity;

  // setters for named parameter idiom
  Type & set__right_wheel_velocity(
    const double & _arg)
  {
    this->right_wheel_velocity = _arg;
    return *this;
  }
  Type & set__left_wheel_velocity(
    const double & _arg)
  {
    this->left_wheel_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cooing_code_interfaces::msg::WheelVelocities_<ContainerAllocator> *;
  using ConstRawPtr =
    const cooing_code_interfaces::msg::WheelVelocities_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cooing_code_interfaces::msg::WheelVelocities_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cooing_code_interfaces::msg::WheelVelocities_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cooing_code_interfaces::msg::WheelVelocities_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cooing_code_interfaces::msg::WheelVelocities_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cooing_code_interfaces::msg::WheelVelocities_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cooing_code_interfaces::msg::WheelVelocities_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cooing_code_interfaces::msg::WheelVelocities_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cooing_code_interfaces::msg::WheelVelocities_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cooing_code_interfaces__msg__WheelVelocities
    std::shared_ptr<cooing_code_interfaces::msg::WheelVelocities_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cooing_code_interfaces__msg__WheelVelocities
    std::shared_ptr<cooing_code_interfaces::msg::WheelVelocities_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelVelocities_ & other) const
  {
    if (this->right_wheel_velocity != other.right_wheel_velocity) {
      return false;
    }
    if (this->left_wheel_velocity != other.left_wheel_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelVelocities_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelVelocities_

// alias to use template instance with default allocator
using WheelVelocities =
  cooing_code_interfaces::msg::WheelVelocities_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cooing_code_interfaces

#endif  // COOING_CODE_INTERFACES__MSG__DETAIL__WHEEL_VELOCITIES__STRUCT_HPP_
