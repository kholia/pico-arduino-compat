add_library(pac-bluedisplay INTERFACE)

target_sources(pac-bluedisplay INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BlueDisplay/src/BlueDisplay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BlueDisplay/src/BlueSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BlueDisplay/src/BDButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BlueDisplay/src/BDSlider.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BlueDisplay/src/EventHandler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BlueDisplay/examples/SimpleTouchScreenDSO/Waveforms.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BlueDisplay/examples/SimpleTouchScreenDSO/TouchDSOGui.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BlueDisplay/examples/SimpleTouchScreenDSO/FrequencyGeneratorPage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BlueDisplay/examples/BlueDisplayExample/Time.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BlueDisplay/examples/RcCarControl/RcCarControlBD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BlueDisplay/examples/RcCarControl/HCSR04.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BlueDisplay/examples/ServoExample/ServoEasing.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BlueDisplay/examples/US_Distance/HCSR04.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BlueDisplay/src/BDSlider.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BlueDisplay/src/BlueDisplay.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BlueDisplay/src/BlueDisplayProtocol.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BlueDisplay/src/BDButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BlueDisplay/src/EventHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BlueDisplay/src/BlueSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BlueDisplay/src/Colors.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BlueDisplay/examples/SimpleTouchScreenDSO/SimpleTouchScreenDSO.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BlueDisplay/examples/SimpleTouchScreenDSO/TouchDSOCommon.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BlueDisplay/examples/SimpleTouchScreenDSO/FrequencyGeneratorPage.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BlueDisplay/examples/SimpleTouchScreenDSO/digitalWriteFast.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BlueDisplay/examples/SimpleTouchScreenDSO/Waveforms.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BlueDisplay/examples/BlueDisplayExample/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BlueDisplay/examples/BlueDisplayExample/TimeLib.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BlueDisplay/examples/RcCarControl/HCSR04.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BlueDisplay/examples/RcCarControl/RcCarControlBD.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BlueDisplay/examples/ServoExample/ServoEasing.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BlueDisplay/examples/US_Distance/PinDefinitionsAndMore.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BlueDisplay/examples/US_Distance/HCSR04.h"
)

target_include_directories(pac-bluedisplay INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-BlueDisplay/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bluedisplay INTERFACE
    arduino-compat
)
