add_library(pac-rapifiremqttclient INTERFACE)

target_sources(pac-rapifiremqttclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/rapifire-arduino-mqtt/RapifireMqttClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rapifire-arduino-mqtt/RapifireMqttClient.h"
)

target_include_directories(pac-rapifiremqttclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/rapifire-arduino-mqtt"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rapifiremqttclient INTERFACE
    arduino-compat
)
