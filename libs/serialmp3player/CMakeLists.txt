add_library(serialmp3player INTERFACE)

target_sources(serialmp3player INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SerialMP3Player/src/SerialMP3Player.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialMP3Player/src/SerialMP3Player.h"
)

target_include_directories(serialmp3player INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SerialMP3Player/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(serialmp3player INTERFACE
    arduino-compat
)
