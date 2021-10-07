add_library(pac-watchy INTERFACE)

target_sources(pac-watchy INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Watchy/src/bma.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Watchy/src/BLE.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Watchy/src/Watchy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Watchy/examples/WatchFaces/7_SEG/Watchy_7_SEG.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Watchy/examples/WatchFaces/MacPaint/Watchy_MacPaint.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Watchy/examples/WatchFaces/Tetris/Watchy_Tetris.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Watchy/examples/WatchFaces/DOS/Watchy_DOS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Watchy/examples/WatchFaces/Pokemon/Watchy_Pokemon.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Watchy/src/bma423.c"
  "${CMAKE_CURRENT_LIST_DIR}/Watchy/src/bma4.c"
  "${CMAKE_CURRENT_LIST_DIR}/Watchy/src/bma4_defs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Watchy/src/BLE.h"
  "${CMAKE_CURRENT_LIST_DIR}/Watchy/src/DSEG7_Classic_Bold_53.h"
  "${CMAKE_CURRENT_LIST_DIR}/Watchy/src/bma.h"
  "${CMAKE_CURRENT_LIST_DIR}/Watchy/src/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/Watchy/src/Watchy.h"
  "${CMAKE_CURRENT_LIST_DIR}/Watchy/src/bma4.h"
  "${CMAKE_CURRENT_LIST_DIR}/Watchy/src/bma423.h"
  "${CMAKE_CURRENT_LIST_DIR}/Watchy/examples/WatchFaces/7_SEG/Seven_Segment10pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/Watchy/examples/WatchFaces/7_SEG/DSEG7_Classic_Bold_25.h"
  "${CMAKE_CURRENT_LIST_DIR}/Watchy/examples/WatchFaces/7_SEG/icons.h"
  "${CMAKE_CURRENT_LIST_DIR}/Watchy/examples/WatchFaces/7_SEG/Watchy_7_SEG.h"
  "${CMAKE_CURRENT_LIST_DIR}/Watchy/examples/WatchFaces/7_SEG/DSEG7_Classic_Regular_15.h"
  "${CMAKE_CURRENT_LIST_DIR}/Watchy/examples/WatchFaces/7_SEG/DSEG7_Classic_Regular_39.h"
  "${CMAKE_CURRENT_LIST_DIR}/Watchy/examples/WatchFaces/MacPaint/macpaint.h"
  "${CMAKE_CURRENT_LIST_DIR}/Watchy/examples/WatchFaces/MacPaint/Watchy_MacPaint.h"
  "${CMAKE_CURRENT_LIST_DIR}/Watchy/examples/WatchFaces/Tetris/tetris.h"
  "${CMAKE_CURRENT_LIST_DIR}/Watchy/examples/WatchFaces/Tetris/Watchy_Tetris.h"
  "${CMAKE_CURRENT_LIST_DIR}/Watchy/examples/WatchFaces/DOS/Px437_IBM_BIOS5pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/Watchy/examples/WatchFaces/DOS/Watchy_DOS.h"
  "${CMAKE_CURRENT_LIST_DIR}/Watchy/examples/WatchFaces/Pokemon/pokemon.h"
  "${CMAKE_CURRENT_LIST_DIR}/Watchy/examples/WatchFaces/Pokemon/Watchy_Pokemon.h"
  "${CMAKE_CURRENT_LIST_DIR}/Watchy/examples/WatchFaces/StarryHorizon/MadeSunflower39pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/Watchy/examples/WatchFaces/StarryHorizon/stars.h"
)

target_include_directories(pac-watchy INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Watchy/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-watchy INTERFACE
    arduino-compat
)
