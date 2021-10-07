add_library(pac-modbus-esp8266 INTERFACE)

target_sources(pac-modbus-esp8266 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/modbus-esp8266/src/Modbus.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/modbus-esp8266/src/ModbusRTU.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/modbus-esp8266/src/ModbusEthernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/modbus-esp8266/src/ModbusIP_ESP8266.h"
  "${CMAKE_CURRENT_LIST_DIR}/modbus-esp8266/src/ModbusTLS.h"
  "${CMAKE_CURRENT_LIST_DIR}/modbus-esp8266/src/ModbusTCPTemplate.h"
  "${CMAKE_CURRENT_LIST_DIR}/modbus-esp8266/src/ModbusSettings.h"
  "${CMAKE_CURRENT_LIST_DIR}/modbus-esp8266/src/Modbus.h"
  "${CMAKE_CURRENT_LIST_DIR}/modbus-esp8266/src/darray.h"
  "${CMAKE_CURRENT_LIST_DIR}/modbus-esp8266/src/ModbusTCP.h"
  "${CMAKE_CURRENT_LIST_DIR}/modbus-esp8266/src/ModbusRTU.h"
  "${CMAKE_CURRENT_LIST_DIR}/modbus-esp8266/src/ModbusEthernet-v1.h"
  "${CMAKE_CURRENT_LIST_DIR}/modbus-esp8266/src/ModbusAPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/modbus-esp8266/tests/common.h"
  "${CMAKE_CURRENT_LIST_DIR}/modbus-esp8266/tests/files.h"
  "${CMAKE_CURRENT_LIST_DIR}/modbus-esp8266/tests/write.h"
  "${CMAKE_CURRENT_LIST_DIR}/modbus-esp8266/tests/read.h"
)

target_include_directories(pac-modbus-esp8266 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/modbus-esp8266/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-modbus-esp8266 INTERFACE
    arduino-compat
)
