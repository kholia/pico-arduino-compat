add_library(stm32duino-lis3mdl INTERFACE)

target_sources(stm32duino-lis3mdl INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LIS3MDL/src/LIS3MDLSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LIS3MDL/src/LIS3MDL_MAG_Driver.c"
  "${CMAKE_CURRENT_LIST_DIR}/LIS3MDL/src/LIS3MDL_MAG_Driver.h"
  "${CMAKE_CURRENT_LIST_DIR}/LIS3MDL/src/LIS3MDLSensor.h"
)

target_include_directories(stm32duino-lis3mdl INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LIS3MDL/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(stm32duino-lis3mdl INTERFACE
    arduino-compat
)
