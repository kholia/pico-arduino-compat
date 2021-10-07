add_library(pac-nodelay INTERFACE)

target_sources(pac-nodelay INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NoDelay/src/NoDelay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NoDelay/src/NoDelay.h"
)

target_include_directories(pac-nodelay INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NoDelay/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-nodelay INTERFACE
    arduino-compat
)
