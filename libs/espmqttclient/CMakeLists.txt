add_library(espmqttclient INTERFACE)

target_sources(espmqttclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EspMQTTClient/src/EspMQTTClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspMQTTClient/src/EspMQTTClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspMQTTClient/src/ESP32HTTPUpdateServer.h"
)

target_include_directories(espmqttclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EspMQTTClient/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(espmqttclient INTERFACE
    arduino-compat
)
