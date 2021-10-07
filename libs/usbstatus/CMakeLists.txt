add_library(pac-usbstatus INTERFACE)

target_sources(pac-usbstatus INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/USBStatus/USBStatus.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBStatus/USBStatus.h"
)

target_include_directories(pac-usbstatus INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/USBStatus"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-usbstatus INTERFACE
    arduino-compat
)
