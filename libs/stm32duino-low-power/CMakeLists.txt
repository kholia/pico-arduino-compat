add_library(stm32duino-low-power INTERFACE)

target_sources(stm32duino-low-power INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/STM32LowPower/src/STM32LowPower.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/STM32LowPower/src/low_power.c"
  "${CMAKE_CURRENT_LIST_DIR}/STM32LowPower/src/STM32LowPower.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32LowPower/src/low_power.h"
)

target_include_directories(stm32duino-low-power INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/STM32LowPower/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(stm32duino-low-power INTERFACE
    arduino-compat
)
