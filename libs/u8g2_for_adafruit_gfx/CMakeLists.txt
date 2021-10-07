add_library(pac-u8g2_for_adafruit_gfx INTERFACE)

target_sources(pac-u8g2_for_adafruit_gfx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/U8g2_for_Adafruit_GFX/src/U8g2_for_Adafruit_GFX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/U8g2_for_Adafruit_GFX/src/u8g2_fonts.c"
  "${CMAKE_CURRENT_LIST_DIR}/U8g2_for_Adafruit_GFX/examples/Hello_Adafruit_ILI9341/Hello_Adafruit_ILI9341.c"
  "${CMAKE_CURRENT_LIST_DIR}/U8g2_for_Adafruit_GFX/src/u8g2_fonts.h"
  "${CMAKE_CURRENT_LIST_DIR}/U8g2_for_Adafruit_GFX/src/U8g2_for_Adafruit_GFX.h"
)

target_include_directories(pac-u8g2_for_adafruit_gfx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/U8g2_for_Adafruit_GFX/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-u8g2_for_adafruit_gfx INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
