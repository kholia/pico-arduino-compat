add_library(pac-adafruit-adxl343 INTERFACE)

target_sources(pac-adafruit-adxl343 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ADXL343/Adafruit_ADXL343.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ADXL343/Adafruit_ADXL343.h"
)

target_include_directories(pac-adafruit-adxl343 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ADXL343"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-adxl343 INTERFACE
    arduino-compat
    pac-adafruit-busio
)
