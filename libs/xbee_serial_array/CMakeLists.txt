add_library(xbee_serial_array INTERFACE)

target_sources(xbee_serial_array INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/xbee_serial_array/src/xbee_serial_array.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/xbee_serial_array/src/xbee_serial_array.h"
)

target_include_directories(xbee_serial_array INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/xbee_serial_array/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(xbee_serial_array INTERFACE
    arduino-compat
)
