add_library(pac-mlx90614 INTERFACE)

target_sources(pac-mlx90614 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MLX90614/src/MLX90614.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MLX90614/src/MLX90614.h"
)

target_include_directories(pac-mlx90614 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MLX90614/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mlx90614 INTERFACE
    arduino-compat
)
