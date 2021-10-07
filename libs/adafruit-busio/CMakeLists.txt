add_library(pac-adafruit-busio INTERFACE)

target_sources(pac-adafruit-busio INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BusIO/Adafruit_I2CDevice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BusIO/Adafruit_SPIDevice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BusIO/Adafruit_BusIO_Register.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BusIO/Adafruit_SPIDevice.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BusIO/Adafruit_I2CDevice.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BusIO/Adafruit_BusIO_Register.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BusIO/Adafruit_I2CRegister.h"
)

target_include_directories(pac-adafruit-busio INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BusIO"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-busio INTERFACE
    arduino-compat
)
