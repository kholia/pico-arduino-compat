add_library(bigfont01_i2c INTERFACE)

target_sources(bigfont01_i2c INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BigFont01_I2C/BigFont01_I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BigFont01_I2C/BigFont01_I2C.h"
)

target_include_directories(bigfont01_i2c INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BigFont01_I2C"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bigfont01_i2c INTERFACE
    arduino-compat
)
