add_library(pac-random16 INTERFACE)

target_sources(pac-random16 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Random16/src/Random16.h"
)

target_include_directories(pac-random16 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Random16/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-random16 INTERFACE
    arduino-compat
)
