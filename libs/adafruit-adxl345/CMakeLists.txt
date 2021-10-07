add_library(pac-adafruit-adxl345 INTERFACE)

target_sources(pac-adafruit-adxl345 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ADXL345/Adafruit_ADXL345_U.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ADXL345/Adafruit_ADXL345_U.h"
)

target_include_directories(pac-adafruit-adxl345 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ADXL345"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-adxl345 INTERFACE
    arduino-compat
    pac-adafruit-busio
)
