add_library(dabble INTERFACE)

target_sources(dabble INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/TerminalModule.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/LedControlModule.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/MusicModule.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/ColorDetectorModule.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/SensorModule.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/InternetModule.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/NotifyAndSMSModule.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/PinMonitorModule.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/ModuleParent.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/Dabble.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/motorControls.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/DabblePrint.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/DataLoggerModule.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/SoftwareSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/DabblePrintln.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/GamePadModule.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/DabbleInputs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/CameraModule.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/examples/01. evive/Oscilloscope/OscilloscopeModule.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/examples/02. Uno Nano Mega/Oscilloscope/OscilloscopeModule.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/DataLoggerModule.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/InternetModule.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/SoftwareSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/GamePadModule.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/ColorDetectorModule.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/NotifyAndSMSModule.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/ModuleParent.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/MusicModule.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/DabbleInputs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/DabblePrint.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/ModuleIds.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/motorControls.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/Bitmaps.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/CircularBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/LedControlModule.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/CameraModule.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/Dabble.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/IncludedModulesDefines.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/EvivePins.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/ModuleInstantiation.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/ModuleSelection.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/DabblePrintln.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/TerminalModule.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/SensorModule.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/PinMonitorModule.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/src/ModuleIncludes.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/examples/01. evive/Oscilloscope/OscilloscopeModule.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dabble/examples/02. Uno Nano Mega/Oscilloscope/OscilloscopeModule.h"
)

target_include_directories(dabble INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Dabble/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dabble INTERFACE
    arduino-compat
)
