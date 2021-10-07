add_library(pac-viziotmqttclient INTERFACE)

target_sources(pac-viziotmqttclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/viziot-mqtt-client-arduino/src/VizIoTMqttClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/viziot-mqtt-client-arduino/src/VizIoTMqttClient.h"
)

target_include_directories(pac-viziotmqttclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/viziot-mqtt-client-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-viziotmqttclient INTERFACE
    arduino-compat
)
