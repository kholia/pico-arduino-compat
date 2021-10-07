add_library(pac-ci2c INTERFACE)

target_sources(pac-ci2c INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/cI2C/src/ci2c.c"
  "${CMAKE_CURRENT_LIST_DIR}/cI2C/src/ci2c.h"
)

target_include_directories(pac-ci2c INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/cI2C/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ci2c INTERFACE
    arduino-compat
)
