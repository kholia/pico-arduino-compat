add_library(attinyserialout INTERFACE)

target_sources(attinyserialout INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ATtinySerialOut/src/ATtinySerialOut.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ATtinySerialOut/src/ATtinySerialOut.h"
)

target_include_directories(attinyserialout INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ATtinySerialOut/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(attinyserialout INTERFACE
    arduino-compat
)
