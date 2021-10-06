add_library(lircplayer101 INTERFACE)

target_sources(lircplayer101 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LircRemote101/LircRemote101.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LircRemote101/LircRemote101.h"
)

target_include_directories(lircplayer101 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LircRemote101"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(lircplayer101 INTERFACE
    arduino-compat
)
