add_library(hardwire INTERFACE)

target_sources(hardwire INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HardWire-Arduino-Library/src/HardWire.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HardWire-Arduino-Library/src/utility/twi.c"
  "${CMAKE_CURRENT_LIST_DIR}/HardWire-Arduino-Library/src/HardWire.h"
  "${CMAKE_CURRENT_LIST_DIR}/HardWire-Arduino-Library/src/utility/twi.h"
)

target_include_directories(hardwire INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HardWire-Arduino-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(hardwire INTERFACE
    arduino-compat
)
