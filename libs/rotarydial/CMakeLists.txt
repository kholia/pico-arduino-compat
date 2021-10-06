add_library(rotarydial INTERFACE)

target_sources(rotarydial INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RotaryDial/src/RotaryDial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RotaryDial/src/RotaryDial.h"
)

target_include_directories(rotarydial INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RotaryDial/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rotarydial INTERFACE
    arduino-compat
)
