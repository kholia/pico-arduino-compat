add_library(pac-stm32duino-rtc INTERFACE)

target_sources(pac-stm32duino-rtc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/STM32RTC/src/STM32RTC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/STM32RTC/src/rtc.c"
  "${CMAKE_CURRENT_LIST_DIR}/STM32RTC/src/STM32RTC.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32RTC/src/rtc.h"
)

target_include_directories(pac-stm32duino-rtc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/STM32RTC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32duino-rtc INTERFACE
    arduino-compat
)
