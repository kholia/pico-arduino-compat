add_library(tinysnore INTERFACE)

target_sources(tinysnore INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinySnore/src/tinysnore.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinySnore/src/tinysnore.h"
)

target_include_directories(tinysnore INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinySnore/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tinysnore INTERFACE
    arduino-compat
)
