add_library(grove-mini-track-ball INTERFACE)

target_sources(grove-mini-track-ball INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Mini_Track_Ball/MiniTrackball.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Mini_Track_Ball/MiniTrackball.h"
)

target_include_directories(grove-mini-track-ball INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_Mini_Track_Ball"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(grove-mini-track-ball INTERFACE
    arduino-compat
)
