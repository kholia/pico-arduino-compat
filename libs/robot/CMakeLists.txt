add_library(pac-robot INTERFACE)

target_sources(pac-robot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Robot/Robot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot/Robot.h"
)

target_include_directories(pac-robot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Robot"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-robot INTERFACE
    arduino-compat
)
