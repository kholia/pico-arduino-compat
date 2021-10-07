add_library(pac-arduino-display-lcdkeypad INTERFACE)

target_sources(pac-arduino-display-lcdkeypad INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-display-lcdkeypad/LiquidTWI2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-display-lcdkeypad/LcdKeypad.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-display-lcdkeypad/LiquidTWI2.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-display-lcdkeypad/LcdKeypad.h"
)

target_include_directories(pac-arduino-display-lcdkeypad INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-display-lcdkeypad"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-liquidcrystal)
    add_subdirectory(../../libs/liquidcrystal build_pac-liquidcrystal)
endif()

target_link_libraries(pac-arduino-display-lcdkeypad INTERFACE
    arduino-compat
    pac-liquidcrystal
)
