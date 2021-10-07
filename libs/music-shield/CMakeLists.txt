add_library(pac-music-shield INTERFACE)

target_sources(pac-music-shield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Music_Shield/vs10xx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Music_Shield/MusicPlayer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Music_Shield/vs10xx.h"
  "${CMAKE_CURRENT_LIST_DIR}/Music_Shield/MusicPlayer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Music_Shield/pins_config.h"
)

target_include_directories(pac-music-shield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Music_Shield"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-music-shield INTERFACE
    arduino-compat
    pac-sd
)
