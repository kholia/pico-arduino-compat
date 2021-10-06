add_library(adafruit-hdc1000-library INTERFACE)

target_sources(adafruit-hdc1000-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_HDC1000_Library/Adafruit_HDC1000.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_HDC1000_Library/Adafruit_HDC1000.h"
)

target_include_directories(adafruit-hdc1000-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_HDC1000_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-hdc1000-library INTERFACE
    arduino-compat
    adafruit-busio
)
