add_library(pac-stm32duino-vl6180x INTERFACE)

target_sources(pac-stm32duino-vl6180x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VL6180X/src/vl6180x_class.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VL6180X/src/RangeSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL6180X/src/vl6180x_class.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL6180X/src/ComponentObject.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL6180X/src/vl6180x_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL6180X/src/vl6180x_def.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL6180X/src/LightSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL6180X/src/vl6180x_cfg.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL6180X/src/vl6180x_platform.h"
)

target_include_directories(pac-stm32duino-vl6180x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VL6180X/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32duino-vl6180x INTERFACE
    arduino-compat
)
