add_library(music-shield INTERFACE)

target_sources(music-shield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Music_Shield/vs10xx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Music_Shield/MusicPlayer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Music_Shield/vs10xx.h"
  "${CMAKE_CURRENT_LIST_DIR}/Music_Shield/MusicPlayer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Music_Shield/pins_config.h"
)

target_include_directories(music-shield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Music_Shield"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-sd)
    add_subdirectory(../../official-libs/sd build_official-sd)
endif()

target_link_libraries(music-shield INTERFACE
    arduino-compat
    official-sd
)
