add_library(xbee-arduino-library INTERFACE)

target_sources(xbee-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/xbee-arduino/Printers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/xbee-arduino/XBee.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/xbee-arduino/Printers.h"
  "${CMAKE_CURRENT_LIST_DIR}/xbee-arduino/XBee.h"
  "${CMAKE_CURRENT_LIST_DIR}/xbee-arduino/examples/ZdpScan/zigbee.h"
)

target_include_directories(xbee-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/xbee-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(xbee-arduino-library INTERFACE
    arduino-compat
)
