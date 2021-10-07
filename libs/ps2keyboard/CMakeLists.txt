add_library(pac-ps2keyboard INTERFACE)

target_sources(pac-ps2keyboard INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PS2Keyboard/PS2Keyboard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PS2Keyboard/PS2Keyboard.h"
  "${CMAKE_CURRENT_LIST_DIR}/PS2Keyboard/utility/int_pins.h"
)

target_include_directories(pac-ps2keyboard INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PS2Keyboard"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ps2keyboard INTERFACE
    arduino-compat
)
