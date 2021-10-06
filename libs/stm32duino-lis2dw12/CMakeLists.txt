add_library(stm32duino-lis2dw12 INTERFACE)

target_sources(stm32duino-lis2dw12 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LIS2DW12/src/LIS2DW12Sensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LIS2DW12/src/lis2dw12_reg.c"
  "${CMAKE_CURRENT_LIST_DIR}/LIS2DW12/src/lis2dw12_reg.h"
  "${CMAKE_CURRENT_LIST_DIR}/LIS2DW12/src/LIS2DW12Sensor.h"
)

target_include_directories(stm32duino-lis2dw12 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LIS2DW12/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(stm32duino-lis2dw12 INTERFACE
    arduino-compat
)
