add_library(adafruit-mlx90395 INTERFACE)

target_sources(adafruit-mlx90395 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MLX90395/Adafruit_MLX90395.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MLX90395/Adafruit_MLX90395.h"
)

target_include_directories(adafruit-mlx90395 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MLX90395"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-mlx90395 INTERFACE
    arduino-compat
    adafruit-busio
)
