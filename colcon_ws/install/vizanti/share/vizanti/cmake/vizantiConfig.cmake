# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_vizanti_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED vizanti_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(vizanti_FOUND FALSE)
  elseif(NOT vizanti_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(vizanti_FOUND FALSE)
  endif()
  return()
endif()
set(_vizanti_CONFIG_INCLUDED TRUE)

# output package information
if(NOT vizanti_FIND_QUIETLY)
  message(STATUS "Found vizanti: 0.1.0 (${vizanti_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'vizanti' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${vizanti_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(vizanti_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${vizanti_DIR}/${_extra}")
endforeach()
