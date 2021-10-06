add_library(executive INTERFACE)

target_sources(executive INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Executive/src/Executive.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Executive/src/Executive.h"
)

target_include_directories(executive INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Executive/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(executive INTERFACE
    arduino-compat
)
