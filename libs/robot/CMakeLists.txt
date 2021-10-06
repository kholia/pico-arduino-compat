add_library(robot INTERFACE)

target_sources(robot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Robot/Robot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot/Robot.h"
)

target_include_directories(robot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Robot"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(robot INTERFACE
    arduino-compat
)
