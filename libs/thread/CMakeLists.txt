add_library(pac-thread INTERFACE)

target_sources(pac-thread INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Thread/Thread.c"
  "${CMAKE_CURRENT_LIST_DIR}/Thread/Thread.h"
)

target_include_directories(pac-thread INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Thread"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-thread INTERFACE
    arduino-compat
)
