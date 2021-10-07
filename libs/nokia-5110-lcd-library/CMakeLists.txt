add_library(pac-nokia-5110-lcd-library INTERFACE)

target_sources(pac-nokia-5110-lcd-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/nokia-5110-lcd-library/src/Nokia_LCD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nokia-5110-lcd-library/src/LCD_Fonts.h"
  "${CMAKE_CURRENT_LIST_DIR}/nokia-5110-lcd-library/src/Nokia_LCD.h"
  "${CMAKE_CURRENT_LIST_DIR}/nokia-5110-lcd-library/src/Nokia_LCD_Fonts.h"
  "${CMAKE_CURRENT_LIST_DIR}/nokia-5110-lcd-library/examples/Nokia_LCD_Font/fonts/Small_LCD_Fonts.h"
  "${CMAKE_CURRENT_LIST_DIR}/nokia-5110-lcd-library/examples/Nokia_LCD_Font/fonts/Glyphs_LCD_Fonts.h"
  "${CMAKE_CURRENT_LIST_DIR}/nokia-5110-lcd-library/examples/Nokia_LCD_Font/fonts/Bold_LCD_Fonts.h"
)

target_include_directories(pac-nokia-5110-lcd-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/nokia-5110-lcd-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-nokia-5110-lcd-library INTERFACE
    arduino-compat
)
