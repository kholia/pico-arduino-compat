add_library(pac-ps2keyboardhost INTERFACE)

target_sources(pac-ps2keyboardhost INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PS2KeyboardHost/src/ps2_UsbTranslator.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/PS2KeyboardHost/src/ps2_AnsiTranslator.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/PS2KeyboardHost/src/ps2_NeutralTranslator.h"
  "${CMAKE_CURRENT_LIST_DIR}/PS2KeyboardHost/src/ps2_UsbTranslator.h"
  "${CMAKE_CURRENT_LIST_DIR}/PS2KeyboardHost/src/ps2_KeyboardOutput.h"
  "${CMAKE_CURRENT_LIST_DIR}/PS2KeyboardHost/src/ps2_KeyboardOutputBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/PS2KeyboardHost/src/ps2_SimpleDiagnostics.h"
  "${CMAKE_CURRENT_LIST_DIR}/PS2KeyboardHost/src/ps2_Parity.h"
  "${CMAKE_CURRENT_LIST_DIR}/PS2KeyboardHost/src/ps2_Keyboard.h"
  "${CMAKE_CURRENT_LIST_DIR}/PS2KeyboardHost/src/ps2_ScanCodeSet.h"
  "${CMAKE_CURRENT_LIST_DIR}/PS2KeyboardHost/src/ps2_TypematicStartDelay.h"
  "${CMAKE_CURRENT_LIST_DIR}/PS2KeyboardHost/src/ps2_NullDiagnostics.h"
  "${CMAKE_CURRENT_LIST_DIR}/PS2KeyboardHost/src/ps2_KeyboardLeds.h"
  "${CMAKE_CURRENT_LIST_DIR}/PS2KeyboardHost/src/ps2_AnsiTranslator.h"
  "${CMAKE_CURRENT_LIST_DIR}/PS2KeyboardHost/src/ps2_TypematicRate.h"
)

target_include_directories(pac-ps2keyboardhost INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PS2KeyboardHost/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ps2keyboardhost INTERFACE
    arduino-compat
)
