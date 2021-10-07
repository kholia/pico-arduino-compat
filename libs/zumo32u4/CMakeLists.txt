add_library(pac-zumo32u4 INTERFACE)

target_sources(pac-zumo32u4 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/L3G.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/Pushbutton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/PololuHD44780.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/Zumo32U4Encoders.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/PololuBuzzer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/QTRSensors.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/Zumo32U4IRPulses.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/Zumo32U4ProximitySensors.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/LSM303.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/Zumo32U4IMU.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/Zumo32U4Motors.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/examples/RotationResist/TurnSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/examples/MazeSolver/TurnSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/examples/MazeSolver/GridMovement.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/Zumo32U4Encoders.h"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/Zumo32U4.h"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/Zumo32U4IMU.h"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/Zumo32U4Buzzer.h"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/FastGPIO.h"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/Pushbutton.h"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/Zumo32U4Buttons.h"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/QTRSensors.h"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/PololuHD44780.h"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/Zumo32U4IRPulses.h"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/Zumo32U4LineSensors.h"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/Zumo32U4LCD.h"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/PololuBuzzer.h"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/LSM303.h"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/L3G.h"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/Zumo32U4ProximitySensors.h"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/USBPause.h"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/Zumo32U4Motors.h"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/examples/RotationResist/TurnSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/examples/MazeSolver/GridMovement.h"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/examples/MazeSolver/TurnSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/examples/RemoteControl/RemoteConstants.h"
  "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library/examples/RemoteControl/RemoteDecoder.h"
)

target_include_directories(pac-zumo32u4 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/zumo-32u4-arduino-library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-zumo32u4 INTERFACE
    arduino-compat
)
