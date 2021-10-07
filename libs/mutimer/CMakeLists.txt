add_library(pac-mutimer INTERFACE)

target_sources(pac-mutimer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/muTimer/src/muTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/muTimer/src/muTimer.h"
)

target_include_directories(pac-mutimer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/muTimer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mutimer INTERFACE
    arduino-compat
)
