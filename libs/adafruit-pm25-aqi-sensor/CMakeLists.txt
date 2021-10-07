add_library(pac-adafruit-pm25-aqi-sensor INTERFACE)

target_sources(pac-adafruit-pm25-aqi-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_PM25AQI/Adafruit_PM25AQI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_PM25AQI/Adafruit_PM25AQI.h"
)

target_include_directories(pac-adafruit-pm25-aqi-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_PM25AQI"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-pm25-aqi-sensor INTERFACE
    arduino-compat
    pac-adafruit-busio
)
