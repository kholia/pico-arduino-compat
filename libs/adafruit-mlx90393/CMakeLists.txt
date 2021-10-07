add_library(pac-adafruit-mlx90393 INTERFACE)

target_sources(pac-adafruit-mlx90393 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MLX90393_Library/Adafruit_MLX90393.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MLX90393_Library/Adafruit_MLX90393.h"
)

target_include_directories(pac-adafruit-mlx90393 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MLX90393_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-mlx90393 INTERFACE
    arduino-compat
    pac-adafruit-busio
)
