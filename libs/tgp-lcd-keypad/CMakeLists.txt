add_library(tgp-lcd-keypad INTERFACE)

target_sources(tgp-lcd-keypad INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TGP_LCD_Keypad/EcranLCD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TGP_LCD_Keypad/LCDKeypad.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TGP_LCD_Keypad/Calibration.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TGP_LCD_Keypad/BoutonLCD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TGP_LCD_Keypad/EcranLCD.h"
  "${CMAKE_CURRENT_LIST_DIR}/TGP_LCD_Keypad/BoutonLCD.h"
  "${CMAKE_CURRENT_LIST_DIR}/TGP_LCD_Keypad/LCDKeypad.h"
  "${CMAKE_CURRENT_LIST_DIR}/TGP_LCD_Keypad/Calibration.h"
)

target_include_directories(tgp-lcd-keypad INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TGP_LCD_Keypad"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-liquid-crystal)
    add_subdirectory(../../official-libs/liquid-crystal build_official-liquid-crystal)
endif()

target_link_libraries(tgp-lcd-keypad INTERFACE
    arduino-compat
    official-liquid-crystal
)
