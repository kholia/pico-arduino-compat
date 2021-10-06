add_library(ustepper-s INTERFACE)

target_sources(ustepper-s INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/uStepperS/Examples/GYROBalance/TinyMPU6050.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uStepperS/Examples/SWiFiGUI/gcode.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uStepperS/src/uStepperServo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uStepperS/src/uStepperS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uStepperS/src/uStepperDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uStepperS/src/uStepperEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uStepperS/Examples/GYROBalance/TinyMPU6050.h"
  "${CMAKE_CURRENT_LIST_DIR}/uStepperS/Examples/SWiFiGUI/gcode.h"
  "${CMAKE_CURRENT_LIST_DIR}/uStepperS/Examples/SWiFiGUI/constants.h"
  "${CMAKE_CURRENT_LIST_DIR}/uStepperS/src/uStepperServo.h"
  "${CMAKE_CURRENT_LIST_DIR}/uStepperS/src/uStepperDriver.h"
  "${CMAKE_CURRENT_LIST_DIR}/uStepperS/src/uStepperS.h"
  "${CMAKE_CURRENT_LIST_DIR}/uStepperS/src/uStepperEncoder.h"
)

target_include_directories(ustepper-s INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/uStepperS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ustepper-s INTERFACE
    arduino-compat
)
