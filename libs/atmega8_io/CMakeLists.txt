add_library(atmega8_io INTERFACE)

target_sources(atmega8_io INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Atmega8_IO/src/Atmega8_IO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Atmega8_IO/src/Atmega8_IO.h"
)

target_include_directories(atmega8_io INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Atmega8_IO/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(atmega8_io INTERFACE
    arduino-compat
)
