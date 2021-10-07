add_library(pac-mouse INTERFACE)

target_sources(pac-mouse INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Mouse/src/Mouse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Mouse/src/Mouse.h"
)

target_include_directories(pac-mouse INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Mouse/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mouse INTERFACE
    arduino-compat
)
