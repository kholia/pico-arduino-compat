add_library(pac-ringbufcpp INTERFACE)

target_sources(pac-ringbufcpp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Embedded_RingBuf_CPP/examples_no_arduino/test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Embedded_RingBuf_CPP/RingBufHelpers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Embedded_RingBuf_CPP/RingBufCPP.h"
)

target_include_directories(pac-ringbufcpp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Embedded_RingBuf_CPP"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ringbufcpp INTERFACE
    arduino-compat
)
