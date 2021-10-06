add_library(stm32duino-ism330dlc INTERFACE)

target_sources(stm32duino-ism330dlc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ISM330DLC/src/ISM330DLCSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ISM330DLC/src/ISM330DLC_ACC_GYRO_Driver.c"
  "${CMAKE_CURRENT_LIST_DIR}/ISM330DLC/src/ISM330DLC_ACC_GYRO_Driver.h"
  "${CMAKE_CURRENT_LIST_DIR}/ISM330DLC/src/ISM330DLCSensor.h"
)

target_include_directories(stm32duino-ism330dlc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ISM330DLC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(stm32duino-ism330dlc INTERFACE
    arduino-compat
)
