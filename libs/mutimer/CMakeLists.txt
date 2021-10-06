add_library(mutimer INTERFACE)

target_sources(mutimer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/muTimer/src/muTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/muTimer/src/muTimer.h"
)

target_include_directories(mutimer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/muTimer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mutimer INTERFACE
    arduino-compat
)
