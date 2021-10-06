add_library(ringbuf INTERFACE)

target_sources(ringbuf INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoRingBuffer/RingBuf.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoRingBuffer/RingBuf.h"
)

target_include_directories(ringbuf INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoRingBuffer"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ringbuf INTERFACE
    arduino-compat
)
