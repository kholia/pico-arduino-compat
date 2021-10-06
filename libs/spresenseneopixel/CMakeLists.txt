add_library(spresenseneopixel INTERFACE)

target_sources(spresenseneopixel INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SpresenseNeoPixel/SpresenseNeoPixel.h"
)

target_include_directories(spresenseneopixel INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SpresenseNeoPixel"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(spresenseneopixel INTERFACE
    arduino-compat
)
