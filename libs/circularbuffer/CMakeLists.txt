add_library(pac-circularbuffer INTERFACE)

target_sources(pac-circularbuffer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CircularBuffer/CircularBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/CircularBuffer/examples/Object/Record.h"
)

target_include_directories(pac-circularbuffer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CircularBuffer"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-circularbuffer INTERFACE
    arduino-compat
)
