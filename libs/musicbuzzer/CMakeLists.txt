add_library(pac-musicbuzzer INTERFACE)

target_sources(pac-musicbuzzer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MusicBuzzer/src/MusicBuzzer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MusicBuzzer/src/MusicBuzzer.h"
)

target_include_directories(pac-musicbuzzer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MusicBuzzer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-musicbuzzer INTERFACE
    arduino-compat
)
