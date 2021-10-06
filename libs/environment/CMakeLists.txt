add_library(environment INTERFACE)

target_sources(environment INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Environment/src/Environment.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Environment/src/Environment.h"
)

target_include_directories(environment INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Environment/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(environment INTERFACE
    arduino-compat
)
