add_library(am1008w-k-i2c INTERFACE)

target_sources(am1008w-k-i2c INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/am1008w_k_i2c/src/am1008w_k_i2c.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/am1008w_k_i2c/src/am1008w_k_i2c.h"
)

target_include_directories(am1008w-k-i2c INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/am1008w_k_i2c/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(am1008w-k-i2c INTERFACE
    arduino-compat
)
