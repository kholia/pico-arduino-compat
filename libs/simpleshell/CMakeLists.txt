add_library(pac-simpleshell INTERFACE)

target_sources(pac-simpleshell INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SimpleShell/src/SimpleShell.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleShell/src/SimpleShell.h"
)

target_include_directories(pac-simpleshell INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SimpleShell/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-simpleshell INTERFACE
    arduino-compat
)
