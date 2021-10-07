add_library(pac-waveshare-4-inch-tft-touchscreen INTERFACE)

target_sources(pac-waveshare-4-inch-tft-touchscreen INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Waveshare4InchTftShield/src/Waveshare4InchTftShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Waveshare4InchTftShield/src/Waveshare4InchTftShield.h"
)

target_include_directories(pac-waveshare-4-inch-tft-touchscreen INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Waveshare4InchTftShield/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-waveshare-4-inch-tft-touchscreen INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
