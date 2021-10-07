add_library(pac-rivers-engineering INTERFACE)

target_sources(pac-rivers-engineering INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/RiversTime.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/RiversMotor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/RiversLCD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/DFRobot_LCD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/RiversServomotor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/RiversColorSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/RiversTFLuna.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/RiversIO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/RiversAltimeter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/RiversString.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/RiversTFTDisplay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/RiversWirelessInput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/RiversNeopixel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/RiversDistanceSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/Diagnostic.h"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/RiversAltimeter.h"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/RiversIO.h"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/RiversSerialWrapper.h"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/RiversTFLuna.h"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/RiversRobotics.h"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/RiversString.h"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/RiversWirelessProtocol.h"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/DFRobot_LCD.h"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/RiversTFTDisplay.h"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/RiversEngineering.h"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/RiversNeopixel.h"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/RiversRobot.h"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/RiversDistanceSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/RiversMotor.h"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/RiversWirelessInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/RiversLCD.h"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/RiversTime.h"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/RiversServomotor.h"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/RiversUltrasonic.h"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/RiversColorSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src/RiversNotes.h"
)

target_include_directories(pac-rivers-engineering INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RiversEngineering/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-rivers-engineering INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
