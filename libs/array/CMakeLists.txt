add_library(array INTERFACE)

target_sources(array INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Array/src/Array/Array.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Array/src/Array.h"
  "${CMAKE_CURRENT_LIST_DIR}/Array/src/Array/ArrayDefinitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/Array/src/Array/ArrayIterator.h"
)

target_include_directories(array INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Array/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(array INTERFACE
    arduino-compat
)
