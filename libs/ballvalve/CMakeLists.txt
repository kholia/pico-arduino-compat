add_library(ballvalve INTERFACE)

target_sources(ballvalve INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ballvalve/src/Ballvalve.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ballvalve/src/Ballvalve.h"
)

target_include_directories(ballvalve INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ballvalve/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ballvalve INTERFACE
    arduino-compat
)
