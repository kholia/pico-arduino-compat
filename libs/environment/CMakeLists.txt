add_library(pac-environment INTERFACE)

target_sources(pac-environment INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Environment/src/Environment.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Environment/src/Environment.h"
)

target_include_directories(pac-environment INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Environment/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-environment INTERFACE
    arduino-compat
)
