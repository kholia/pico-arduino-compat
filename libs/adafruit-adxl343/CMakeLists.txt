add_library(adafruit-adxl343 INTERFACE)

target_sources(adafruit-adxl343 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ADXL343/Adafruit_ADXL343.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ADXL343/Adafruit_ADXL343.h"
)

target_include_directories(adafruit-adxl343 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ADXL343"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-adxl343 INTERFACE
    arduino-compat
    adafruit-busio
)
