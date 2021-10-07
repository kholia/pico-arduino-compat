add_library(pac-arduboy INTERFACE)

target_sources(pac-arduboy INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduboy/src/Arduboy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduboy/src/core/core.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduboy/src/audio/audio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduboy/examples/ArduBreakout/breakout_bitmaps.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduboy/src/ab_logo.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduboy/src/glcdfont.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduboy/src/Arduboy.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduboy/src/core/core.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduboy/src/audio/audio.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduboy/examples/ArduBreakout/breakout_bitmaps.h"
)

target_include_directories(pac-arduboy INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduboy/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduboy INTERFACE
    arduino-compat
)
