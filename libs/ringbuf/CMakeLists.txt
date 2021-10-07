add_library(pac-ringbuf INTERFACE)

target_sources(pac-ringbuf INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoRingBuffer/RingBuf.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoRingBuffer/RingBuf.h"
)

target_include_directories(pac-ringbuf INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoRingBuffer"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ringbuf INTERFACE
    arduino-compat
)
