add_library(pac-i2c-sensor-lib-ilib INTERFACE)

target_sources(pac-i2c-sensor-lib-ilib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/iLib/src/i2c.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/iLib/src/i2c_MPL3115A2.h"
  "${CMAKE_CURRENT_LIST_DIR}/iLib/src/i2c_SI7021.h"
  "${CMAKE_CURRENT_LIST_DIR}/iLib/src/atmel_math_power_and_scale.h"
  "${CMAKE_CURRENT_LIST_DIR}/iLib/src/i2c_Sensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/iLib/src/WS2812B.h"
  "${CMAKE_CURRENT_LIST_DIR}/iLib/src/i2c_PRESET.h"
  "${CMAKE_CURRENT_LIST_DIR}/iLib/src/i2c_MAG3110.h"
  "${CMAKE_CURRENT_LIST_DIR}/iLib/src/i2c_FAN5421.h"
  "${CMAKE_CURRENT_LIST_DIR}/iLib/src/atmel_eFunction.h"
  "${CMAKE_CURRENT_LIST_DIR}/iLib/src/i2c_LPS331.h"
  "${CMAKE_CURRENT_LIST_DIR}/iLib/src/i2c_MPU9250.h"
  "${CMAKE_CURRENT_LIST_DIR}/iLib/src/i2c_TCS3772.h"
  "${CMAKE_CURRENT_LIST_DIR}/iLib/src/i2c.h"
  "${CMAKE_CURRENT_LIST_DIR}/iLib/src/atmel_vcc.h"
  "${CMAKE_CURRENT_LIST_DIR}/iLib/src/atmel_spektrumSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/iLib/src/i2c_MAX44009.h"
  "${CMAKE_CURRENT_LIST_DIR}/iLib/src/i2c_MMA8451.h"
  "${CMAKE_CURRENT_LIST_DIR}/iLib/src/i2c_PCF2127.h"
  "${CMAKE_CURRENT_LIST_DIR}/iLib/src/spi_rfm95.h"
  "${CMAKE_CURRENT_LIST_DIR}/iLib/src/i2c_L3G.h"
  "${CMAKE_CURRENT_LIST_DIR}/iLib/src/i2c_MAX17047.h"
  "${CMAKE_CURRENT_LIST_DIR}/iLib/src/i2c_BMP280.h"
  "${CMAKE_CURRENT_LIST_DIR}/iLib/src/atmel_hdlc.h"
)

target_include_directories(pac-i2c-sensor-lib-ilib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/iLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-i2c-sensor-lib-ilib INTERFACE
    arduino-compat
)
