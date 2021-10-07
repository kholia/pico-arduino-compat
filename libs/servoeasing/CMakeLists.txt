add_library(pac-servoeasing INTERFACE)

target_sources(pac-servoeasing INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/src/ServoEasing.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/src/LightweightServo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/EndPositionsTest/ADCUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/QuadrupedControl/Commands.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/QuadrupedControl/ADCUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/QuadrupedControl/QuadrupedServoControl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/QuadrupedControl/UserCommands.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/QuadrupedControl/QuadrupedMovements.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/RobotArmControl/Commands.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/RobotArmControl/RobotArmKinematics.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/RobotArmControl/ADCUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/RobotArmControl/RobotArmServoControl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/SpeedTest/ADCUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/RobotArmControl/EasyButtonAtInt01.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/src/LightweightServo.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/src/ServoEasing.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/src/digitalWriteFast.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/TwoServos/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/PCA9685_Expander/build_opt.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/OneServo/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/ContinuousRotatingServo/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/AsymmetricEasing/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/EndPositionsTest/ADCUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/EndPositionsTest/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/QuadrupedControl/ADCUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/QuadrupedControl/QuadrupedMovements.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/QuadrupedControl/QuadrupedServoConfiguration.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/QuadrupedControl/Commands.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/QuadrupedControl/QuadrupedServoControl.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/QuadrupedControl/QuadrupedControl.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/RobotArmControl/ADCUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/RobotArmControl/RobotArmControl.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/RobotArmControl/RobotArmServoControl.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/RobotArmControl/Commands.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/RobotArmControl/RobotArmServoConfiguration.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/RobotArmControl/EasyButtonAtInt01.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/RobotArmControl/RobotArmKinematics.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/Simple/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/CatMover/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/SymmetricEasing/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/ThreeServos/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/PCA9685_ExpanderAndServo/build_opt.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/LightweightServoExample/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/PCA9685_ExpanderFor32Servos/build_opt.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/SpeedTest/ADCUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/examples/SpeedTest/PinDefinitionsAndMore.h"
)

target_include_directories(pac-servoeasing INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ServoEasing/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-servoeasing INTERFACE
    arduino-compat
)
