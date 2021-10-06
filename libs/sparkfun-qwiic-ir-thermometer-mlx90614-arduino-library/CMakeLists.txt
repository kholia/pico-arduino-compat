add_library(sparkfun-qwiic-ir-thermometer-mlx90614-arduino-library INTERFACE)

target_sources(sparkfun-qwiic-ir-thermometer-mlx90614-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MLX90614_Arduino_Library/src/SparkFunMLX90614.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MLX90614_Arduino_Library/src/SparkFunMLX90614.h"
)

target_include_directories(sparkfun-qwiic-ir-thermometer-mlx90614-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MLX90614_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-qwiic-ir-thermometer-mlx90614-arduino-library INTERFACE
    arduino-compat
)
