add_library(adafruit-dotstarmatrix INTERFACE)

target_sources(adafruit-dotstarmatrix INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DotStarMatrix/Adafruit_DotStarMatrix.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DotStarMatrix/extras/gamma.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DotStarMatrix/gamma.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DotStarMatrix/Adafruit_DotStarMatrix.h"
)

target_include_directories(adafruit-dotstarmatrix INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DotStarMatrix"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(adafruit-dotstarmatrix INTERFACE
    arduino-compat
    adafruit-gfx-library
)
