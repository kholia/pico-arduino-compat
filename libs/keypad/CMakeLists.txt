add_library(pac-keypad INTERFACE)

target_sources(pac-keypad INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Keypad/src/Keypad.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Keypad/src/Key.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Keypad/src/Keypad.h"
  "${CMAKE_CURRENT_LIST_DIR}/Keypad/src/Key.h"
)

target_include_directories(pac-keypad INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Keypad/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-keypad INTERFACE
    arduino-compat
)
