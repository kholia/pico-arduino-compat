add_library(adafruit-unified-sensor INTERFACE)

target_sources(adafruit-unified-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Sensor/Adafruit_Sensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Sensor/Adafruit_Sensor.h"
)

target_include_directories(adafruit-unified-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Sensor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-unified-sensor INTERFACE
    arduino-compat
)
