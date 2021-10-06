add_library(adafruit-mlx90614-library INTERFACE)

target_sources(adafruit-mlx90614-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-MLX90614-Library/Adafruit_MLX90614.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-MLX90614-Library/Adafruit_MLX90614.h"
)

target_include_directories(adafruit-mlx90614-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit-MLX90614-Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-mlx90614-library INTERFACE
    arduino-compat
    adafruit-busio
)
