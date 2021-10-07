add_library(pac-homespan INTERFACE)

target_sources(pac-homespan INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/src/Network.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/src/HAP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/src/Utils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/src/SRP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/src/HKDF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/src/HomeSpan.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/src/extras/RFControl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/src/extras/PwmPin.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/Other Examples/ServoControl/DEV_Identify.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/Other Examples/ServoControl/DEV_DoorsWindows.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/src/Settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/src/HAP.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/src/Network.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/src/HapQR.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/src/TLV.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/src/HAPConstants.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/src/Utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/src/Span.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/src/HomeSpan.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/src/SRP.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/src/Characteristics.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/src/HKDF.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/src/extras/PwmPin.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/src/extras/RFControl.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/examples/09-MessageLogging/DEV_Identify.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/examples/09-MessageLogging/DEV_LED.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/examples/18-SavingStatus/DEV_Identify.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/examples/18-SavingStatus/DEV_LED.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/examples/15-RealPushButtons/DEV_Identify.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/examples/15-RealPushButtons/DEV_LED.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/examples/06-DimmableLED/DEV_LED.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/examples/08-Bridges/DEV_Identify.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/examples/08-Bridges/DEV_LED.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/examples/12-ServiceLoops/DEV_Identify.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/examples/12-ServiceLoops/DEV_Sensors.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/examples/14-EmulatedPushButtons/DEV_Blinker.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/examples/14-EmulatedPushButtons/DEV_Identify.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/examples/10-RGB_LED/DEV_Identify.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/examples/10-RGB_LED/DEV_LED.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/examples/05-WorkingLED/DEV_LED.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/examples/16-ProgrammableSwitches/DEV_Identify.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/examples/16-ProgrammableSwitches/DEV_ProgButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/examples/07-IdentifyRoutines/DEV_Identify.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/examples/07-IdentifyRoutines/DEV_LED.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/examples/13-TargetStates/DEV_Identify.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/examples/13-TargetStates/DEV_DoorsWindows.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/examples/11-ServiceOptions/DEV_Identify.h"
  "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/examples/11-ServiceOptions/DEV_LED.h"
)

target_include_directories(pac-homespan INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HomeSpan/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-homespan INTERFACE
    arduino-compat
)
