add_library(esp-steppermotor-server INTERFACE)

target_sources(esp-steppermotor-server INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP-StepperMotor-Server/src/ESPStepperMotorServer_Logger.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-StepperMotor-Server/src/ESPStepperMotorServer_MotionController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-StepperMotor-Server/src/ESPStepperMotorServer_RestAPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-StepperMotor-Server/src/ESPStepperMotorServer_Configuration.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-StepperMotor-Server/src/ESPStepperMotorServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-StepperMotor-Server/src/ESPStepperMotorServer_StepperConfiguration.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-StepperMotor-Server/src/ESPStepperMotorServer_CLI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-StepperMotor-Server/src/ESPStepperMotorServer_WebInterface.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-StepperMotor-Server/src/ESPStepperMotorServer_PositionSwitch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-StepperMotor-Server/src/ESPStepperMotorServer_MacroAction.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-StepperMotor-Server/src/ESPStepperMotorServer_RotaryEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-StepperMotor-Server/src/ESPStepperMotorServer_WebInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-StepperMotor-Server/src/ESPStepperMotorServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-StepperMotor-Server/src/ESPStepperMotorServer_MotionController.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-StepperMotor-Server/src/ESPStepperMotorServer_MacroAction.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-StepperMotor-Server/src/ESPStepperMotorServer_Configuration.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-StepperMotor-Server/src/ESPStepperMotorServer_CLI.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-StepperMotor-Server/src/ESPStepperMotorServer_Logger.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-StepperMotor-Server/src/ESPStepperMotorServer_StepperConfiguration.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-StepperMotor-Server/src/ESPStepperMotorServer_RestAPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-StepperMotor-Server/src/ESPStepperMotorServer_RotaryEncoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-StepperMotor-Server/src/ESPStepperMotorServer_PositionSwitch.h"
)

target_include_directories(esp-steppermotor-server INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP-StepperMotor-Server/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp-steppermotor-server INTERFACE
    arduino-compat
)
