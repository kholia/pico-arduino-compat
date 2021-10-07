add_library(pac-rotarydial INTERFACE)

target_sources(pac-rotarydial INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RotaryDial/src/RotaryDial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RotaryDial/src/RotaryDial.h"
)

target_include_directories(pac-rotarydial INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RotaryDial/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rotarydial INTERFACE
    arduino-compat
)
