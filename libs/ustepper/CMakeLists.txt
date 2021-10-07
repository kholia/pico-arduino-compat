add_library(pac-ustepper INTERFACE)

target_sources(pac-ustepper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/uStepper/src/uStepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uStepper/src/uStepperServo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uStepper/src/uStepperServo.h"
  "${CMAKE_CURRENT_LIST_DIR}/uStepper/src/uStepper.h"
)

target_include_directories(pac-ustepper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/uStepper/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ustepper INTERFACE
    arduino-compat
)
