add_library(pac-protocentral-mlx90632-non-contact-temperature-library INTERFACE)

target_sources(pac-protocentral-mlx90632-non-contact-temperature-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/protocentral_mlx90632_arduino/src/Protocentral_MLX90632.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/protocentral_mlx90632_arduino/src/Protocentral_MLX90632.h"
)

target_include_directories(pac-protocentral-mlx90632-non-contact-temperature-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/protocentral_mlx90632_arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-protocentral-mlx90632-non-contact-temperature-library INTERFACE
    arduino-compat
)
