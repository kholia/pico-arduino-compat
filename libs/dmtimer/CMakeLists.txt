add_library(dmtimer INTERFACE)

target_sources(dmtimer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Timer/src/dmtimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Timer/src/dmtimer.h"
)

target_include_directories(dmtimer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Timer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dmtimer INTERFACE
    arduino-compat
)
