add_library(clap INTERFACE)

target_sources(clap INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Clap/src/Clap.h"
)

target_include_directories(clap INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Clap/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(clap INTERFACE
    arduino-compat
)
