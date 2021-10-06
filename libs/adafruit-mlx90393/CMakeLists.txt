add_library(adafruit-mlx90393 INTERFACE)

target_sources(adafruit-mlx90393 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MLX90393_Library/Adafruit_MLX90393.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MLX90393_Library/Adafruit_MLX90393.h"
)

target_include_directories(adafruit-mlx90393 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MLX90393_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-mlx90393 INTERFACE
    arduino-compat
    adafruit-busio
)
