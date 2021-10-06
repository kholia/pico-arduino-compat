add_library(arduboy2 INTERFACE)

target_sources(arduboy2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduboy2/src/Arduboy2Data.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduboy2/src/Arduboy2Beep.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduboy2/src/Arduboy2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduboy2/src/Arduboy2Core.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduboy2/src/SpritesB.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduboy2/src/Arduboy2Audio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduboy2/src/Sprites.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduboy2/extras/cabi/cabi.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduboy2/extras/cabi/lodepng/lodepng.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduboy2/extras/cabi/lodepng/lodepng.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduboy2/src/Arduboy2Audio.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduboy2/src/SpritesB.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduboy2/src/Arduboy2.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduboy2/src/Arduboy2Beep.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduboy2/src/SpritesCommon.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduboy2/src/Arduboy2Core.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduboy2/src/Sprites.h"
)

target_include_directories(arduboy2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduboy2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduboy2 INTERFACE
    arduino-compat
)
