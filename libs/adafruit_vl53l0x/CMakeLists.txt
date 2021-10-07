add_library(pac-adafruit_vl53l0x INTERFACE)

target_sources(pac-adafruit_vl53l0x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VL53L0X/src/Adafruit_VL53L0X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VL53L0X/src/core/src/vl53l0x_api_strings.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VL53L0X/src/core/src/vl53l0x_api_ranging.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VL53L0X/src/core/src/vl53l0x_api_core.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VL53L0X/src/core/src/vl53l0x_api_calibration.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VL53L0X/src/core/src/vl53l0x_api.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VL53L0X/src/platform/src/vl53l0x_i2c_comms.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VL53L0X/src/platform/src/vl53l0x_platform.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VL53L0X/src/vl53l0x_api_calibration.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VL53L0X/src/vl53l0x_i2c_platform.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VL53L0X/src/vl53l0x_interrupt_threshold_settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VL53L0X/src/vl53l0x_platform_log.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VL53L0X/src/vl53l0x_platform.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VL53L0X/src/Adafruit_VL53L0X.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VL53L0X/src/vl53l0x_tuning.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VL53L0X/src/vl53l0x_api_ranging.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VL53L0X/src/vl53l0x_api.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VL53L0X/src/vl53l0x_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VL53L0X/src/vl53l0x_api_strings.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VL53L0X/src/vl53l0x_def.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VL53L0X/src/vl53l0x_api_core.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VL53L0X/src/vl53l0x_device.h"
)

target_include_directories(pac-adafruit_vl53l0x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VL53L0X/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit_vl53l0x INTERFACE
    arduino-compat
)
