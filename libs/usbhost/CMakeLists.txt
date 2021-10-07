add_library(pac-usbhost INTERFACE)

target_sources(pac-usbhost INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/USBHost/src/hid2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBHost/src/Usb.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBHost/src/parsetools.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBHost/src/KeyboardController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBHost/src/hidboot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBHost/src/adk.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBHost/src/MouseController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBHost/src/Usb.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBHost/src/usb_ch9.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBHost/src/adk.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBHost/src/confdescparser.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBHost/src/hidboot.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBHost/src/address.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBHost/src/hidusagestr.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBHost/src/parsetools.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBHost/src/hid.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBHost/src/MouseController.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBHost/src/KeyboardController.h"
)

target_include_directories(pac-usbhost INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/USBHost/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-usbhost INTERFACE
    arduino-compat
)
