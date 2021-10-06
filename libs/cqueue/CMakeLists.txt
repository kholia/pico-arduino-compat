add_library(cqueue INTERFACE)

target_sources(cqueue INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/cQueue/src/cQueue.c"
  "${CMAKE_CURRENT_LIST_DIR}/cQueue/src/cQueue.h"
)

target_include_directories(cqueue INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/cQueue/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(cqueue INTERFACE
    arduino-compat
)
