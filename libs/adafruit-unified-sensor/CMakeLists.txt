add_library(pac-adafruit-unified-sensor INTERFACE)

target_sources(pac-adafruit-unified-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Sensor/Adafruit_Sensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Sensor/Adafruit_Sensor.h"
)

target_include_directories(pac-adafruit-unified-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Sensor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-unified-sensor INTERFACE
    arduino-compat
)
