add_library(adafruit-fram-i2c INTERFACE)

target_sources(adafruit-fram-i2c INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FRAM_I2C/Adafruit_FRAM_I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FRAM_I2C/Adafruit_EEPROM_I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FRAM_I2C/Adafruit_EEPROM_I2C.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FRAM_I2C/Adafruit_FRAM_I2C.h"
)

target_include_directories(adafruit-fram-i2c INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FRAM_I2C"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-fram-i2c INTERFACE
    arduino-compat
    adafruit-busio
)
