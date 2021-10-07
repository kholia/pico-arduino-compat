add_library(pac-esp8266-qrcode INTERFACE)

target_sources(pac-esp8266-qrcode INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_QRcode/src/qrcode.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_QRcode/src/frame.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_QRcode/src/qrencode.c"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_QRcode/src/qrcode.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_QRcode/src/qrencode.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266_QRcode/src/qrbits.h"
)

target_include_directories(pac-esp8266-qrcode INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP8266_QRcode/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp8266-qrcode INTERFACE
    arduino-compat
)
