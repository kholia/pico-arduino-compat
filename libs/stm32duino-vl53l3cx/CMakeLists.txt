add_library(stm32duino-vl53l3cx INTERFACE)

target_sources(stm32duino-vl53l3cx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VL53L3CX/src/vl53lx_class.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L3CX/src/RangeSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L3CX/src/ComponentObject.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L3CX/src/vl53lx_class.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL53L3CX/src/vl53lx_def.h"
)

target_include_directories(stm32duino-vl53l3cx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VL53L3CX/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(stm32duino-vl53l3cx INTERFACE
    arduino-compat
)
