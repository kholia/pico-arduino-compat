add_library(pac-adafruit-bmp280-library INTERFACE)

target_sources(pac-adafruit-bmp280-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BMP280_Library/Adafruit_BMP280.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BMP280_Library/Adafruit_BMP280.h"
)

target_include_directories(pac-adafruit-bmp280-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BMP280_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-bmp280-library INTERFACE
    arduino-compat
    pac-adafruit-busio
)
