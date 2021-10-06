add_library(nodelay INTERFACE)

target_sources(nodelay INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NoDelay/src/NoDelay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NoDelay/src/NoDelay.h"
)

target_include_directories(nodelay INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NoDelay/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(nodelay INTERFACE
    arduino-compat
)
