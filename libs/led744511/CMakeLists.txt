add_library(led744511 INTERFACE)

target_sources(led744511 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LED744511/src/LED744511.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LED744511/src/LED744511.h"
)

target_include_directories(led744511 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LED744511/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(led744511 INTERFACE
    arduino-compat
)
