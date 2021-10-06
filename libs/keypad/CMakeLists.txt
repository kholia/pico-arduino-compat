add_library(keypad INTERFACE)

target_sources(keypad INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Keypad/src/Keypad.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Keypad/src/Key.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Keypad/src/Keypad.h"
  "${CMAKE_CURRENT_LIST_DIR}/Keypad/src/Key.h"
)

target_include_directories(keypad INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Keypad/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(keypad INTERFACE
    arduino-compat
)
