add_library(pac-tgp-lcd-keypad INTERFACE)

target_sources(pac-tgp-lcd-keypad INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TGP_LCD_Keypad/EcranLCD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TGP_LCD_Keypad/LCDKeypad.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TGP_LCD_Keypad/Calibration.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TGP_LCD_Keypad/BoutonLCD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TGP_LCD_Keypad/EcranLCD.h"
  "${CMAKE_CURRENT_LIST_DIR}/TGP_LCD_Keypad/BoutonLCD.h"
  "${CMAKE_CURRENT_LIST_DIR}/TGP_LCD_Keypad/LCDKeypad.h"
  "${CMAKE_CURRENT_LIST_DIR}/TGP_LCD_Keypad/Calibration.h"
)

target_include_directories(pac-tgp-lcd-keypad INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TGP_LCD_Keypad"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-liquidcrystal)
    add_subdirectory(../../libs/liquidcrystal build_pac-liquidcrystal)
endif()

target_link_libraries(pac-tgp-lcd-keypad INTERFACE
    arduino-compat
    pac-liquidcrystal
)
