add_library(pac-lcd_i2c INTERFACE)

target_sources(pac-lcd_i2c INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LCD_I2C/src/LCD_I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LCD_I2C/src/LCD_I2C.h"
)

target_include_directories(pac-lcd_i2c INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LCD_I2C/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lcd_i2c INTERFACE
    arduino-compat
)
