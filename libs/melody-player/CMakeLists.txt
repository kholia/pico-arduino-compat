add_library(pac-melody-player INTERFACE)

target_sources(pac-melody-player INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/melody-player-arduino/src/melody_player.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/melody-player-arduino/src/melody_factory_rtttl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/melody-player-arduino/src/melody_factory.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/melody-player-arduino/src/pitches_unordered_map.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/melody-player-arduino/src/melody_factory.h"
  "${CMAKE_CURRENT_LIST_DIR}/melody-player-arduino/src/melody_player.h"
  "${CMAKE_CURRENT_LIST_DIR}/melody-player-arduino/src/notes.h"
  "${CMAKE_CURRENT_LIST_DIR}/melody-player-arduino/src/pitches_unordered_map.h"
  "${CMAKE_CURRENT_LIST_DIR}/melody-player-arduino/src/melody.h"
)

target_include_directories(pac-melody-player INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/melody-player-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-melody-player INTERFACE
    arduino-compat
)
