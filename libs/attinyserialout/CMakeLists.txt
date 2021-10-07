add_library(pac-attinyserialout INTERFACE)

target_sources(pac-attinyserialout INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ATtinySerialOut/src/ATtinySerialOut.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ATtinySerialOut/src/ATtinySerialOut.h"
)

target_include_directories(pac-attinyserialout INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ATtinySerialOut/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-attinyserialout INTERFACE
    arduino-compat
)
