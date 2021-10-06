add_library(circularbuffer INTERFACE)

target_sources(circularbuffer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CircularBuffer/CircularBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/CircularBuffer/examples/Object/Record.h"
)

target_include_directories(circularbuffer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CircularBuffer"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(circularbuffer INTERFACE
    arduino-compat
)
