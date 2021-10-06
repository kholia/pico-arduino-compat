add_library(threadedtimer INTERFACE)

target_sources(threadedtimer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ThreadedTimer/src/threadedtimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ThreadedTimer/src/threadedtimer.h"
)

target_include_directories(threadedtimer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ThreadedTimer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(threadedtimer INTERFACE
    arduino-compat
)
