add_library(pac-mqtt-client INTERFACE)

target_sources(pac-mqtt-client INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mqtt-client/MQTTClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mqtt-client/MQTTClient.h"
)

target_include_directories(pac-mqtt-client INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mqtt-client"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mqtt-client INTERFACE
    arduino-compat
)
