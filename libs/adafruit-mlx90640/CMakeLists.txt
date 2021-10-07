add_library(pac-adafruit-mlx90640 INTERFACE)

target_sources(pac-adafruit-mlx90640 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MLX90640/Adafruit_MLX90640.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MLX90640/utility/MLX90640_SWI2C_Driver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MLX90640/utility/MLX90640_I2C_Driver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MLX90640/utility/MLX90640_API.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MLX90640/Adafruit_MLX90640.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MLX90640/headers/MLX90640_API.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MLX90640/headers/MLX90640_I2C_Driver.h"
)

target_include_directories(pac-adafruit-mlx90640 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MLX90640"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-mlx90640 INTERFACE
    arduino-compat
    pac-adafruit-busio
)
