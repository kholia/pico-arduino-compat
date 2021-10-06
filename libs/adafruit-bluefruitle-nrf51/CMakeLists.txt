add_library(adafruit-bluefruitle-nrf51 INTERFACE)

target_sources(adafruit-bluefruitle-nrf51 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/Adafruit_BluefruitLE_SPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/Adafruit_BluefruitLE_UART.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/Adafruit_BLEBattery.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/Adafruit_BLEEddystone.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/Adafruit_BLE.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/Adafruit_ATParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/Adafruit_BLEGatt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/Adafruit_BLEMIDI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/examples/controller/packetParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/examples/cplay_neopixel_picker/packetParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/examples/neopixel_picker/packetParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/examples/healththermometer/IEEE11073float.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/utility/Adafruit_FIFO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/Adafruit_BLEBattery.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/Adafruit_BLEGatt.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/Adafruit_BluefruitLE_SPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/Adafruit_BLEMIDI.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/Adafruit_BLE.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/Adafruit_ATParser.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/Adafruit_BluefruitLE_UART.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/Adafruit_BLEEddystone.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/examples/midi/BluefruitConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/examples/controller/BluefruitConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/examples/uribeacon/BluefruitConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/examples/battery/BluefruitConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/examples/cplay_neopixel_picker/BluefruitConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/examples/bleuart_datamode/BluefruitConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/examples/throughput/BluefruitConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/examples/hidcontrolkey/BluefruitConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/examples/nvmdata/BluefruitConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/examples/hidmouse/BluefruitConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/examples/neopixel_picker/BluefruitConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/examples/ndof_bno055/BluefruitConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/examples/beacon/BluefruitConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/examples/heartratemonitor/BluefruitConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/examples/hidkeyboard/BluefruitConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/examples/callbacks_dfuirq/BluefruitConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/examples/feathertester/BluefruitConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/examples/eddystone/BluefruitConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/examples/neopixel/BluefruitConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/examples/bleuart_cmdmode/BluefruitConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/examples/atcommand/BluefruitConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/examples/factoryreset/BluefruitConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/examples/callbacks/BluefruitConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/examples/healththermometer/IEEE11073float.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/examples/healththermometer/BluefruitConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/utility/common_header.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/utility/errors.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/utility/Adafruit_FIFO.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/utility/TimeoutTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51/utility/sdep.h"
)

target_include_directories(adafruit-bluefruitle-nrf51 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BluefruitLE_nRF51"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-bluefruitle-nrf51 INTERFACE
    arduino-compat
)
