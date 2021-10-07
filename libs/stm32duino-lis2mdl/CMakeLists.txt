add_library(pac-stm32duino-lis2mdl INTERFACE)

target_sources(pac-stm32duino-lis2mdl INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LIS2MDL/src/LIS2MDLSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LIS2MDL/src/lis2mdl_reg.c"
  "${CMAKE_CURRENT_LIST_DIR}/LIS2MDL/src/lis2mdl_reg.h"
  "${CMAKE_CURRENT_LIST_DIR}/LIS2MDL/src/LIS2MDLSensor.h"
)

target_include_directories(pac-stm32duino-lis2mdl INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LIS2MDL/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32duino-lis2mdl INTERFACE
    arduino-compat
)
