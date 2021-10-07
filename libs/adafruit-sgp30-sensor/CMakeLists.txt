add_library(pac-adafruit-sgp30-sensor INTERFACE)

target_sources(pac-adafruit-sgp30-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SGP30/Adafruit_SGP30.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SGP30/Adafruit_SGP30.h"
)

target_include_directories(pac-adafruit-sgp30-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SGP30"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-sgp30-sensor INTERFACE
    arduino-compat
    pac-adafruit-busio
)
