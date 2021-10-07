add_library(pac-arduinomodbus INTERFACE)

target_sources(pac-arduinomodbus INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoModbus/src/ModbusRTUServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoModbus/src/ModbusRTUClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoModbus/src/ModbusClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoModbus/src/ModbusTCPClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoModbus/src/ModbusTCPServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoModbus/src/ModbusServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoModbus/src/libmodbus/modbus-tcp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoModbus/src/libmodbus/modbus-rtu.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoModbus/src/libmodbus/modbus-data.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoModbus/src/libmodbus/modbus.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoModbus/src/ModbusServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoModbus/src/ModbusRTUServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoModbus/src/ModbusTCPServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoModbus/src/ModbusRTUClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoModbus/src/ArduinoModbus.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoModbus/src/ModbusTCPClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoModbus/src/ModbusClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoModbus/src/libmodbus/modbus-tcp.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoModbus/src/libmodbus/modbus-tcp-private.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoModbus/src/libmodbus/modbus-private.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoModbus/src/libmodbus/modbus.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoModbus/src/libmodbus/modbus-rtu.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoModbus/src/libmodbus/modbus-rtu-private.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoModbus/src/libmodbus/modbus-version.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoModbus/examples/TCP/WiFiModbusClientToggle/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoModbus/examples/TCP/WiFiModbusServerLED/arduino_secrets.h"
)

target_include_directories(pac-arduinomodbus INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoModbus/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduinomodbus INTERFACE
    arduino-compat
)
