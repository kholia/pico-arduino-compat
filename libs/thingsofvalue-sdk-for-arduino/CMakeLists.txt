add_library(thingsofvalue-sdk-for-arduino INTERFACE)

target_sources(thingsofvalue-sdk-for-arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoThingsOfValueSDK/src/system.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoThingsOfValueSDK/src/tov.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoThingsOfValueSDK/src/lwmqtt/helpers.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoThingsOfValueSDK/src/lwmqtt/string.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoThingsOfValueSDK/src/lwmqtt/packet.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoThingsOfValueSDK/src/lwmqtt/client.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoThingsOfValueSDK/src/tov.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoThingsOfValueSDK/src/MQTTClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoThingsOfValueSDK/src/system.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoThingsOfValueSDK/src/lwmqtt/helpers.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoThingsOfValueSDK/src/lwmqtt/packet.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoThingsOfValueSDK/src/lwmqtt/lwmqtt.h"
)

target_include_directories(thingsofvalue-sdk-for-arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoThingsOfValueSDK/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(thingsofvalue-sdk-for-arduino INTERFACE
    arduino-compat
)
