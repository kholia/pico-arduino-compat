add_library(random16 INTERFACE)

target_sources(random16 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Random16/src/Random16.h"
)

target_include_directories(random16 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Random16/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(random16 INTERFACE
    arduino-compat
)
