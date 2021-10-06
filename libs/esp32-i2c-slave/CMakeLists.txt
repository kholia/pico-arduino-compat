add_library(esp32-i2c-slave INTERFACE)

target_sources(esp32-i2c-slave INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_I2C_Slave/src/WireSlaveRequest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_I2C_Slave/src/WireUnpacker.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_I2C_Slave/src/WirePacker.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_I2C_Slave/src/WireSlave.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_I2C_Slave/src/WireCrc.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_I2C_Slave/src/WireUnpacker.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_I2C_Slave/src/WireSlaveRequest.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_I2C_Slave/src/WirePacker.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_I2C_Slave/src/WireSlave.h"
)

target_include_directories(esp32-i2c-slave INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP32_I2C_Slave/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp32-i2c-slave INTERFACE
    arduino-compat
)
