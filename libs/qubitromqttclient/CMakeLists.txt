add_library(pac-qubitromqttclient INTERFACE)

target_sources(pac-qubitromqttclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mqtt-client-arduino/src/QubitroMqttClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mqtt-client-arduino/src/QubitroMqttClient.h"
)

target_include_directories(pac-qubitromqttclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mqtt-client-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-qubitromqttclient INTERFACE
    arduino-compat
)
