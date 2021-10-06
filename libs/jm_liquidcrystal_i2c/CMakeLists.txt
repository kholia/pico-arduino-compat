add_library(jm_liquidcrystal_i2c INTERFACE)

target_sources(jm_liquidcrystal_i2c INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/jm_LiquidCrystal_I2C/fm_LCD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/jm_LiquidCrystal_I2C/jm_LiquidCrystal_I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/jm_LiquidCrystal_I2C/fm_LiquidCrystal_I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/jm_LiquidCrystal_I2C/fm_I2CIO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/jm_LiquidCrystal_I2C/fm_LCD.h"
  "${CMAKE_CURRENT_LIST_DIR}/jm_LiquidCrystal_I2C/jm_LiquidCrystal_I2C.h"
  "${CMAKE_CURRENT_LIST_DIR}/jm_LiquidCrystal_I2C/fm_LiquidCrystal_I2C.h"
  "${CMAKE_CURRENT_LIST_DIR}/jm_LiquidCrystal_I2C/fm_I2CIO.h"
)

target_include_directories(jm_liquidcrystal_i2c INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/jm_LiquidCrystal_I2C"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(jm_liquidcrystal_i2c INTERFACE
    arduino-compat
)
