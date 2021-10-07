add_library(pac-dabbleesp32 INTERFACE)

target_sources(pac-dabbleesp32 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/TerminalModule.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/LedControlModule.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/MusicModule.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/ColorDetectorModule.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/SensorModule.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/InternetModule.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/NotifyAndSMSModule.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/PinMonitorModule.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/ModuleParent.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/DabbleESP32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/esp32BLEUtilities.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/motorControls.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/DabblePrint.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/DataLoggerModule.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/DabblePrintln.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/GamePadModule.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/DabbleInputs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/CameraModule.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/DataLoggerModule.h"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/InternetModule.h"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/DabbleESP32.h"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/GamePadModule.h"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/ColorDetectorModule.h"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/NotifyAndSMSModule.h"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/ModuleParent.h"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/MusicModule.h"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/DabbleInputs.h"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/DabblePrint.h"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/ModuleIds.h"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/motorControls.h"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/CircularBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/LedControlModule.h"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/CameraModule.h"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/IncludedModulesDefines.h"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/ModuleInstantiation.h"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/ModuleSelection.h"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/esp32BLEUtilities.h"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/DabblePrintln.h"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/TerminalModule.h"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/SensorModule.h"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/PinMonitorModule.h"
  "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src/ModuleIncludes.h"
)

target_include_directories(pac-dabbleesp32 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DabbleESP32/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dabbleesp32 INTERFACE
    arduino-compat
)
