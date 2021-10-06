add_library(sparkfun-mlx90632-noncontact-infrared-temperature-sensor INTERFACE)

target_sources(sparkfun-mlx90632-noncontact-infrared-temperature-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MLX90632_Arduino_Library/src/SparkFun_MLX90632_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MLX90632_Arduino_Library/src/SparkFun_MLX90632_Arduino_Library.h"
)

target_include_directories(sparkfun-mlx90632-noncontact-infrared-temperature-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MLX90632_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-mlx90632-noncontact-infrared-temperature-sensor INTERFACE
    arduino-compat
)
