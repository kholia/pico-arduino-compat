add_library(pac-xlr8core INTERFACE)

target_sources(pac-xlr8core INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XLR8Core/src/XLR8Core.h"
)

target_include_directories(pac-xlr8core INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XLR8Core/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-xlr8core INTERFACE
    arduino-compat
)
