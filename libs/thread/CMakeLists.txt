add_library(thread INTERFACE)

target_sources(thread INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Thread/Thread.c"
  "${CMAKE_CURRENT_LIST_DIR}/Thread/Thread.h"
)

target_include_directories(thread INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Thread"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(thread INTERFACE
    arduino-compat
)
