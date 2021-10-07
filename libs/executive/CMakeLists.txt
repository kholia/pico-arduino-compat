add_library(pac-executive INTERFACE)

target_sources(pac-executive INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Executive/src/Executive.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Executive/src/Executive.h"
)

target_include_directories(pac-executive INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Executive/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-executive INTERFACE
    arduino-compat
)
