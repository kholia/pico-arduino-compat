add_library(pac-isfet-board-library INTERFACE)

target_sources(pac-isfet-board-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-isfetboard/isfetboard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-isfetboard/isfetboard.h"
)

target_include_directories(pac-isfet-board-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-isfetboard"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-isfet-board-library INTERFACE
    arduino-compat
)
