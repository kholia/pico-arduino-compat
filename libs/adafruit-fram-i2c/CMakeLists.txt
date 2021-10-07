add_library(pac-adafruit-fram-i2c INTERFACE)

target_sources(pac-adafruit-fram-i2c INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FRAM_I2C/Adafruit_FRAM_I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FRAM_I2C/Adafruit_EEPROM_I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FRAM_I2C/Adafruit_EEPROM_I2C.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FRAM_I2C/Adafruit_FRAM_I2C.h"
)

target_include_directories(pac-adafruit-fram-i2c INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FRAM_I2C"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-fram-i2c INTERFACE
    arduino-compat
    pac-adafruit-busio
)
