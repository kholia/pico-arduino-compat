add_library(pac-cm1106-i2c INTERFACE)

target_sources(pac-cm1106-i2c INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/cm1106_i2c/src/cm1106_i2c.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cm1106_i2c/src/cm1106_i2c.h"
)

target_include_directories(pac-cm1106-i2c INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/cm1106_i2c/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cm1106-i2c INTERFACE
    arduino-compat
)
