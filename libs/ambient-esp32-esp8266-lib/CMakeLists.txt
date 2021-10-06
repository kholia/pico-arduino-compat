add_library(ambient-esp32-esp8266-lib INTERFACE)

target_sources(ambient-esp32-esp8266-lib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Ambient_ESP8266_lib/src/Ambient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ambient_ESP8266_lib/examples/M5Stack_ESP32/BME280_test/BME280.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ambient_ESP8266_lib/examples/M5Stack_ESP32/Ambient_BME280/BME280.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ambient_ESP8266_lib/examples/M5Stack_ESP32/Ambient_env_grove/DHT12.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ambient_ESP8266_lib/examples/M5Stack_ESP32/Ambient_BME680/Adafruit_BME680.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ambient_ESP8266_lib/examples/ESP8266/Ambient_powermonitor/sqrt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ambient_ESP8266_lib/examples/ESP8266/Ambient_powermonitor/MCP3002.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ambient_ESP8266_lib/examples/ESP8266/Ambient_ESP_BME280/BME280_SPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ambient_ESP8266_lib/examples/ESP8266/Ambient_ESP_BME280_test/BME280_SPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ambient_ESP8266_lib/examples/ESP8266/Ambient_ESP_BME280_ds/BME280_SPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ambient_ESP8266_lib/examples/ESP8266/Ambient_CurrentLogger/INA226PRC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ambient_ESP8266_lib/examples/ESP8266/Ambient_ESP8266/HDC1000.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ambient_ESP8266_lib/examples/M5Stack_ESP32/Ambient_BME680/bme680.c"
  "${CMAKE_CURRENT_LIST_DIR}/Ambient_ESP8266_lib/src/Ambient.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ambient_ESP8266_lib/examples/M5Stack_ESP32/BME280_test/BME280.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ambient_ESP8266_lib/examples/M5Stack_ESP32/Ambient_BME280/BME280.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ambient_ESP8266_lib/examples/M5Stack_ESP32/Ambient_env_grove/DHT12.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ambient_ESP8266_lib/examples/M5Stack_ESP32/Ambient_env_grove/Adafruit_Sensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ambient_ESP8266_lib/examples/M5Stack_ESP32/Ambient_BME680/bme680_defs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ambient_ESP8266_lib/examples/M5Stack_ESP32/Ambient_BME680/bme680.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ambient_ESP8266_lib/examples/M5Stack_ESP32/Ambient_BME680/Adafruit_BME680.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ambient_ESP8266_lib/examples/ESP8266/Ambient_powermonitor/MCP3002.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ambient_ESP8266_lib/examples/ESP8266/Ambient_ESP_BME280/BME280_SPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ambient_ESP8266_lib/examples/ESP8266/Ambient_ESP_BME280_test/BME280_SPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ambient_ESP8266_lib/examples/ESP8266/Ambient_ESP_BME280_ds/BME280_SPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ambient_ESP8266_lib/examples/ESP8266/Ambient_CurrentLogger/INA226PRC.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ambient_ESP8266_lib/examples/ESP8266/Ambient_ESP8266/HDC1000.h"
)

target_include_directories(ambient-esp32-esp8266-lib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Ambient_ESP8266_lib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ambient-esp32-esp8266-lib INTERFACE
    arduino-compat
)
