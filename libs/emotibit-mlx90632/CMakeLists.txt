add_library(emotibit-mlx90632 INTERFACE)

target_sources(emotibit-mlx90632 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_MLX90632/src/SparkFun_MLX90632_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_MLX90632/src/SparkFun_MLX90632_Arduino_Library.h"
)

target_include_directories(emotibit-mlx90632 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_MLX90632/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(emotibit-mlx90632 INTERFACE
    arduino-compat
)
