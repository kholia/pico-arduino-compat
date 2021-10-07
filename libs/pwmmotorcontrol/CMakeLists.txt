add_library(pac-pwmmotorcontrol INTERFACE)

target_sources(pac-pwmmotorcontrol INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/src/EncoderMotor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/src/IMUCarData.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/src/PWMDcMotor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/src/CarPWMMotorControl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/examples/RobotCarFollowerSimple/HCSR04.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/examples/RobotCarFollower/HCSR04.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/examples/RobotCarBasic/HCSR04.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/examples/RobotCarBlueDisplay/AutonomousDrive.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/examples/RobotCarBlueDisplay/PathInfoPage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/examples/RobotCarBlueDisplay/Distance.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/examples/RobotCarBlueDisplay/TestPage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/examples/RobotCarBlueDisplay/AutonomousDrivePage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/examples/RobotCarBlueDisplay/ADCUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/examples/RobotCarBlueDisplay/BTSensorDrivePage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/examples/RobotCarBlueDisplay/HCSR04.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/examples/RobotCarBlueDisplay/HomePage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/examples/RobotCarBlueDisplay/RobotCarCommonGui.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/examples/RobotCarBlueDisplay/LightweightServo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/src/MPU6050Defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/src/PWMDcMotor.h"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/src/DebugLevel.h"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/src/CarPWMMotorControl.h"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/src/LongUnion.h"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/src/IMUCarData.h"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/src/digitalWriteFast.h"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/src/EncoderMotor.h"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/examples/RobotCarFollowerSimple/HCSR04.h"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/examples/RobotCarFollower/pitches.h"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/examples/RobotCarFollower/HCSR04.h"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/examples/RobotCarBasic/HCSR04.h"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/examples/RobotCarBlueDisplay/ADCUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/examples/RobotCarBlueDisplay/Distance.h"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/examples/RobotCarBlueDisplay/AutonomousDrive.h"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/examples/RobotCarBlueDisplay/RobotCarGui.h"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/examples/RobotCarBlueDisplay/RobotCar.h"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/examples/RobotCarBlueDisplay/HCSR04.h"
  "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/examples/RobotCarBlueDisplay/LightweightServo.h"
)

target_include_directories(pac-pwmmotorcontrol INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PWMMotorControl/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pwmmotorcontrol INTERFACE
    arduino-compat
)
