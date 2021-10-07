add_library(pac-adafruit-bme680-library INTERFACE)

target_sources(pac-adafruit-bme680-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BME680/Adafruit_BME680.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BME680/bme68x.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BME680/bme68x_defs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BME680/Adafruit_BME680.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BME680/bme68x.h"
)

target_include_directories(pac-adafruit-bme680-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BME680"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-bme680-library INTERFACE
    arduino-compat
    pac-adafruit-busio
)
