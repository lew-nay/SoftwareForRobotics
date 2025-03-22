# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_generator_c:cooing_code_interfaces__rosidl_generator_c;__rosidl_typesupport_fastrtps_c:cooing_code_interfaces__rosidl_typesupport_fastrtps_c;__rosidl_typesupport_introspection_c:cooing_code_interfaces__rosidl_typesupport_introspection_c;__rosidl_typesupport_c:cooing_code_interfaces__rosidl_typesupport_c;__rosidl_generator_cpp:cooing_code_interfaces__rosidl_generator_cpp;__rosidl_typesupport_fastrtps_cpp:cooing_code_interfaces__rosidl_typesupport_fastrtps_cpp;__rosidl_typesupport_introspection_cpp:cooing_code_interfaces__rosidl_typesupport_introspection_cpp;__rosidl_typesupport_cpp:cooing_code_interfaces__rosidl_typesupport_cpp;__rosidl_generator_py:cooing_code_interfaces__rosidl_generator_py")

# populate cooing_code_interfaces_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "cooing_code_interfaces::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'cooing_code_interfaces' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND cooing_code_interfaces_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
