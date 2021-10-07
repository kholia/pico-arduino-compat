add_library(pac-speedystepper INTERFACE)

target_sources(pac-speedystepper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SpeedyStepper/src/SpeedyStepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SpeedyStepper/src/SpeedyStepper.h"
)

target_include_directories(pac-speedystepper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SpeedyStepper/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-speedystepper INTERFACE
    arduino-compat
)
