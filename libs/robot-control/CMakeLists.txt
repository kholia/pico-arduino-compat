add_library(robot-control INTERFACE)

target_sources(robot-control INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/lcd.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/RobotSdCard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/EasyTransfer2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/EEPROM_I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/SdCard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/communication.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/Fat16.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/ArduinoRobot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/information.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/Arduino_LCD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/keyboard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/Squawk.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/Melody.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/Sensors.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/Multiplexer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/helper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/Motors.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/SquawkSD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/Compass.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/utility/VirtualKeyboard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/utility/Adafruit_GFX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/utility/RobotTextManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/glcdfont.c"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/SdCard.h"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/SdInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/Fat16mainpage.h"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/ArduinoRobot.h"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/Squawk.h"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/Arduino_LCD.h"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/Fat16.h"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/EEPROM_I2C.h"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/EasyTransfer2.h"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/SquawkSD.h"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/Multiplexer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/Fat16util.h"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/Fat16Config.h"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/FatStructs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/Compass.h"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/utility/RobotTextManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/utility/Adafruit_GFX.h"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/utility/scripts_Hello_User.h"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src/utility/VirtualKeyboard.h"
  "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/examples/explore/R06_Wheel_Calibration/scripts_library.h"
)

target_include_directories(robot-control INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Robot_Control/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(robot-control INTERFACE
    arduino-compat
    adafruit-gfx-library
)
