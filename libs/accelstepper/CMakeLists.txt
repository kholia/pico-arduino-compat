add_library(accelstepper INTERFACE)

target_sources(accelstepper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AccelStepper/src/MultiStepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AccelStepper/src/AccelStepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AccelStepper/src/AccelStepper.h"
  "${CMAKE_CURRENT_LIST_DIR}/AccelStepper/src/MultiStepper.h"
)

target_include_directories(accelstepper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AccelStepper/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(accelstepper INTERFACE
    arduino-compat
)
