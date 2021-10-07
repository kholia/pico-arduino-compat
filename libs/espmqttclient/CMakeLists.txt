add_library(pac-espmqttclient INTERFACE)

target_sources(pac-espmqttclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EspMQTTClient/src/EspMQTTClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspMQTTClient/src/EspMQTTClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspMQTTClient/src/ESP32HTTPUpdateServer.h"
)

target_include_directories(pac-espmqttclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EspMQTTClient/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-espmqttclient INTERFACE
    arduino-compat
)
