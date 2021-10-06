add_library(adafruit-keypad INTERFACE)

target_sources(adafruit-keypad INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Keypad/Adafruit_Keypad.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Keypad/Adafruit_Keypad.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Keypad/Adafruit_Keypad_Ringbuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Keypad/examples/keypad_test/keypad_config.h"
)

target_include_directories(adafruit-keypad INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Keypad"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-keypad INTERFACE
    arduino-compat
)
