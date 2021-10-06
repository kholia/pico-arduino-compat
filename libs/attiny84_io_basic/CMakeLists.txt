add_library(attiny84_io_basic INTERFACE)

target_sources(attiny84_io_basic INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Attiny84_IO_basic/src/Attiny84_IO_basic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Attiny84_IO_basic/src/Attiny84_IO_basic.h"
)

target_include_directories(attiny84_io_basic INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Attiny84_IO_basic/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(attiny84_io_basic INTERFACE
    arduino-compat
)
