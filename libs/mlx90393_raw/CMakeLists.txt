add_library(pac-mlx90393_raw INTERFACE)

target_sources(pac-mlx90393_raw INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MLX90393_raw/MLX90393_raw.h"
)

target_include_directories(pac-mlx90393_raw INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MLX90393_raw"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mlx90393_raw INTERFACE
    arduino-compat
)
