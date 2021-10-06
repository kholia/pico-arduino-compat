add_library(usbblaster INTERFACE)

target_sources(usbblaster INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/USBBlaster/src/ft245rom.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBBlaster/src/Blaster.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBBlaster/src/base.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBBlaster/src/USBConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBBlaster/src/blaster_port.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBBlaster/src/ringbuf.h"
)

target_include_directories(usbblaster INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/USBBlaster/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(usbblaster INTERFACE
    arduino-compat
)
