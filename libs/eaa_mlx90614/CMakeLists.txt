add_library(eaa_mlx90614 INTERFACE)

target_sources(eaa_mlx90614 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MLX90614/src/Crc8.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MLX90614/src/MLX90614.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MLX90614/src/Property.h"
  "${CMAKE_CURRENT_LIST_DIR}/MLX90614/src/MLX90614.h"
  "${CMAKE_CURRENT_LIST_DIR}/MLX90614/src/Crc8.h"
  "${CMAKE_CURRENT_LIST_DIR}/MLX90614/examples/mlxtest/MelexisTest.h"
  "${CMAKE_CURRENT_LIST_DIR}/MLX90614/examples/mlxtest/printf.h"
)

target_include_directories(eaa_mlx90614 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MLX90614/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(eaa_mlx90614 INTERFACE
    arduino-compat
)
