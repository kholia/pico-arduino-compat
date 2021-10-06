add_library(esp-qrcode INTERFACE)

target_sources(esp-qrcode INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP_QRcode/src/qrcode.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_QRcode/src/frame.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_QRcode/src/qrencode.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_QRcode/src/qrcode.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_QRcode/src/qrencode.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP_QRcode/src/qrbits.h"
)

target_include_directories(esp-qrcode INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP_QRcode/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(esp-qrcode INTERFACE
    arduino-compat
    adafruit-gfx-library
)
