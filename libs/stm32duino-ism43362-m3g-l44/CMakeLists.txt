add_library(pac-stm32duino-ism43362-m3g-l44 INTERFACE)

target_sources(pac-stm32duino-ism43362-m3g-l44 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WiFi-ISM43362-M3G-L44/src/WiFiST.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFi-ISM43362-M3G-L44/src/ISM43362_M3G_L44_driver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFi-ISM43362-M3G-L44/src/WiFiServerST.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFi-ISM43362-M3G-L44/src/spi_drv.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFi-ISM43362-M3G-L44/src/WiFiClientST.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFi-ISM43362-M3G-L44/src/WiFiUdpST.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFi-ISM43362-M3G-L44/src/ISM43362_M3G_L44_driver.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFi-ISM43362-M3G-L44/src/wl_definitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFi-ISM43362-M3G-L44/src/driver.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFi-ISM43362-M3G-L44/src/wifi_drv.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFi-ISM43362-M3G-L44/src/WiFiST.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFi-ISM43362-M3G-L44/src/WiFiUdpST.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFi-ISM43362-M3G-L44/src/es_wifi_conf.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFi-ISM43362-M3G-L44/src/spi_drv.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFi-ISM43362-M3G-L44/src/WiFiClientST.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFi-ISM43362-M3G-L44/src/WiFiServerST.h"
)

target_include_directories(pac-stm32duino-ism43362-m3g-l44 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WiFi-ISM43362-M3G-L44/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32duino-ism43362-m3g-l44 INTERFACE
    arduino-compat
)
