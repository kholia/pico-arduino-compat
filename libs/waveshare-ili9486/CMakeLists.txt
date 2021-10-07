add_library(pac-waveshare-ili9486 INTERFACE)

target_sources(pac-waveshare-ili9486 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Waveshare_ILI9486/src/Waveshare_ILI9486.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Waveshare_ILI9486/src/Waveshare_ILI9486.h"
)

target_include_directories(pac-waveshare-ili9486 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Waveshare_ILI9486/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-waveshare-ili9486 INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
