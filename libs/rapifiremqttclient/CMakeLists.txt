add_library(rapifiremqttclient INTERFACE)

target_sources(rapifiremqttclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/rapifire-arduino-mqtt/RapifireMqttClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rapifire-arduino-mqtt/RapifireMqttClient.h"
)

target_include_directories(rapifiremqttclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/rapifire-arduino-mqtt"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rapifiremqttclient INTERFACE
    arduino-compat
)
