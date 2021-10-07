add_library(pac-esp-qrcode INTERFACE)

target_sources(pac-esp-qrcode INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP_QRcode/src/qrcode.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_QRcode/src/frame.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_QRcode/src/qrencode.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_QRcode/src/qrcode.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_QRcode/src/qrencode.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_QRcode/src/qrbits.h"
)

target_include_directories(pac-esp-qrcode INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP_QRcode/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-esp-qrcode INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
