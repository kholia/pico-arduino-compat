add_library(pac-bitbang_i2c INTERFACE)

target_sources(pac-bitbang_i2c INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BitBang_I2C/src/BitBang_I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BitBang_I2C/linux/BitBang_I2C.c"
  "${CMAKE_CURRENT_LIST_DIR}/BitBang_I2C/src/BitBang_I2C.h"
)

target_include_directories(pac-bitbang_i2c INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BitBang_I2C/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bitbang_i2c INTERFACE
    arduino-compat
)
