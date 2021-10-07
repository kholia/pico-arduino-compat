add_library(pac-zumoautomation INTERFACE)

target_sources(pac-zumoautomation INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Zumo-Automation/Timer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Zumo-Automation/DriveShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Zumo-Automation/DistanceSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Zumo-Automation/GeneralBuzzer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Zumo-Automation/ESPServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Zumo-Automation/Accel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Zumo-Automation/MotorsGeneral.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Zumo-Automation/LineCalibrator.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Zumo-Automation/LineGlobal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Zumo-Automation/MusicPlayer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Zumo-Automation/LineThreshold.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Zumo-Automation/Sorter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Zumo-Automation/LineShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Zumo-Automation/Accel.h"
  "${CMAKE_CURRENT_LIST_DIR}/Zumo-Automation/ZumoAutomation.h"
  "${CMAKE_CURRENT_LIST_DIR}/Zumo-Automation/Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Zumo-Automation/LineGlobal.h"
  "${CMAKE_CURRENT_LIST_DIR}/Zumo-Automation/LineShield.h"
  "${CMAKE_CURRENT_LIST_DIR}/Zumo-Automation/ESPServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Zumo-Automation/MusicPlayer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Zumo-Automation/LineCalibrator.h"
  "${CMAKE_CURRENT_LIST_DIR}/Zumo-Automation/DistanceSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/Zumo-Automation/DriveShield.h"
  "${CMAKE_CURRENT_LIST_DIR}/Zumo-Automation/MotorsGeneral.h"
  "${CMAKE_CURRENT_LIST_DIR}/Zumo-Automation/LineThreshold.h"
  "${CMAKE_CURRENT_LIST_DIR}/Zumo-Automation/Sorter.h"
  "${CMAKE_CURRENT_LIST_DIR}/Zumo-Automation/GeneralBuzzer.h"
)

target_include_directories(pac-zumoautomation INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Zumo-Automation"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-zumoautomation INTERFACE
    arduino-compat
)
