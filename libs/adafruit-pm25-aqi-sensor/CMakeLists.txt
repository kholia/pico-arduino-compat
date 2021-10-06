add_library(adafruit-pm25-aqi-sensor INTERFACE)

target_sources(adafruit-pm25-aqi-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_PM25AQI/Adafruit_PM25AQI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_PM25AQI/Adafruit_PM25AQI.h"
)

target_include_directories(adafruit-pm25-aqi-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_PM25AQI"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-pm25-aqi-sensor INTERFACE
    arduino-compat
    adafruit-busio
)
