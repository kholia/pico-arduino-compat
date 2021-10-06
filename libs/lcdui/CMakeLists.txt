add_library(lcdui INTERFACE)

target_sources(lcdui INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/VStudio/ArduinoIno.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/src/WindowInterruptConfirm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/src/WindowYesNo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/src/WindowSequence.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/src/LcdUi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/src/Window.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/src/WindowSplash.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/src/WindowChoiceText.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/src/WindowText.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/src/WindowInterrupt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/src/WindowConfirm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/src/WindowInt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/src/LcdScreen.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/src/WindowChoice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/examples/Locoduino/Dcc/WindowLocoControl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/examples/Locoduino/Dcc/UI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/examples/Locoduino/Sample/UI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/examples/Dcc/WindowLocoControl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/examples/Dcc/UI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/src/WindowChoiceText.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/src/ScreenNokia5110.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/src/WindowInt.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/src/WindowSplash.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/src/WindowInterrupt.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/src/WindowInterruptConfirm.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/src/WindowConfirm.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/src/WindowYesNo.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/src/WindowChoice.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/src/ScreenLiquidNew.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/src/Window.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/src/WindowSequence.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/src/Chain.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/src/WindowText.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/src/ScreenLiquid.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/src/LcdScreen.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/examples/Locoduino/Dcc/UI.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/examples/Locoduino/Dcc/WindowLocoControl.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/examples/Locoduino/Sample/UI.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/examples/Dcc/UI.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/examples/Dcc/WindowLocoControl.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/VStudio/LcdUi.h"
  "${CMAKE_CURRENT_LIST_DIR}/LcdUi/src/LcdUi.h"
)

target_include_directories(lcdui INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LcdUi/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-liquid-crystal)
    add_subdirectory(../../official-libs/liquid-crystal build_official-liquid-crystal)
endif()

target_link_libraries(lcdui INTERFACE
    arduino-compat
    official-liquid-crystal
)
