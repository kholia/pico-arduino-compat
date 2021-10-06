add_library(stm32duino-vl53l1x INTERFACE)

target_sources(stm32duino-vl53l1x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1X/src/vl53l1x_class.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1X/src/RangeSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1X/src/vl53l1x_error_codes.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1X/src/vl53l1x_class.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L1X/src/ComponentObject.h"
)

target_include_directories(stm32duino-vl53l1x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VL53L1X/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(stm32duino-vl53l1x INTERFACE
    arduino-compat
)
