add_library(pac-manuvrdrivers INTERFACE)

target_sources(pac-manuvrdrivers INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/MCP4728/MCP4728.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/SSD13xx/SSD1306.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/SSD13xx/SSD1331.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/SSD13xx/SSD1309.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/CCS811/CCS811.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/MAX7219/MAX7219.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/LTC294x/LTC294x.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/I2CEEPROM/I2CEEPROM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/SX8634/SX8634.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/AS7265X/AS7265X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/ILI9341/ILI9341.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/SX1276/SX1276.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/DS1881/DS1881.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/FT6206/FT6206.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/TMP102/TMP102.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/VL53L5/vl53l5cx_plugin_xtalk.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/VL53L5/vl53l5cx_plugin_detection_thresholds.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/VL53L5/VL53L5cx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/VL53L5/vl53l5cx_plugin_motion_indicator.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/VL53L5/platform.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/VL53L5/vl53l5cx_api.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/AS3935/AS3935.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/LSM9DS1/LSM9DS1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/BME280/BME280.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/Composites/ManuvrPMU/ManuvrPMU-r2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/LSM6DSOX/LSM6DSOX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/AMG88xx/AMG88xx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/VL53L0X/VL53L0X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/MLX90640/MLX90640.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/ADG2128/ADG2128.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/ShiftRegister/ShiftRegisterOut.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/TSL2561/TSL2561.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/VEML6075/VEML6075.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/BQ24155/BQ24155.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/SX1503/SX1503.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/MCP356x/MCP356x_Util.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/MCP356x/MCP356x_Regs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/MCP356x/MCP356x.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/VL53L5/Debugger.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/ManuvrDrivers.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/MCP4728/MCP4728.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/SSD13xx/SSD13xx.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/CCS811/CCS811.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/MAX7219/MAX7219.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/LTC294x/LTC294x.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/I2CEEPROM/I2CEEPROM.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/SX8634/SX8634.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/AS7265X/AS7265X.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/ILI9341/ILI9341.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/SX1276/SX1276.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/DS1881/DS1881.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/FT6206/FT6206.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/TMP102/TMP102.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/VL53L5/vl53l5cx_plugin_motion_indicator.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/VL53L5/vl53l5cx_plugin_xtalk.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/VL53L5/platform.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/VL53L5/vl53l5cx_plugin_detection_thresholds.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/VL53L5/vl53l5cx_api.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/VL53L5/vl53l5cx_buffers.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/VL53L5/VL53L5cx.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/AS3935/AS3935.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/LSM9DS1/LSM9DS1Types.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/LSM9DS1/LSM9DS1.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/BME280/BME280.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/Composites/ManuvrPMU/ManuvrPMU-r2.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/LSM6DSOX/LSM6DSOX.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/AMG88xx/AMG88xx.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/VL53L0X/VL53L0X.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/MLX90640/MLX90640.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/ADG2128/ADG2128.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/ShiftRegister/ShiftRegister.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/TSL2561/TSL2561.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/VEML6075/VEML6075.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/BQ24155/BQ24155.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/SX1503/SX1503.h"
  "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src/MCP356x/MCP356x.h"
)

target_include_directories(pac-manuvrdrivers INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ManuvrDrivers/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-manuvrdrivers INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
