add_library(pac-hid-buttons INTERFACE)

target_sources(pac-hid-buttons INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HID_Buttons/src/HID_Button_API.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HID_Buttons/src/HID_Button_API.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID_Buttons/src/HID_Buttons.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID_Buttons/src/variants/HID_Button_Joystick.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID_Buttons/src/variants/HID_Button_Mouse.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID_Buttons/src/variants/HID_Button_Keyboard.h"
)

target_include_directories(pac-hid-buttons INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HID_Buttons/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-hid-buttons INTERFACE
    arduino-compat
)
