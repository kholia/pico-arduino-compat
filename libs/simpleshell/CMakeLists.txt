add_library(simpleshell INTERFACE)

target_sources(simpleshell INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SimpleShell/src/SimpleShell.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleShell/src/SimpleShell.h"
)

target_include_directories(simpleshell INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SimpleShell/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(simpleshell INTERFACE
    arduino-compat
)
