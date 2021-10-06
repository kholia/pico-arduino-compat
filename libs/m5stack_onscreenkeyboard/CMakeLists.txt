add_library(m5stack_onscreenkeyboard INTERFACE)

target_sources(m5stack_onscreenkeyboard INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack_OnScreenKeyboard/src/M5JoyStick.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack_OnScreenKeyboard/src/M5FACESEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack_OnScreenKeyboard/src/M5OnScreenKeyboard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack_OnScreenKeyboard/src/M5ButtonDrawer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack_OnScreenKeyboard/src/M5PLUSEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack_OnScreenKeyboard/src/M5ButtonDrawer.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack_OnScreenKeyboard/src/M5JoyStick.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack_OnScreenKeyboard/src/M5FACESEncoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack_OnScreenKeyboard/src/M5PLUSEncoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack_OnScreenKeyboard/src/M5OnScreenKeyboard.h"
)

target_include_directories(m5stack_onscreenkeyboard INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M5Stack_OnScreenKeyboard/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(m5stack_onscreenkeyboard INTERFACE
    arduino-compat
)
