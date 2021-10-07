add_library(pac-liquidcrystal-i2c INTERFACE)

target_sources(pac-liquidcrystal-i2c INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LiquidCrystal_I2C/LiquidCrystal_I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LiquidCrystal_I2C/LiquidCrystal_I2C.h"
)

target_include_directories(pac-liquidcrystal-i2c INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LiquidCrystal_I2C"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-liquidcrystal-i2c INTERFACE
    arduino-compat
)
