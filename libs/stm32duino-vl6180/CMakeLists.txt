add_library(stm32duino-vl6180 INTERFACE)

target_sources(stm32duino-vl6180 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VL6180/src/vl6180_class.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VL6180/src/vl6180_def.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL6180/src/RangeSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL6180/src/vl6180_cfg.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL6180/src/vl6180_platform.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL6180/src/ComponentObject.h"
  "${CMAKE_CURRENT_LIST_DIR}/VL6180/src/vl6180_class.h"
)

target_include_directories(stm32duino-vl6180 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VL6180/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(stm32duino-vl6180 INTERFACE
    arduino-compat
)
