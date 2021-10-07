add_library(pac-universal-inputs INTERFACE)

target_sources(pac-universal-inputs INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUniversalInput/UniversalInputManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUniversalInput/IButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUniversalInput/ArduinoJoystick.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUniversalInput/IJoystick.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUniversalInput/ArduinoMatrixButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUniversalInput/ArduinoButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUniversalInput/IButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUniversalInput/ArduinoMatrixButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUniversalInput/IValueTransform.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUniversalInput/UniversalInputTypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUniversalInput/UniversalInputCallbackFunctionHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUniversalInput/ArduinoJoystick.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUniversalInput/IUniversalInputCallback.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUniversalInput/IInputDevice.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUniversalInput/ArduinoButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUniversalInput/IJoystick.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUniversalInput/LinearTransform.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUniversalInput/UniversalInputManager.h"
)

target_include_directories(pac-universal-inputs INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoUniversalInput"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-universal-inputs INTERFACE
    arduino-compat
)
