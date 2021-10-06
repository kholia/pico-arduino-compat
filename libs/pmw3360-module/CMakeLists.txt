add_library(pmw3360-module INTERFACE)

target_sources(pmw3360-module INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PMW3360/src/PMW3360.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PMW3360/src/PMW3360.h"
)

target_include_directories(pmw3360-module INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PMW3360/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pmw3360-module INTERFACE
    arduino-compat
)
