add_library(ringbuffer INTERFACE)

target_sources(ringbuffer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RingBuffer/src/RingBuf.h"
)

target_include_directories(ringbuffer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RingBuffer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ringbuffer INTERFACE
    arduino-compat
)
