add_library(lcd_st7032 INTERFACE)

target_sources(lcd_st7032 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LCD_ST7032/src/LCD_ST7032.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LCD_ST7032/src/LCD_ST7032.h"
)

target_include_directories(lcd_st7032 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LCD_ST7032/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(lcd_st7032 INTERFACE
    arduino-compat
)
