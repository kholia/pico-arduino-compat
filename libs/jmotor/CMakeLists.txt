add_library(jmotor INTERFACE)

target_sources(jmotor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JMotor.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JTwoDTransform.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JDrivetrain/JDrivetrainTwoSide.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JDrivetrain/JDrivetrain.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JMotorController/JMotorControllerBasic.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JMotorController/JMotorControllerBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JMotorController/JMotorController.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JMotorController/JMotorControllerClosed.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JMotorController/JMotorControllerOpen.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JMotorController/JControlLoop/JControlLoop.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JMotorController/JControlLoop/JControlLoopBasic.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JServoController/JServoController.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JServoController/JServoCurrentSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JServoController/JServoControllerStallProtected.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JServoController/JServoControllerGentle.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JServoController/JServoStallSensing.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JServoController/JServoControllerAdvanced.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JEncoder/JEncoderPWMAbsoluteAttachInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JEncoder/JEncoderPWMAbsolutePinChange.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JEncoder/JEncoderSingle.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JEncoder/JEncoderAS5048bI2C.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JEncoder/JEncoderSingleAttachInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JEncoder/JEncoderQuadratureAttachInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JEncoder/JEncoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JEncoder/JEncoderPWMAbsolute.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JEncoder/JEncoderQuadrature.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JEncoder/JEncoderSinglePinChange.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JEncoder/JEncoderQuadraturePinChange.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JMotorDriver/JMotorDriverEsp32PWMDir.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JMotorDriver/JMotorDriverAvrPWM.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JMotorDriver/JMotorDriverEsp32L293.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JMotorDriver/JMotorDriverAvrL293.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JMotorDriver/JMotorDriverDual.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JMotorDriver/JMotorDriverAvrPWMDir.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JMotorDriver/JMotorDriverServoDual.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JMotorDriver/JMotorDriverEsp32Servo.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JMotorDriver/JMotorDriverServoAdvanced.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JMotorDriver/JMotorDriverEsp32PWM.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JMotorDriver/JMotorDriverServoAdvancedDual.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JMotorDriver/JMotorDriverAvrServo.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JMotorDriver/JMotorDriverServo.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JMotorDriver/JMotorDriver.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JDrivetrainController/JDrivetrainControllerBasic.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JDrivetrainController/JDrivetrainController.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JMotorCompensator/JMotorCompStandard.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JMotorCompensator/JVoltageCompAdjust.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JMotorCompensator/JDeadzoneRemover.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JMotorCompensator/JMotorCompDirect.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JMotorCompensator/JMotorCompBasic.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JMotorCompensator/JVoltageCompConst.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JMotorCompensator/JMotorCompensator.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JMotorCompensator/JVoltageCompensator.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMotor/src/JMotorCompensator/JVoltageCompMeasure.h"
)

target_include_directories(jmotor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/JMotor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(jmotor INTERFACE
    arduino-compat
)
