add_library(pac-attiny84_io INTERFACE)

target_sources(pac-attiny84_io INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Attiny84_IO/src/Attiny84_IO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Attiny84_IO/src/Attiny84_IO.h"
)

target_include_directories(pac-attiny84_io INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Attiny84_IO/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-attiny84_io INTERFACE
    arduino-compat
)
