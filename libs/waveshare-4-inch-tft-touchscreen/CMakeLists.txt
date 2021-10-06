add_library(waveshare-4-inch-tft-touchscreen INTERFACE)

target_sources(waveshare-4-inch-tft-touchscreen INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Waveshare4InchTftShield/src/Waveshare4InchTftShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Waveshare4InchTftShield/src/Waveshare4InchTftShield.h"
)

target_include_directories(waveshare-4-inch-tft-touchscreen INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Waveshare4InchTftShield/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(waveshare-4-inch-tft-touchscreen INTERFACE
    arduino-compat
    adafruit-gfx-library
)
