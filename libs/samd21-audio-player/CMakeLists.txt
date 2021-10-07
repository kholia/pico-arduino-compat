add_library(pac-samd21-audio-player INTERFACE)

target_sources(pac-samd21-audio-player INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_SAMD21_Audio_Player/src/AudioPlayer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_SAMD21_Audio_Player/src/AudioPlayer.h"
)

target_include_directories(pac-samd21-audio-player INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_SAMD21_Audio_Player/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-samd21-audio-player INTERFACE
    arduino-compat
)
