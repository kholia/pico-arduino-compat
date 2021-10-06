add_library(gobbitlinecommand INTERFACE)

target_sources(gobbitlinecommand INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Gobbit_Line_Commander/src/GobbitLineCommand.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Gobbit_Line_Commander/src/Adafruit_Motor_Shield_V2_Library/Adafruit_MotorShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Gobbit_Line_Commander/src/Adafruit_Motor_Shield_V2_Library/utility/Adafruit_MS_PWMServoDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Gobbit_Line_Commander/src/QTRSensors/QTRSensors.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Gobbit_Line_Commander/src/GobbitLineCommand.h"
  "${CMAKE_CURRENT_LIST_DIR}/Gobbit_Line_Commander/src/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/Gobbit_Line_Commander/src/AdafruitMSDefaults.h"
  "${CMAKE_CURRENT_LIST_DIR}/Gobbit_Line_Commander/src/ArdumotoDefaults.h"
  "${CMAKE_CURRENT_LIST_DIR}/Gobbit_Line_Commander/src/Adafruit_Motor_Shield_V2_Library/Adafruit_MotorShield.h"
  "${CMAKE_CURRENT_LIST_DIR}/Gobbit_Line_Commander/src/Adafruit_Motor_Shield_V2_Library/utility/Adafruit_MS_PWMServoDriver.h"
  "${CMAKE_CURRENT_LIST_DIR}/Gobbit_Line_Commander/src/QTRSensors/QTRSensors.h"
  "${CMAKE_CURRENT_LIST_DIR}/Gobbit_Line_Commander/examples/RaceTrack/RaceTrackRobotsV2/IRcodes.h"
  "${CMAKE_CURRENT_LIST_DIR}/Gobbit_Line_Commander/examples/RaceTrack/RaceTrackRobotsV2/Config.h"
  "${CMAKE_CURRENT_LIST_DIR}/Gobbit_Line_Commander/examples/ScoutBotics/Level_2/GLC_SampleIRcodes/MTA.h"
  "${CMAKE_CURRENT_LIST_DIR}/Gobbit_Line_Commander/examples/ScoutBotics/Level_2/GLC_SampleIRcodes/DirectTV_RC23.h"
  "${CMAKE_CURRENT_LIST_DIR}/Gobbit_Line_Commander/examples/ScoutBotics/Level_2/GLC_SampleIRcodes/Sanyo_FXML.h"
  "${CMAKE_CURRENT_LIST_DIR}/Gobbit_Line_Commander/examples/ScoutBotics/Level_2/GLC_SampleIRcodes/DirectTV_RC73.h"
  "${CMAKE_CURRENT_LIST_DIR}/Gobbit_Line_Commander/examples/ScoutBotics/Level_2/GLC_IRcontrol/IRcodes.h"
  "${CMAKE_CURRENT_LIST_DIR}/Gobbit_Line_Commander/examples/ScoutBotics/Level_2/GLC_IRcontrol/Config.h"
)

target_include_directories(gobbitlinecommand INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Gobbit_Line_Commander/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gobbitlinecommand INTERFACE
    arduino-compat
)
