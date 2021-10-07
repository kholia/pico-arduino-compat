add_library(pac-acemenu INTERFACE)

target_sources(pac-acemenu INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AceMenu/src/Display.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceMenu/src/Keypad.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceMenu/src/Format.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceMenu/src/AceMenu.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceMenu/examples/Quad/QuadAlpha.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceMenu/examples/Quad/Buttons.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceMenu/examples/Terminal/Terminal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceMenu/src/Keypad.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceMenu/src/Format.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceMenu/src/AceMenu.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceMenu/src/Display.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceMenu/examples/Quad/Buttons.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceMenu/examples/Quad/QuadAlpha.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceMenu/examples/Terminal/Terminal.h"
)

target_include_directories(pac-acemenu INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AceMenu/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-acemenu INTERFACE
    arduino-compat
)
