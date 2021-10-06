add_library(keyboard INTERFACE)

target_sources(keyboard INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Keyboard/src/Keyboard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Keyboard/src/Keyboard.h"
)

target_include_directories(keyboard INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Keyboard/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(keyboard INTERFACE
    arduino-compat
)
