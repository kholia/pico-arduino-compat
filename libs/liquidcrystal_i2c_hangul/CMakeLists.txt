add_library(liquidcrystal_i2c_hangul INTERFACE)

target_sources(liquidcrystal_i2c_hangul INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LiquidCrystal_I2C_Hangul/src/LiquidCrystal_I2C_Hangul.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LiquidCrystal_I2C_Hangul/src/LiquidCrystal_I2C_Hangul.h"
)

target_include_directories(liquidcrystal_i2c_hangul INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LiquidCrystal_I2C_Hangul/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(liquidcrystal_i2c_hangul INTERFACE
    arduino-compat
)
