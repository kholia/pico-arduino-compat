add_library(amigamousejoyemu INTERFACE)

target_sources(amigamousejoyemu INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AmigaMouseJoyEmu/AmigaMouseJoyEmu.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AmigaMouseJoyEmu/AmigaMouseJoyEmu.h"
)

target_include_directories(amigamousejoyemu INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AmigaMouseJoyEmu"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(amigamousejoyemu INTERFACE
    arduino-compat
)
