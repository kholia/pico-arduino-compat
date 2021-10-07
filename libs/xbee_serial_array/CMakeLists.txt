add_library(pac-xbee_serial_array INTERFACE)

target_sources(pac-xbee_serial_array INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/xbee_serial_array/src/xbee_serial_array.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/xbee_serial_array/src/xbee_serial_array.h"
)

target_include_directories(pac-xbee_serial_array INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/xbee_serial_array/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-xbee_serial_array INTERFACE
    arduino-compat
)
