add_library(arduino-display-lcdkeypad INTERFACE)

target_sources(arduino-display-lcdkeypad INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-display-lcdkeypad/LiquidTWI2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-display-lcdkeypad/LcdKeypad.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-display-lcdkeypad/LiquidTWI2.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-display-lcdkeypad/LcdKeypad.h"
)

target_include_directories(arduino-display-lcdkeypad INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-display-lcdkeypad"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-liquid-crystal)
    add_subdirectory(../../official-libs/liquid-crystal build_official-liquid-crystal)
endif()

target_link_libraries(arduino-display-lcdkeypad INTERFACE
    arduino-compat
    official-liquid-crystal
)
