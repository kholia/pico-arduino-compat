add_library(pac-soundplayer INTERFACE)

target_sources(pac-soundplayer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SoundPlayer/src/SoundPlayer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SoundPlayer/src/Sound.h"
  "${CMAKE_CURRENT_LIST_DIR}/SoundPlayer/src/SoundPlayer.h"
)

target_include_directories(pac-soundplayer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SoundPlayer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-soundplayer INTERFACE
    arduino-compat
)
