add_library(wifinina INTERFACE)

target_sources(wifinina INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/src/WiFi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/src/WiFiUdp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/src/WiFiClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/src/WiFiSSLClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/src/WiFiStorage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/src/WiFiServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/src/utility/wifi_drv.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/src/utility/WiFiSocketBuffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/src/utility/spi_drv.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/src/utility/nano_rp2040_support.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/src/utility/server_drv.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/examples/Tools/FirmwareUpdater/ESP32BootROM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/src/WiFi.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/src/WiFiSSLClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/src/WiFiNINA.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/src/WiFiStorage.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/src/WiFiServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/src/WiFiUdp.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/src/WiFiClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/src/utility/wl_definitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/src/utility/wl_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/src/utility/WiFiSocketBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/src/utility/server_drv.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/src/utility/wifi_spi.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/src/utility/wifi_drv.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/src/utility/spi_drv.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/src/utility/debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/examples/WiFiWebClientRepeating/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/examples/WiFiWebClient/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/examples/ConnectWithWEP/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/examples/ConnectWithWPA/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/examples/ConnectNoEncryption/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/examples/WiFiSSLClient/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/examples/Tools/FirmwareUpdater/ESP32BootROM.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/examples/ConnectWithWPA2Enterprise/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/examples/SimpleWebServerWiFi/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/examples/WiFiPing/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/examples/AP_SimpleWebServer/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/examples/WiFiWebServer/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/examples/WiFiChatServer/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/examples/WiFiUdpNtpClient/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/examples/WiFiUdpSendReceiveString/arduino_secrets.h"
)

target_include_directories(wifinina INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WiFiNINA/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(wifinina INTERFACE
    arduino-compat
)
