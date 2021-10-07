add_library(pac-esp32-mail-client INTERFACE)

target_sources(pac-esp32-mail-client INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Mail-Client/src/WiFiClientSecureESP32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Mail-Client/src/ssl_client32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Mail-Client/src/ESP32TimeHelper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Mail-Client/src/RFC2047.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Mail-Client/src/ESP32MailHTTPClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Mail-Client/src/ESP32_MailClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Mail-Client/src/ESP32MailHTTPClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Mail-Client/src/RFC2047.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Mail-Client/src/ssl_client32.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Mail-Client/src/ESP32_MailClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Mail-Client/src/ESP32TimeHelper.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Mail-Client/src/WiFiClientSecureESP32.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-Mail-Client/examples/Send_email/image.h"
)

target_include_directories(pac-esp32-mail-client INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP32-Mail-Client/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-esp32-mail-client INTERFACE
    arduino-compat
    pac-sd
)
