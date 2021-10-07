add_library(pac-ringbuffer INTERFACE)

target_sources(pac-ringbuffer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RingBuffer/src/RingBuf.h"
)

target_include_directories(pac-ringbuffer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RingBuffer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ringbuffer INTERFACE
    arduino-compat
)
