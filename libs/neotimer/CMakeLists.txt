add_library(pac-neotimer INTERFACE)

target_sources(pac-neotimer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/neotimer/src/neotimer.h"
)

target_include_directories(pac-neotimer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/neotimer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-neotimer INTERFACE
    arduino-compat
)
