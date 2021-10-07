add_library(pac-pgmwrap INTERFACE)

target_sources(pac-pgmwrap INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PGMWrap/PGMWrap.h"
)

target_include_directories(pac-pgmwrap INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PGMWrap"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pgmwrap INTERFACE
    arduino-compat
)
