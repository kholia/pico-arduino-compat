add_library(pro-trinket-usb-mouse INTERFACE)

target_sources(pro-trinket-usb-mouse INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Pro_Trinket_USB_Mouse/ProTrinketMouse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Pro_Trinket_USB_Mouse/ProTrinketMouseC.c"
  "${CMAKE_CURRENT_LIST_DIR}/Pro_Trinket_USB_Mouse/usbdrv_includer.c"
  "${CMAKE_CURRENT_LIST_DIR}/Pro_Trinket_USB_Mouse/usbdrv/oddebug.c"
  "${CMAKE_CURRENT_LIST_DIR}/Pro_Trinket_USB_Mouse/usbdrv/usbdrv.c"
  "${CMAKE_CURRENT_LIST_DIR}/Pro_Trinket_USB_Mouse/usbconfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Pro_Trinket_USB_Mouse/cmdline_defs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Pro_Trinket_USB_Mouse/ProTrinketMouseC.h"
  "${CMAKE_CURRENT_LIST_DIR}/Pro_Trinket_USB_Mouse/ProTrinketMouse.h"
  "${CMAKE_CURRENT_LIST_DIR}/Pro_Trinket_USB_Mouse/usbdrv/usbdrv.h"
  "${CMAKE_CURRENT_LIST_DIR}/Pro_Trinket_USB_Mouse/usbdrv/oddebug.h"
  "${CMAKE_CURRENT_LIST_DIR}/Pro_Trinket_USB_Mouse/usbdrv/usbportability.h"
)

target_include_directories(pro-trinket-usb-mouse INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Pro_Trinket_USB_Mouse"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pro-trinket-usb-mouse INTERFACE
    arduino-compat
)
