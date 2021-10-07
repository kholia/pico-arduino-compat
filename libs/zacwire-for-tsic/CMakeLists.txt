add_library(pac-zacwire-for-tsic INTERFACE)

target_sources(pac-zacwire-for-tsic INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ZACwire-Library/ZACwire.h"
)

target_include_directories(pac-zacwire-for-tsic INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ZACwire-Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-zacwire-for-tsic INTERFACE
    arduino-compat
)
