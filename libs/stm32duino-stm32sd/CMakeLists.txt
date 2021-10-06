add_library(stm32duino-stm32sd INTERFACE)

target_sources(stm32duino-stm32sd INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/STM32SD/src/SD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/STM32SD/src/Sd2Card.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/STM32SD/src/SdFatFs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/STM32SD/src/bsp_sd.c"
  "${CMAKE_CURRENT_LIST_DIR}/STM32SD/src/ffconf_default_32020.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32SD/src/ffconf_default_68300.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32SD/src/SdFatFs.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32SD/src/bsp_sd.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32SD/src/ffconf.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32SD/src/Sd2Card.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32SD/src/STM32SD.h"
)

target_include_directories(stm32duino-stm32sd INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/STM32SD/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(stm32duino-stm32sd INTERFACE
    arduino-compat
)
