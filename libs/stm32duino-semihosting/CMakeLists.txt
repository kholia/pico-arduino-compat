add_library(pac-stm32duino-semihosting INTERFACE)

target_sources(pac-stm32duino-semihosting INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/STM32duino-Semihosting/semihosting_syscalls.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/STM32duino-Semihosting/SemihostingPrint.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/STM32duino-Semihosting/SemihostingStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/STM32duino-Semihosting/semihosting_bmp.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32duino-Semihosting/semihosting_syscalls.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32duino-Semihosting/SemihostingPrint.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32duino-Semihosting/SemihostingStream.h"
)

target_include_directories(pac-stm32duino-semihosting INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/STM32duino-Semihosting"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32duino-semihosting INTERFACE
    arduino-compat
)
