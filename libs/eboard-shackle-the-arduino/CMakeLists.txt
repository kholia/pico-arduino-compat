add_library(pac-eboard-shackle-the-arduino INTERFACE)

target_sources(pac-eboard-shackle-the-arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/eBoard/eBoard.h"
  "${CMAKE_CURRENT_LIST_DIR}/eBoard/source/eagle_PreprocessorControl.h"
  "${CMAKE_CURRENT_LIST_DIR}/eBoard/source/eagle_Checks.h"
  "${CMAKE_CURRENT_LIST_DIR}/eBoard/source/eagle_Comfort.h"
  "${CMAKE_CURRENT_LIST_DIR}/eBoard/source/eagle_NeoPixel.h"
  "${CMAKE_CURRENT_LIST_DIR}/eBoard/source/eagle_ReptTask.h"
  "${CMAKE_CURRENT_LIST_DIR}/eBoard/source/eagle_RB14Scan.h"
  "${CMAKE_CURRENT_LIST_DIR}/eBoard/source/eagle_LCD.h"
  "${CMAKE_CURRENT_LIST_DIR}/eBoard/source/eagle_I2C.h"
  "${CMAKE_CURRENT_LIST_DIR}/eBoard/source/eagle_SPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/eBoard/source/eagle_SoccerBoard.h"
  "${CMAKE_CURRENT_LIST_DIR}/eBoard/source/eagle_Assert.h"
  "${CMAKE_CURRENT_LIST_DIR}/eBoard/source/eagle_Bluetooth.h"
  "${CMAKE_CURRENT_LIST_DIR}/eBoard/source/eagle_AX12Servo.h"
  "${CMAKE_CURRENT_LIST_DIR}/eBoard/source/eagle_PinCtrl.h"
  "${CMAKE_CURRENT_LIST_DIR}/eBoard/source/eagle_I2CInOut.h"
  "${CMAKE_CURRENT_LIST_DIR}/eBoard/source/eagle_Twi.h"
  "${CMAKE_CURRENT_LIST_DIR}/eBoard/source/eagle_TwoWire.h"
  "${CMAKE_CURRENT_LIST_DIR}/eBoard/source/eagle_SoftwareSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/eBoard/source/eagle_Servo.h"
  "${CMAKE_CURRENT_LIST_DIR}/eBoard/source/eagle_DynamixelBoard.h"
  "${CMAKE_CURRENT_LIST_DIR}/eBoard/source/eagle_ServoCds55.h"
  "${CMAKE_CURRENT_LIST_DIR}/eBoard/source/eagle_HelpMot.h"
  "${CMAKE_CURRENT_LIST_DIR}/eBoard/source/eagle_Setup.h"
  "${CMAKE_CURRENT_LIST_DIR}/eBoard/source/eagle_ShiftExt.h"
)

target_include_directories(pac-eboard-shackle-the-arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/eBoard"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-eboard-shackle-the-arduino INTERFACE
    arduino-compat
)
