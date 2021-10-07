add_library(pac-ustepper-s-lite INTERFACE)

target_sources(pac-ustepper-s-lite INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/uStepper-S-lite/src/i2cMaster.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uStepper-S-lite/src/uStepperSLite.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uStepper-S-lite/src/uStepperServo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uStepper-S-lite/src/TMC2208.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uStepper-S-lite/src/uStepperServo.h"
  "${CMAKE_CURRENT_LIST_DIR}/uStepper-S-lite/src/TMC2208.h"
  "${CMAKE_CURRENT_LIST_DIR}/uStepper-S-lite/src/uStepperSLite.h"
  "${CMAKE_CURRENT_LIST_DIR}/uStepper-S-lite/src/i2cMaster.h"
)

target_include_directories(pac-ustepper-s-lite INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/uStepper-S-lite/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ustepper-s-lite INTERFACE
    arduino-compat
)
