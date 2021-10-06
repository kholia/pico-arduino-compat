add_library(adafruit-adxl345 INTERFACE)

target_sources(adafruit-adxl345 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ADXL345/Adafruit_ADXL345_U.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ADXL345/Adafruit_ADXL345_U.h"
)

target_include_directories(adafruit-adxl345 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ADXL345"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-adxl345 INTERFACE
    arduino-compat
    adafruit-busio
)
