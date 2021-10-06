add_library(wifispi INTERFACE)

target_sources(wifispi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WiFiSpi/src/WiFiSpiServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiSpi/src/WiFiSpi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiSpi/src/WiFiSpiClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiSpi/src/WiFiSpiUdp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiSpi/src/utility/wifispi_drv.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiSpi/src/utility/debug.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiSpi/src/utility/espspi_proxy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiSpi/src/utility/srvspi_drv.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiSpi/src/utility/espspi_drv.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiSpi/src/WiFiSpi.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiSpi/src/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiSpi/src/WiFiSpiClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiSpi/src/WiFiSpiUdp.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiSpi/src/WiFiSpiServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiSpi/src/utility/espspi_proxy.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiSpi/src/utility/srvspi_drv.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiSpi/src/utility/espspi_drv.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiSpi/src/utility/wl_definitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiSpi/src/utility/wl_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiSpi/src/utility/wifi_spi.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiSpi/src/utility/debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiSpi/src/utility/wifispi_drv.h"
)

target_include_directories(wifispi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WiFiSpi/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(wifispi INTERFACE
    arduino-compat
)
