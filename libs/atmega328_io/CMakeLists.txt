add_library(pac-atmega328_io INTERFACE)

target_sources(pac-atmega328_io INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Atmega328_IO/src/Atmega328_IO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Atmega328_IO/src/Atmega328_IO.h"
)

target_include_directories(pac-atmega328_io INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Atmega328_IO/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-atmega328_io INTERFACE
    arduino-compat
)
