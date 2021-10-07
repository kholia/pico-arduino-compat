add_library(pac-serialmp3player INTERFACE)

target_sources(pac-serialmp3player INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SerialMP3Player/src/SerialMP3Player.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialMP3Player/src/SerialMP3Player.h"
)

target_include_directories(pac-serialmp3player INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SerialMP3Player/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-serialmp3player INTERFACE
    arduino-compat
)
