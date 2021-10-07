add_library(pac-dfrobotirposition INTERFACE)

target_sources(pac-dfrobotirposition INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DFRobotIRPosition/DFRobotIRPosition.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DFRobotIRPosition/DFRobotIRPosition.h"
)

target_include_directories(pac-dfrobotirposition INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DFRobotIRPosition"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dfrobotirposition INTERFACE
    arduino-compat
)
