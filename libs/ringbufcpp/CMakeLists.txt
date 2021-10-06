add_library(ringbufcpp INTERFACE)

target_sources(ringbufcpp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Embedded_RingBuf_CPP/examples_no_arduino/test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Embedded_RingBuf_CPP/RingBufHelpers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Embedded_RingBuf_CPP/RingBufCPP.h"
)

target_include_directories(ringbufcpp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Embedded_RingBuf_CPP"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ringbufcpp INTERFACE
    arduino-compat
)
