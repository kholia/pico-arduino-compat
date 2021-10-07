add_library(pac-adafruit-hdc1000-library INTERFACE)

target_sources(pac-adafruit-hdc1000-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_HDC1000_Library/Adafruit_HDC1000.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_HDC1000_Library/Adafruit_HDC1000.h"
)

target_include_directories(pac-adafruit-hdc1000-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_HDC1000_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-hdc1000-library INTERFACE
    arduino-compat
    pac-adafruit-busio
)
