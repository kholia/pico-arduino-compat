add_library(lcd_hd44780 INTERFACE)

target_sources(lcd_hd44780 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LCD_HD44780/src/LCD_HD44780.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LCD_HD44780/src/LCD_HD44780.h"
)

target_include_directories(lcd_hd44780 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LCD_HD44780/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(lcd_hd44780 INTERFACE
    arduino-compat
)
