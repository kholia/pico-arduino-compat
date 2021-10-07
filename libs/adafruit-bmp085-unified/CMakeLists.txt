add_library(pac-adafruit-bmp085-unified INTERFACE)

target_sources(pac-adafruit-bmp085-unified INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BMP085_Unified/Adafruit_BMP085_U.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BMP085_Unified/Adafruit_BMP085_U.h"
)

target_include_directories(pac-adafruit-bmp085-unified INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BMP085_Unified"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-bmp085-unified INTERFACE
    arduino-compat
)
