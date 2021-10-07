add_library(pac-clap INTERFACE)

target_sources(pac-clap INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Clap/src/Clap.h"
)

target_include_directories(pac-clap INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Clap/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-clap INTERFACE
    arduino-compat
)
