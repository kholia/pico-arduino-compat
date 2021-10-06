add_library(pgmwrap INTERFACE)

target_sources(pgmwrap INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PGMWrap/PGMWrap.h"
)

target_include_directories(pgmwrap INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PGMWrap"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pgmwrap INTERFACE
    arduino-compat
)
