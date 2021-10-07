add_library(pac-usbpause INTERFACE)

target_sources(pac-usbpause INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/usb-pause-arduino/USBPause.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/usb-pause-arduino/USBPause.h"
)

target_include_directories(pac-usbpause INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/usb-pause-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-usbpause INTERFACE
    arduino-compat
)
