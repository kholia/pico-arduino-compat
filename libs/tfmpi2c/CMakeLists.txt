add_library(pac-tfmpi2c INTERFACE)

target_sources(pac-tfmpi2c INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TFMini-Plus-I2C/src/TFMPI2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TFMini-Plus-I2C/src/TFMPI2C.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFMini-Plus-I2C/example/printf.h"
)

target_include_directories(pac-tfmpi2c INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TFMini-Plus-I2C/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tfmpi2c INTERFACE
    arduino-compat
)
