add_library(pac-m10i2c INTERFACE)

target_sources(pac-m10i2c INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M10I2C/src/M10I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M10I2C/src/M10I2C.h"
)

target_include_directories(pac-m10i2c INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M10I2C/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-m10i2c INTERFACE
    arduino-compat
)
