add_library(ps2keymap INTERFACE)

target_sources(ps2keymap INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PS2KeyMap/src/PS2KeyMap.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PS2KeyMap/src/PS2KeyMap.h"
  "${CMAKE_CURRENT_LIST_DIR}/PS2KeyMap/src/PS2KeyData.h"
)

target_include_directories(ps2keymap INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PS2KeyMap/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ps2keymap INTERFACE
    arduino-compat
)
