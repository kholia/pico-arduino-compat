add_library(pac-esp8266iothelper INTERFACE)

target_sources(pac-esp8266iothelper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-iot-helper/src/ESP8266IoTHelper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-iot-helper/src/ESP8266IoTHelper.h"
)

target_include_directories(pac-esp8266iothelper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/esp8266-iot-helper/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp8266iothelper INTERFACE
    arduino-compat
)
