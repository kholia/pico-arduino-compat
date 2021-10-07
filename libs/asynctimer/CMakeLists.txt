add_library(pac-asynctimer INTERFACE)

target_sources(pac-asynctimer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AsyncTimer/src/AsyncTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncTimer/src/AsyncTimer.h"
)

target_include_directories(pac-asynctimer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AsyncTimer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-asynctimer INTERFACE
    arduino-compat
)
