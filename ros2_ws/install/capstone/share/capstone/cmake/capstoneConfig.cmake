# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_capstone_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED capstone_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(capstone_FOUND FALSE)
  elseif(NOT capstone_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(capstone_FOUND FALSE)
  endif()
  return()
endif()
set(_capstone_CONFIG_INCLUDED TRUE)

# output package information
if(NOT capstone_FIND_QUIETLY)
  message(STATUS "Found capstone: 0.0.0 (${capstone_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'capstone' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${capstone_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(capstone_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${capstone_DIR}/${_extra}")
endforeach()
