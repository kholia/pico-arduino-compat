add_library(waveshare-ili9486 INTERFACE)

target_sources(waveshare-ili9486 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Waveshare_ILI9486/src/Waveshare_ILI9486.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Waveshare_ILI9486/src/Waveshare_ILI9486.h"
)

target_include_directories(waveshare-ili9486 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Waveshare_ILI9486/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(waveshare-ili9486 INTERFACE
    arduino-compat
    adafruit-gfx-library
)
