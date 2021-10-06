add_library(youtube-sight INTERFACE)

target_sources(youtube-sight INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-youtube-sight/src/YouTubeSight.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-youtube-sight/src/YouTubeSight.h"
)

target_include_directories(youtube-sight INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-youtube-sight/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(youtube-sight INTERFACE
    arduino-compat
)
