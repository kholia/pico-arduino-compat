add_library(pac-mqttlogger INTERFACE)

target_sources(pac-mqttlogger INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MqttLogger/src/MqttLogger.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MqttLogger/src/MqttLogger.h"
)

target_include_directories(pac-mqttlogger INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MqttLogger/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mqttlogger INTERFACE
    arduino-compat
)
