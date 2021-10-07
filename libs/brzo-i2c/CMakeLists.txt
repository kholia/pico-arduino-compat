add_library(pac-brzo-i2c INTERFACE)

target_sources(pac-brzo-i2c INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/brzo_i2c/src/brzo_i2c.c"
  "${CMAKE_CURRENT_LIST_DIR}/brzo_i2c/src/brzo_i2c.h"
)

target_include_directories(pac-brzo-i2c INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/brzo_i2c/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-brzo-i2c INTERFACE
    arduino-compat
)
