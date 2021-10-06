add_library(fixed INTERFACE)

target_sources(fixed INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/fixed/src/fixed.h"
)

target_include_directories(fixed INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/fixed/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fixed INTERFACE
    arduino-compat
)
