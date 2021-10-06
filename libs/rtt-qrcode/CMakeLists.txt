add_library(rtt-qrcode INTERFACE)

target_sources(rtt-qrcode INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RTT-QRCode/src/qrcode.c"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-QRCode/src/qrcode.h"
)

target_include_directories(rtt-qrcode INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RTT-QRCode/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rtt-qrcode INTERFACE
    arduino-compat
)
