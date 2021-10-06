add_library(adafruit-bme280-library INTERFACE)

target_sources(adafruit-bme280-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BME280_Library/Adafruit_BME280.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BME280_Library/Adafruit_BME280.h"
)

target_include_directories(adafruit-bme280-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BME280_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-bme280-library INTERFACE
    arduino-compat
    adafruit-busio
)
