add_library(pac-plex64 INTERFACE)

target_sources(pac-plex64 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Plex64/Plex64.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Plex64/Plex64.h"
)

target_include_directories(pac-plex64 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Plex64"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-plex64 INTERFACE
    arduino-compat
)
