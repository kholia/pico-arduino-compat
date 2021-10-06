add_library(tinypico-helper-library INTERFACE)

target_sources(tinypico-helper-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/tinypico-helper/src/TinyPICO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/tinypico-helper/src/TinyPICO.h"
)

target_include_directories(tinypico-helper-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/tinypico-helper/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tinypico-helper-library INTERFACE
    arduino-compat
)
