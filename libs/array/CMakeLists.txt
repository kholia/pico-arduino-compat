add_library(pac-array INTERFACE)

target_sources(pac-array INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Array/src/Array/Array.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Array/src/Array.h"
  "${CMAKE_CURRENT_LIST_DIR}/Array/src/Array/ArrayDefinitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/Array/src/Array/ArrayIterator.h"
)

target_include_directories(pac-array INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Array/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-array INTERFACE
    arduino-compat
)
