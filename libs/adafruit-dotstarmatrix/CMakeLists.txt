add_library(pac-adafruit-dotstarmatrix INTERFACE)

target_sources(pac-adafruit-dotstarmatrix INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DotStarMatrix/Adafruit_DotStarMatrix.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DotStarMatrix/extras/gamma.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DotStarMatrix/gamma.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DotStarMatrix/Adafruit_DotStarMatrix.h"
)

target_include_directories(pac-adafruit-dotstarmatrix INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DotStarMatrix"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-adafruit-dotstarmatrix INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
