add_library(viziotmqttclient INTERFACE)

target_sources(viziotmqttclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/viziot-mqtt-client-arduino/src/VizIoTMqttClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/viziot-mqtt-client-arduino/src/VizIoTMqttClient.h"
)

target_include_directories(viziotmqttclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/viziot-mqtt-client-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(viziotmqttclient INTERFACE
    arduino-compat
)
