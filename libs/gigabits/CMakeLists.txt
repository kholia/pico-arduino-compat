add_library(pac-gigabits INTERFACE)

target_sources(pac-gigabits INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/gigabits-arduino/src/Gigabits.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/gigabits-arduino/src/mqtt/MQTTClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/gigabits-arduino/src/mqtt/lwmqtt/helpers.c"
  "${CMAKE_CURRENT_LIST_DIR}/gigabits-arduino/src/mqtt/lwmqtt/string.c"
  "${CMAKE_CURRENT_LIST_DIR}/gigabits-arduino/src/mqtt/lwmqtt/packet.c"
  "${CMAKE_CURRENT_LIST_DIR}/gigabits-arduino/src/mqtt/lwmqtt/client.c"
  "${CMAKE_CURRENT_LIST_DIR}/gigabits-arduino/src/Gigabits.h"
  "${CMAKE_CURRENT_LIST_DIR}/gigabits-arduino/src/LEDDisplay.h"
  "${CMAKE_CURRENT_LIST_DIR}/gigabits-arduino/src/mqtt/MQTTClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/gigabits-arduino/src/mqtt/MQTT.h"
  "${CMAKE_CURRENT_LIST_DIR}/gigabits-arduino/src/mqtt/lwmqtt/helpers.h"
  "${CMAKE_CURRENT_LIST_DIR}/gigabits-arduino/src/mqtt/lwmqtt/packet.h"
  "${CMAKE_CURRENT_LIST_DIR}/gigabits-arduino/src/mqtt/lwmqtt/lwmqtt.h"
)

target_include_directories(pac-gigabits INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/gigabits-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gigabits INTERFACE
    arduino-compat
)
