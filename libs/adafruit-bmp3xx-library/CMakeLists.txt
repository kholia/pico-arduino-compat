add_library(adafruit-bmp3xx-library INTERFACE)

target_sources(adafruit-bmp3xx-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BMP3XX/Adafruit_BMP3XX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BMP3XX/bmp3.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BMP3XX/bmp3_defs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BMP3XX/bmp3.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BMP3XX/Adafruit_BMP3XX.h"
)

target_include_directories(adafruit-bmp3xx-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BMP3XX"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-bmp3xx-library INTERFACE
    arduino-compat
    adafruit-busio
)
