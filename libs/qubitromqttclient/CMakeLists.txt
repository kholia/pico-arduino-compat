add_library(qubitromqttclient INTERFACE)

target_sources(qubitromqttclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mqtt-client-arduino/src/QubitroMqttClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mqtt-client-arduino/src/QubitroMqttClient.h"
)

target_include_directories(qubitromqttclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mqtt-client-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(qubitromqttclient INTERFACE
    arduino-compat
)
