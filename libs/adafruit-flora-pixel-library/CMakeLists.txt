add_library(adafruit-flora-pixel-library INTERFACE)

target_sources(adafruit-flora-pixel-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-Flora-Pixel-Library/Adafruit_FloraPixel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-Flora-Pixel-Library/Adafruit_FloraPixel.h"
)

target_include_directories(adafruit-flora-pixel-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit-Flora-Pixel-Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-flora-pixel-library INTERFACE
    arduino-compat
)
