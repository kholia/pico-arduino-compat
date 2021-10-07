add_library(pac-xbeeatcmds INTERFACE)

target_sources(pac-xbeeatcmds INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XBeeATCmds/XBeeATCmds.h"
)

target_include_directories(pac-xbeeatcmds INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XBeeATCmds"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-xbeeatcmds INTERFACE
    arduino-compat
)
