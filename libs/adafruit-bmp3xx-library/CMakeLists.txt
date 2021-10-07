add_library(pac-adafruit-bmp3xx-library INTERFACE)

target_sources(pac-adafruit-bmp3xx-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BMP3XX/Adafruit_BMP3XX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BMP3XX/bmp3.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BMP3XX/bmp3_defs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BMP3XX/bmp3.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BMP3XX/Adafruit_BMP3XX.h"
)

target_include_directories(pac-adafruit-bmp3xx-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BMP3XX"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-bmp3xx-library INTERFACE
    arduino-compat
    pac-adafruit-busio
)
