add_library(pac-grove-mini-track-ball INTERFACE)

target_sources(pac-grove-mini-track-ball INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Mini_Track_Ball/MiniTrackball.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Mini_Track_Ball/MiniTrackball.h"
)

target_include_directories(pac-grove-mini-track-ball INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_Mini_Track_Ball"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-grove-mini-track-ball INTERFACE
    arduino-compat
)
