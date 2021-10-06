add_library(stm32duino-vl53l0x INTERFACE)

target_sources(stm32duino-vl53l0x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VL53L0X/src/vl53l0x_class.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L0X/src/RangeSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L0X/src/vl53l0x_interrupt_threshold_settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L0X/src/ComponentObject.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L0X/src/vl53l0x_platform_log.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L0X/src/vl53l0x_platform.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L0X/src/vl53l0x_tuning.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L0X/src/vl53l0x_class.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L0X/src/vl53l0x_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L0X/src/vl53l0x_def.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L0X/src/vl53l0x_device.h"
)

target_include_directories(stm32duino-vl53l0x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VL53L0X/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(stm32duino-vl53l0x INTERFACE
    arduino-compat
)
