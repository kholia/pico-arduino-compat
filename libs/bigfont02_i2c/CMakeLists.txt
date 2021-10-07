add_library(pac-bigfont02_i2c INTERFACE)

target_sources(pac-bigfont02_i2c INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BigFont02_I2C/BigFont02_I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BigFont02_I2C/BigFont02_I2C.h"
)

target_include_directories(pac-bigfont02_i2c INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BigFont02_I2C"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bigfont02_i2c INTERFACE
    arduino-compat
)
