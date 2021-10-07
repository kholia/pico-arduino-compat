add_library(pac-arduinocomponents INTERFACE)

target_sources(pac-arduinocomponents INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src/ArduinoComponents/IO/IO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src/ArduinoComponents/IO/DigitalInput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src/ArduinoComponents/IO/DigitalOutput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src/ArduinoComponents/IO/AnalogInput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src/ArduinoComponents/IO/AnalogOutput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src/ArduinoComponents/Components/Timer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src/ArduinoComponents/Components/RotaryEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src/ArduinoComponents/Components/LED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src/ArduinoComponents/Components/NonBlockingBlinkingLed.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src/ArduinoComponents/Components/TactileButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src/ArduinoComponents/Components/RF/ASK_Rf.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src/ArduinoComponents.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src/ArduinoComponents/IO/AnalogOutput.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src/ArduinoComponents/IO/DigitalOutput.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src/ArduinoComponents/IO/IOComponents.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src/ArduinoComponents/IO/AnalogInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src/ArduinoComponents/IO/IO.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src/ArduinoComponents/IO/DigitalInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src/ArduinoComponents/IO/Log.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src/ArduinoComponents/Helpers/Function.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src/ArduinoComponents/Helpers/Ref.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src/ArduinoComponents/Helpers/UniquePtr.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src/ArduinoComponents/Helpers/Vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src/ArduinoComponents/Helpers/VoidCallback.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src/ArduinoComponents/Components/Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src/ArduinoComponents/Components/Component.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src/ArduinoComponents/Components/RotaryEncoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src/ArduinoComponents/Components/LED.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src/ArduinoComponents/Components/TactileButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src/ArduinoComponents/Components/NonBlockingBlinkingLed.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src/ArduinoComponents/Components/RF/RC_Switch.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src/ArduinoComponents/Components/RF/RF_Interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src/ArduinoComponents/Components/RF/ASK_Rf.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src/ArduinoComponents/Components/RF/ContentFilter.h"
)

target_include_directories(pac-arduinocomponents INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoComponents/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduinocomponents INTERFACE
    arduino-compat
)
