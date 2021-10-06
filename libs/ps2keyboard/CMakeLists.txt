add_library(ps2keyboard INTERFACE)

target_sources(ps2keyboard INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PS2Keyboard/PS2Keyboard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PS2Keyboard/PS2Keyboard.h"
  "${CMAKE_CURRENT_LIST_DIR}/PS2Keyboard/utility/int_pins.h"
)

target_include_directories(ps2keyboard INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PS2Keyboard"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ps2keyboard INTERFACE
    arduino-compat
)
