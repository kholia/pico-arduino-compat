add_library(pro-trinket-usb-keyboard-library INTERFACE)

target_sources(pro-trinket-usb-keyboard-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Pro_Trinket_USB_Keyboard_Library/ProTrinketKeyboard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Pro_Trinket_USB_Keyboard_Library/ProTrinketKeyboardC.c"
  "${CMAKE_CURRENT_LIST_DIR}/Pro_Trinket_USB_Keyboard_Library/usbdrv_includer.c"
  "${CMAKE_CURRENT_LIST_DIR}/Pro_Trinket_USB_Keyboard_Library/usbdrv/oddebug.c"
  "${CMAKE_CURRENT_LIST_DIR}/Pro_Trinket_USB_Keyboard_Library/usbdrv/usbdrv.c"
  "${CMAKE_CURRENT_LIST_DIR}/Pro_Trinket_USB_Keyboard_Library/usbconfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Pro_Trinket_USB_Keyboard_Library/ProTrinketKeyboardC.h"
  "${CMAKE_CURRENT_LIST_DIR}/Pro_Trinket_USB_Keyboard_Library/cmdline_defs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Pro_Trinket_USB_Keyboard_Library/ProTrinketKeyboard.h"
  "${CMAKE_CURRENT_LIST_DIR}/Pro_Trinket_USB_Keyboard_Library/usbdrv/usbdrv.h"
  "${CMAKE_CURRENT_LIST_DIR}/Pro_Trinket_USB_Keyboard_Library/usbdrv/oddebug.h"
  "${CMAKE_CURRENT_LIST_DIR}/Pro_Trinket_USB_Keyboard_Library/usbdrv/usbportability.h"
)

target_include_directories(pro-trinket-usb-keyboard-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Pro_Trinket_USB_Keyboard_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pro-trinket-usb-keyboard-library INTERFACE
    arduino-compat
)
