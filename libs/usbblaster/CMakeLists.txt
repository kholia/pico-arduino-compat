add_library(pac-usbblaster INTERFACE)

target_sources(pac-usbblaster INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/USBBlaster/src/ft245rom.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBBlaster/src/Blaster.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBBlaster/src/base.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBBlaster/src/USBConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBBlaster/src/blaster_port.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBBlaster/src/ringbuf.h"
)

target_include_directories(pac-usbblaster INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/USBBlaster/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-usbblaster INTERFACE
    arduino-compat
)
