add_library(pac-adafruit-ili9341 INTERFACE)

target_sources(pac-adafruit-ili9341 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ILI9341/Adafruit_ILI9341.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ILI9341/Adafruit_ILI9341.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ILI9341/examples/pictureEmbed/dragon.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ILI9341/examples/pyportal_boing/graphics.h"
)

target_include_directories(pac-adafruit-ili9341 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ILI9341"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-adafruit-ili9341 INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
