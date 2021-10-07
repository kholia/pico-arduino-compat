add_library(pac-rtt-qrcode INTERFACE)

target_sources(pac-rtt-qrcode INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RTT-QRCode/src/qrcode.c"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-QRCode/src/qrcode.h"
)

target_include_directories(pac-rtt-qrcode INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RTT-QRCode/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rtt-qrcode INTERFACE
    arduino-compat
)
