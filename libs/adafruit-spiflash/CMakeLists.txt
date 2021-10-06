add_library(adafruit-spiflash INTERFACE)

target_sources(adafruit-spiflash INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SPIFlash/src/Adafruit_FlashCache.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SPIFlash/src/Adafruit_SPIFlashBase.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SPIFlash/src/Adafruit_SPIFlash.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SPIFlash/src/spi/Adafruit_FlashTransport_SPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SPIFlash/src/esp32/Adafruit_FlashTransport_ESP32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SPIFlash/src/qspi/Adafruit_FlashTransport_QSPI_SAMD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SPIFlash/src/qspi/Adafruit_FlashTransport_QSPI_NRF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SPIFlash/examples/SdFat_format/ff.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SPIFlash/src/Adafruit_FlashTransport.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SPIFlash/src/Adafruit_FlashCache.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SPIFlash/src/Adafruit_SPIFlash.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SPIFlash/src/Adafruit_SPIFlashBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SPIFlash/src/flash_devices.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SPIFlash/src/spi/Adafruit_FlashTransport_SPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SPIFlash/src/esp32/Adafruit_FlashTransport_ESP32.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SPIFlash/src/qspi/Adafruit_FlashTransport_QSPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SPIFlash/examples/SdFat_format/diskio.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SPIFlash/examples/SdFat_format/ffconf.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SPIFlash/examples/SdFat_format/ff.h"
)

target_include_directories(adafruit-spiflash INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_SPIFlash/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-spiflash INTERFACE
    arduino-compat
)
