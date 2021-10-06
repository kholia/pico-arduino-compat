add_library(ps2dev INTERFACE)

target_sources(ps2dev INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ps2dev/src/ps2dev.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ps2dev/src/ps2dev.h"
)

target_include_directories(ps2dev INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ps2dev/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ps2dev INTERFACE
    arduino-compat
)
