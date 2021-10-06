add_library(soundplayer INTERFACE)

target_sources(soundplayer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SoundPlayer/src/SoundPlayer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SoundPlayer/src/Sound.h"
  "${CMAKE_CURRENT_LIST_DIR}/SoundPlayer/src/SoundPlayer.h"
)

target_include_directories(soundplayer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SoundPlayer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(soundplayer INTERFACE
    arduino-compat
)
