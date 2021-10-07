add_library(pac-ps2dev INTERFACE)

target_sources(pac-ps2dev INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ps2dev/src/ps2dev.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ps2dev/src/ps2dev.h"
)

target_include_directories(pac-ps2dev INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ps2dev/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ps2dev INTERFACE
    arduino-compat
)
