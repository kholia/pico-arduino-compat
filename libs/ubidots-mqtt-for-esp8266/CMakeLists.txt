add_library(pac-ubidots-mqtt-for-esp8266 INTERFACE)

target_sources(pac-ubidots-mqtt-for-esp8266 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ubidots-mqtt-esp/src/UbidotsESPMQTT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ubidots-mqtt-esp/src/UbidotsESPMQTT.h"
)

target_include_directories(pac-ubidots-mqtt-for-esp8266 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ubidots-mqtt-esp/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ubidots-mqtt-for-esp8266 INTERFACE
    arduino-compat
)
