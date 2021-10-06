add_library(atmega8_io_basic INTERFACE)

target_sources(atmega8_io_basic INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Atmega8_IO_basic/src/Atmega8_IO_basic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Atmega8_IO_basic/src/Atmega8_IO_basic.h"
)

target_include_directories(atmega8_io_basic INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Atmega8_IO_basic/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(atmega8_io_basic INTERFACE
    arduino-compat
)
