add_library(pac-mics6814-i2c INTERFACE)

target_sources(pac-mics6814-i2c INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MiCS6814-I2C-Library/src/MiCS6814-I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MiCS6814-I2C-Library/src/MiCS6814-I2C.h"
)

target_include_directories(pac-mics6814-i2c INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MiCS6814-I2C-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mics6814-i2c INTERFACE
    arduino-compat
)
