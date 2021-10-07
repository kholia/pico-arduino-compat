add_library(pac-emotibit-mlx90632 INTERFACE)

target_sources(pac-emotibit-mlx90632 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_MLX90632/src/SparkFun_MLX90632_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_MLX90632/src/SparkFun_MLX90632_Arduino_Library.h"
)

target_include_directories(pac-emotibit-mlx90632 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_MLX90632/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-emotibit-mlx90632 INTERFACE
    arduino-compat
)
