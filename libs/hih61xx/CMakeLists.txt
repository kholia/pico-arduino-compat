add_library(pac-hih61xx INTERFACE)

target_sources(pac-hih61xx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HIH61xx/src/HIH61xx.h"
)

target_include_directories(pac-hih61xx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HIH61xx/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-hih61xx INTERFACE
    arduino-compat
)
