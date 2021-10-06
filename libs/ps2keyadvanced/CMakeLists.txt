add_library(ps2keyadvanced INTERFACE)

target_sources(ps2keyadvanced INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PS2KeyAdvanced/src/PS2KeyAdvanced.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PS2KeyAdvanced/src/PS2KeyTable.h"
  "${CMAKE_CURRENT_LIST_DIR}/PS2KeyAdvanced/src/PS2KeyCode.h"
  "${CMAKE_CURRENT_LIST_DIR}/PS2KeyAdvanced/src/PS2KeyAdvanced.h"
)

target_include_directories(ps2keyadvanced INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PS2KeyAdvanced/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ps2keyadvanced INTERFACE
    arduino-compat
)
