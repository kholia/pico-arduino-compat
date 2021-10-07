add_library(pac-spresenseneopixel INTERFACE)

target_sources(pac-spresenseneopixel INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SpresenseNeoPixel/SpresenseNeoPixel.h"
)

target_include_directories(pac-spresenseneopixel INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SpresenseNeoPixel"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-spresenseneopixel INTERFACE
    arduino-compat
)
