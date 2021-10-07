add_library(pac-pmw3360-module INTERFACE)

target_sources(pac-pmw3360-module INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PMW3360/src/PMW3360.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PMW3360/src/PMW3360.h"
)

target_include_directories(pac-pmw3360-module INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PMW3360/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pmw3360-module INTERFACE
    arduino-compat
)
