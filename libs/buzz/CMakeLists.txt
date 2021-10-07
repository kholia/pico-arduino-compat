add_library(pac-buzz INTERFACE)

target_sources(pac-buzz INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-buzz/src/Buzz.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-buzz/src/Buzz.h"
)

target_include_directories(pac-buzz INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-buzz/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-buzz INTERFACE
    arduino-compat
)
