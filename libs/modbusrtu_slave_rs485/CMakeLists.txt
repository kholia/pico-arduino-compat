add_library(pac-modbusrtu_slave_rs485 INTERFACE)

target_sources(pac-modbusrtu_slave_rs485 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ModbusRTUSlaveArduino/ModbusRTUSlave.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ModbusRTUSlaveArduino/ModbusRTUSlave.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModbusRTUSlaveArduino/utility/LinkedList.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModbusRTUSlaveArduino/utility/HashMap.h"
)

target_include_directories(pac-modbusrtu_slave_rs485 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ModbusRTUSlaveArduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-modbusrtu_slave_rs485 INTERFACE
    arduino-compat
)
