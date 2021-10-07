add_library(pac-fixed INTERFACE)

target_sources(pac-fixed INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/fixed/src/fixed.h"
)

target_include_directories(pac-fixed INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/fixed/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fixed INTERFACE
    arduino-compat
)
