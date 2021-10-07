add_library(pac-ceclient INTERFACE)

target_sources(pac-ceclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib_CEClient/src/CEClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib_CEClient/src/CEC/Common.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib_CEClient/src/CEC/CEC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib_CEClient/src/CEC/CEC_Device.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib_CEClient/src/CEC/CEC_Electrical.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib_CEClient/src/CEC/Serial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib_CEClient/src/CEClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib_CEClient/src/CEC/CEC_Electrical.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib_CEClient/src/CEC/Common.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib_CEClient/src/CEC/Serial.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib_CEClient/src/CEC/CEC_Device.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib_CEClient/src/CEC/CEC.h"
)

target_include_directories(pac-ceclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoLib_CEClient/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ceclient INTERFACE
    arduino-compat
)
