add_library(phpoc-expansion INTERFACE)

target_sources(phpoc-expansion INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-PhpocExpansion/src/PhpocExpansion.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-PhpocExpansion/src/PhpocExpansion.h"
)

target_include_directories(phpoc-expansion INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-PhpocExpansion/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(phpoc-expansion INTERFACE
    arduino-compat
)
