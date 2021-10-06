add_library(adafruit-sgp30-sensor INTERFACE)

target_sources(adafruit-sgp30-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SGP30/Adafruit_SGP30.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SGP30/Adafruit_SGP30.h"
)

target_include_directories(adafruit-sgp30-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SGP30"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-sgp30-sensor INTERFACE
    arduino-compat
    adafruit-busio
)
