add_library(pac-tetrisanimation INTERFACE)

target_sources(pac-tetrisanimation INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TetrisAnimation/src/TetrisMatrixDraw.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TetrisAnimation/src/TetrisNumbers.h"
  "${CMAKE_CURRENT_LIST_DIR}/TetrisAnimation/src/TetrisLetters.h"
  "${CMAKE_CURRENT_LIST_DIR}/TetrisAnimation/src/TetrisMatrixDraw.h"
)

target_include_directories(pac-tetrisanimation INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TetrisAnimation/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-tetrisanimation INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
