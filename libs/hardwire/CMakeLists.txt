add_library(pac-hardwire INTERFACE)

target_sources(pac-hardwire INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HardWire-Arduino-Library/src/HardWire.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HardWire-Arduino-Library/src/utility/twi.c"
  "${CMAKE_CURRENT_LIST_DIR}/HardWire-Arduino-Library/src/HardWire.h"
  "${CMAKE_CURRENT_LIST_DIR}/HardWire-Arduino-Library/src/utility/twi.h"
)

target_include_directories(pac-hardwire INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HardWire-Arduino-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-hardwire INTERFACE
    arduino-compat
)
