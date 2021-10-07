add_library(pac-mdash INTERFACE)

target_sources(pac-mdash INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mDash/other/posix.c"
  "${CMAKE_CURRENT_LIST_DIR}/mDash/src/mDash.h"
)

target_include_directories(pac-mdash INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mDash/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mdash INTERFACE
    arduino-compat
)
