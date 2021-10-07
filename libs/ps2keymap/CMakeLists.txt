add_library(pac-ps2keymap INTERFACE)

target_sources(pac-ps2keymap INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PS2KeyMap/src/PS2KeyMap.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PS2KeyMap/src/PS2KeyMap.h"
  "${CMAKE_CURRENT_LIST_DIR}/PS2KeyMap/src/PS2KeyData.h"
)

target_include_directories(pac-ps2keymap INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PS2KeyMap/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ps2keymap INTERFACE
    arduino-compat
)
