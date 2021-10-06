add_library(ch9328-keyboard INTERFACE)

target_sources(ch9328-keyboard INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CH9328-Keyboard/src/CH9328Keyboard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CH9328-Keyboard/src/CH9328Keyboard.h"
)

target_include_directories(ch9328-keyboard INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CH9328-Keyboard/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ch9328-keyboard INTERFACE
    arduino-compat
)
