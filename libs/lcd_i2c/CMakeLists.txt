add_library(lcd_i2c INTERFACE)

target_sources(lcd_i2c INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LCD_I2C/src/LCD_I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LCD_I2C/src/LCD_I2C.h"
)

target_include_directories(lcd_i2c INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LCD_I2C/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(lcd_i2c INTERFACE
    arduino-compat
)
