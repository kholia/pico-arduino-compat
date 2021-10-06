add_library(tuneplayer INTERFACE)

target_sources(tuneplayer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TunePlayer/src/SoundGenerators.h"
  "${CMAKE_CURRENT_LIST_DIR}/TunePlayer/src/TuneLoaders.h"
  "${CMAKE_CURRENT_LIST_DIR}/TunePlayer/src/TunePlayer.h"
  "${CMAKE_CURRENT_LIST_DIR}/TunePlayer/examples/jukebox/tunes.h"
)

target_include_directories(tuneplayer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TunePlayer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tuneplayer INTERFACE
    arduino-compat
)
