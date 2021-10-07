add_library(pac-lircplayer101 INTERFACE)

target_sources(pac-lircplayer101 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LircRemote101/LircRemote101.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LircRemote101/LircRemote101.h"
)

target_include_directories(pac-lircplayer101 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LircRemote101"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lircplayer101 INTERFACE
    arduino-compat
)
