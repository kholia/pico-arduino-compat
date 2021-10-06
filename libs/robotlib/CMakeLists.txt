add_library(robotlib INTERFACE)

target_sources(robotlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RobotLib/arduino/Arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RobotLib/src/BusInOut.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RobotLib/src/StepperMotor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RobotLib/src/PIDController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RobotLib/src/TrackingLoop.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RobotLib/src/Encoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RobotLib/src/QuadratureEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RobotLib/src/Motor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RobotLib/src/HallEffectEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RobotLib/catchlib/catch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RobotLib/tests/test_hall_encoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RobotLib/tests/test_tracking_loop.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RobotLib/tests/test_pid.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RobotLib/tests/test_stepper_motor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RobotLib/tests/test_utils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RobotLib/tests/test_motor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RobotLib/tests/test_businout.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RobotLib/tests/test_quadrature_encoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RobotLib/catchlib/catch.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/RobotLib/RobotLib.h"
  "${CMAKE_CURRENT_LIST_DIR}/RobotLib/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/RobotLib/src/QuadratureEncoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/RobotLib/src/HallEffectEncoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/RobotLib/src/TrackingLoop.h"
  "${CMAKE_CURRENT_LIST_DIR}/RobotLib/src/RobotLib.h"
  "${CMAKE_CURRENT_LIST_DIR}/RobotLib/src/StepperMotor.h"
  "${CMAKE_CURRENT_LIST_DIR}/RobotLib/src/Encoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/RobotLib/src/RobotLibUtil.h"
  "${CMAKE_CURRENT_LIST_DIR}/RobotLib/src/BusInOut.h"
  "${CMAKE_CURRENT_LIST_DIR}/RobotLib/src/Motor.h"
  "${CMAKE_CURRENT_LIST_DIR}/RobotLib/src/PIDController.h"
)

target_include_directories(robotlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RobotLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(robotlib INTERFACE
    arduino-compat
)
