add_library(pac-adafruit-mqtt-library INTERFACE)

target_sources(pac-adafruit-mqtt-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MQTT_Library/Adafruit_MQTT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MQTT_Library/Adafruit_MQTT_Client.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MQTT_Library/examples/mqtt_fona/fonahelper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MQTT_Library/Adafruit_MQTT_Client.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MQTT_Library/Adafruit_MQTT_FONA.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MQTT_Library/Adafruit_MQTT.h"
)

target_include_directories(pac-adafruit-mqtt-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MQTT_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-mqtt-library INTERFACE
    arduino-compat
)
