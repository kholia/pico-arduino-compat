add_library(pac-grove-lcd-rgb-backlight INTERFACE)

target_sources(pac-grove-lcd-rgb-backlight INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_LCD_RGB_Backlight/rgb_lcd.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_LCD_RGB_Backlight/rgb_lcd.h"
)

target_include_directories(pac-grove-lcd-rgb-backlight INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_LCD_RGB_Backlight"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-grove-lcd-rgb-backlight INTERFACE
    arduino-compat
)
