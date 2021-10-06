add_library(m10ps2 INTERFACE)

target_sources(m10ps2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M10PS2/src/M10PS2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M10PS2/src/M10PS2.h"
)

target_include_directories(m10ps2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M10PS2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(m10ps2 INTERFACE
    arduino-compat
)
