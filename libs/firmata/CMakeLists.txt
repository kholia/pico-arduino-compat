add_library(firmata INTERFACE)

target_sources(firmata INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino/Firmata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/FirmataParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/FirmataMarshaller.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/utility/SerialFirmata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/utility/EthernetServerStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/utility/WiFiStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/utility/BLEStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/utility/BluefruitLE_SPI_Stream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/utility/EthernetClientStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/FirmataConstants.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/FirmataParser.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/Boards.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/Firmata.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/FirmataDefines.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/FirmataMarshaller.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/examples/StandardFirmataBLE/bleConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/examples/StandardFirmataWiFi/wifiConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/examples/StandardFirmataEthernet/ethernetConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/utility/SerialFirmata.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/utility/EthernetServerStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/utility/EthernetClientStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/utility/WiFiStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/utility/WiFiServerStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/utility/FirmataFeature.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/utility/WiFiClientStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/utility/firmataDebug.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/utility/BluefruitLE_SPI_Stream.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/utility/BLEStream.h"
)

target_include_directories(firmata INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(firmata INTERFACE
    arduino-compat
)
