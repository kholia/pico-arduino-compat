add_library(sodaq_r4x_mqtt INTERFACE)

target_sources(sodaq_r4x_mqtt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_R4X_MQTT/src/Sodaq_R4X_MQTT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_R4X_MQTT/src/Sodaq_R4X_MQTT.h"
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_R4X_MQTT/src/Sodaq_MQTT_Interface.h"
)

target_include_directories(sodaq_r4x_mqtt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Sodaq_R4X_MQTT/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sodaq_r4x_mqtt INTERFACE
    arduino-compat
)
