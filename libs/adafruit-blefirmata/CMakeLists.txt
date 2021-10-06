add_library(adafruit-blefirmata INTERFACE)

target_sources(adafruit-blefirmata INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BLEFirmata/Adafruit_BLE_Firmata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BLEFirmata/Adafruit_BLE_Firmata.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BLEFirmata/Adafruit_BLE_Firmata_Boards.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BLEFirmata/examples/CircuitPlayground_nrf51822/BluefruitConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BLEFirmata/examples/Firmata_nRF8001/BluefruitConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BLEFirmata/examples/BluefruitLE_nrf51822/BluefruitConfig.h"
)

target_include_directories(adafruit-blefirmata INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BLEFirmata"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-blefirmata INTERFACE
    arduino-compat
)
