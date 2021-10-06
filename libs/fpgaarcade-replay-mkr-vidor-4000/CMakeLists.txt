add_library(fpgaarcade-replay-mkr-vidor-4000 INTERFACE)

target_sources(fpgaarcade-replay-mkr-vidor-4000 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/replay_mkrvidor4000/src/replay.h"
)

target_include_directories(fpgaarcade-replay-mkr-vidor-4000 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/replay_mkrvidor4000/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fpgaarcade-replay-mkr-vidor-4000 INTERFACE
    arduino-compat
)
