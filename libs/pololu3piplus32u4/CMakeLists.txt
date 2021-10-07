add_library(pac-pololu3piplus32u4 INTERFACE)

target_sources(pac-pololu3piplus32u4 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/pololu-3pi-plus-32u4-arduino-library/src/Pololu3piPlus32U4Motors.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-3pi-plus-32u4-arduino-library/src/Pololu3piPlus32U4IMU.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-3pi-plus-32u4-arduino-library/src/Pololu3piPlus32U4BumpSensors.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-3pi-plus-32u4-arduino-library/src/Pololu3piPlus32U4Encoders.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-3pi-plus-32u4-arduino-library/src/Pololu3piPlus32U4LineSensors.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-3pi-plus-32u4-arduino-library/examples/DemoForOLEDVersion/splash.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-3pi-plus-32u4-arduino-library/examples/DemoForOLEDVersion/font.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-3pi-plus-32u4-arduino-library/examples/LineFollowerPID/font.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-3pi-plus-32u4-arduino-library/examples/LineFollowerSimple/font.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-3pi-plus-32u4-arduino-library/src/Pololu3piPlus32U4BumpSensors.h"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-3pi-plus-32u4-arduino-library/src/Pololu3piPlus32U4LCD.h"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-3pi-plus-32u4-arduino-library/src/Pololu3piPlus32U4Motors.h"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-3pi-plus-32u4-arduino-library/src/Pololu3piPlus32U4OLED.h"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-3pi-plus-32u4-arduino-library/src/Pololu3piPlus32U4IMU.h"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-3pi-plus-32u4-arduino-library/src/Pololu3piPlus32U4Buttons.h"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-3pi-plus-32u4-arduino-library/src/Pololu3piPlus32U4Encoders.h"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-3pi-plus-32u4-arduino-library/src/Pololu3piPlus32U4.h"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-3pi-plus-32u4-arduino-library/src/Pololu3piPlus32U4Buzzer.h"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-3pi-plus-32u4-arduino-library/src/Pololu3piPlus32U4IMU_declaration.h"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-3pi-plus-32u4-arduino-library/src/Pololu3piPlus32U4LineSensors.h"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-3pi-plus-32u4-arduino-library/examples/DemoForOLEDVersion/pololu_3pi_plus_splash.h"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-3pi-plus-32u4-arduino-library/examples/DemoForOLEDVersion/extended_lcd_font.h"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-3pi-plus-32u4-arduino-library/examples/DemoForOLEDVersion/splash.h"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-3pi-plus-32u4-arduino-library/examples/LineFollowerPID/extended_lcd_font.h"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-3pi-plus-32u4-arduino-library/examples/RotationResist/TurnSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-3pi-plus-32u4-arduino-library/examples/LineFollowerSimple/extended_lcd_font.h"
)

target_include_directories(pac-pololu3piplus32u4 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/pololu-3pi-plus-32u4-arduino-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pololu3piplus32u4 INTERFACE
    arduino-compat
)
