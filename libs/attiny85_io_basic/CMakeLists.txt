add_library(attiny85_io_basic INTERFACE)

target_sources(attiny85_io_basic INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Attiny85_IO_basic/src/Attiny85_IO_basic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Attiny85_IO_basic/src/Attiny85_IO_basic.h"
)

target_include_directories(attiny85_io_basic INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Attiny85_IO_basic/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(attiny85_io_basic INTERFACE
    arduino-compat
)
