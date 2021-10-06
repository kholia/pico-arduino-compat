add_library(wifi-link INTERFACE)

target_sources(wifi-link INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library-wifilink/src/WiFiUdp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library-wifilink/src/WiFiClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library-wifilink/src/WiFiServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library-wifilink/src/WiFiLink.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library-wifilink/src/utility/wifi_drv.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library-wifilink/src/utility/comm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library-wifilink/src/utility/server_drv.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library-wifilink/src/utility/uart/uart_drv.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library-wifilink/src/utility/uart/serial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library-wifilink/src/utility/uart/SC16IS750.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library-wifilink/src/utility/spi/spi_drv.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library-wifilink/src/WiFiLink.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library-wifilink/src/WiFiServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library-wifilink/src/WiFiUdp.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library-wifilink/src/WiFiClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library-wifilink/src/utility/comm.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library-wifilink/src/utility/wl_definitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library-wifilink/src/utility/wl_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library-wifilink/src/utility/server_drv.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library-wifilink/src/utility/wifi_spi.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library-wifilink/src/utility/wifi_drv.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library-wifilink/src/utility/debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library-wifilink/src/utility/uart/serial.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library-wifilink/src/utility/uart/SC16IS750.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library-wifilink/src/utility/uart/uart_drv.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library-wifilink/src/utility/spi/spi_drv.h"
)

target_include_directories(wifi-link INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-library-wifilink/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(wifi-link INTERFACE
    arduino-compat
)
