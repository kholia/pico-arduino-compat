add_library(pac-wemos-matrix-adafruit-gfx INTERFACE)

target_sources(pac-wemos-matrix-adafruit-gfx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/wemos_matrix_gfx/src/WEMOS_Matrix_GFX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/wemos_matrix_gfx/src/WEMOS_Matrix_GFX.h"
  "${CMAKE_CURRENT_LIST_DIR}/wemos_matrix_gfx/examples/wemos_matrix_gfx_snow/Flake.h"
)

target_include_directories(pac-wemos-matrix-adafruit-gfx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/wemos_matrix_gfx/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-wemos-matrix-adafruit-gfx INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
