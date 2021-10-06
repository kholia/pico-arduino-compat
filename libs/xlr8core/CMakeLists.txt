add_library(xlr8core INTERFACE)

target_sources(xlr8core INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XLR8Core/src/XLR8Core.h"
)

target_include_directories(xlr8core INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XLR8Core/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(xlr8core INTERFACE
    arduino-compat
)
