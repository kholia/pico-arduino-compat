add_library(arduboy-tinyfont INTERFACE)

target_sources(arduboy-tinyfont INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduboy-TinyFont/src/Tinyfont.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduboy-TinyFont/src/TinyfontSprite.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduboy-TinyFont/src/Tinyfont.h"
)

target_include_directories(arduboy-tinyfont INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduboy-TinyFont/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduboy-tinyfont INTERFACE
    arduino-compat
)
