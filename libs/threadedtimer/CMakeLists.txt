add_library(pac-threadedtimer INTERFACE)

target_sources(pac-threadedtimer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ThreadedTimer/src/threadedtimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ThreadedTimer/src/threadedtimer.h"
)

target_include_directories(pac-threadedtimer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ThreadedTimer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-threadedtimer INTERFACE
    arduino-compat
)
