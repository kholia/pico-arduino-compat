add_library(dfplayer-mini-mp3-by-makuna INTERFACE)

target_sources(dfplayer-mini-mp3-by-makuna INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DFMiniMp3/src/DFMiniMp3.h"
)

target_include_directories(dfplayer-mini-mp3-by-makuna INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DFMiniMp3/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dfplayer-mini-mp3-by-makuna INTERFACE
    arduino-compat
)
