add_library(pac-am1008w-k-i2c INTERFACE)

target_sources(pac-am1008w-k-i2c INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/am1008w_k_i2c/src/am1008w_k_i2c.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/am1008w_k_i2c/src/am1008w_k_i2c.h"
)

target_include_directories(pac-am1008w-k-i2c INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/am1008w_k_i2c/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-am1008w-k-i2c INTERFACE
    arduino-compat
)
