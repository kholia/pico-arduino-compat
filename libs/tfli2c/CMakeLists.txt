add_library(pac-tfli2c INTERFACE)

target_sources(pac-tfli2c INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TFLuna-I2C/src/TFLI2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TFLuna-I2C/src/TFLI2C.h"
)

target_include_directories(pac-tfli2c INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TFLuna-I2C/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tfli2c INTERFACE
    arduino-compat
)
