add_library(adafruit-bmp085-library INTERFACE)

target_sources(adafruit-bmp085-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-BMP085-Library/Adafruit_BMP085.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-BMP085-Library/Adafruit_BMP085.h"
)

target_include_directories(adafruit-bmp085-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit-BMP085-Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-bmp085-library INTERFACE
    arduino-compat
    adafruit-busio
)
