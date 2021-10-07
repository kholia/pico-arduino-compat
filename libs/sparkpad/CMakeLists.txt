add_library(pac-sparkpad INTERFACE)

target_sources(pac-sparkpad INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Sparkpad-Arduino/src/sparkpad_keypad.h"
  "${CMAKE_CURRENT_LIST_DIR}/Sparkpad-Arduino/src/sparkpad_oled.h"
  "${CMAKE_CURRENT_LIST_DIR}/Sparkpad-Arduino/src/sparkpad_eeprom.h"
  "${CMAKE_CURRENT_LIST_DIR}/Sparkpad-Arduino/src/sparkpad_leds.h"
  "${CMAKE_CURRENT_LIST_DIR}/Sparkpad-Arduino/src/sparkpad_obs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Sparkpad-Arduino/src/sparkpad_wifi.h"
  "${CMAKE_CURRENT_LIST_DIR}/Sparkpad-Arduino/src/sparkpad_knob.h"
)

target_include_directories(pac-sparkpad INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Sparkpad-Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkpad INTERFACE
    arduino-compat
)
