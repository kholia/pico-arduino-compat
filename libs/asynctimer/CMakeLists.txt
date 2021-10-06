add_library(asynctimer INTERFACE)

target_sources(asynctimer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AsyncTimer/src/AsyncTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncTimer/src/AsyncTimer.h"
)

target_include_directories(asynctimer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AsyncTimer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(asynctimer INTERFACE
    arduino-compat
)
