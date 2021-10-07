add_library(pac-amigamousejoyemu INTERFACE)

target_sources(pac-amigamousejoyemu INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AmigaMouseJoyEmu/AmigaMouseJoyEmu.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AmigaMouseJoyEmu/AmigaMouseJoyEmu.h"
)

target_include_directories(pac-amigamousejoyemu INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AmigaMouseJoyEmu"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-amigamousejoyemu INTERFACE
    arduino-compat
)
