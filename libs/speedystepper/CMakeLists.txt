add_library(speedystepper INTERFACE)

target_sources(speedystepper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SpeedyStepper/src/SpeedyStepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SpeedyStepper/src/SpeedyStepper.h"
)

target_include_directories(speedystepper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SpeedyStepper/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(speedystepper INTERFACE
    arduino-compat
)
