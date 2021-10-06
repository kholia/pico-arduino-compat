add_library(mqttlogger INTERFACE)

target_sources(mqttlogger INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MqttLogger/src/MqttLogger.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MqttLogger/src/MqttLogger.h"
)

target_include_directories(mqttlogger INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MqttLogger/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mqttlogger INTERFACE
    arduino-compat
)
