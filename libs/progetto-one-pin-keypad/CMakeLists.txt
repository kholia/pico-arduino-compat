add_library(progetto-one-pin-keypad INTERFACE)

target_sources(progetto-one-pin-keypad INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Progetto_One_Pin_Keypad_Arduino_Library/src/OnePinKeypad.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Progetto_One_Pin_Keypad_Arduino_Library/src/OnePinKeypad.h"
)

target_include_directories(progetto-one-pin-keypad INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Progetto_One_Pin_Keypad_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(progetto-one-pin-keypad INTERFACE
    arduino-compat
)
