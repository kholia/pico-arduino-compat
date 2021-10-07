add_library(pac-stm32f1_rtc INTERFACE)

target_sources(pac-stm32f1_rtc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/STM32F1_RTC/src/stm32f1_rtc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/STM32F1_RTC/src/stm32f1_rtc.h"
)

target_include_directories(pac-stm32f1_rtc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/STM32F1_RTC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32f1_rtc INTERFACE
    arduino-compat
)
