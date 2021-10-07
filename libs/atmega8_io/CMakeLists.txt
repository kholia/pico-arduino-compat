add_library(pac-atmega8_io INTERFACE)

target_sources(pac-atmega8_io INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Atmega8_IO/src/Atmega8_IO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Atmega8_IO/src/Atmega8_IO.h"
)

target_include_directories(pac-atmega8_io INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Atmega8_IO/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-atmega8_io INTERFACE
    arduino-compat
)
