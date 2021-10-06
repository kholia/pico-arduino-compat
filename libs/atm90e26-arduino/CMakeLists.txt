add_library(atm90e26-arduino INTERFACE)

target_sources(atm90e26-arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ATM90E26_Arduino/energyic_UART.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ATM90E26_Arduino/energyic_SPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ATM90E26_Arduino/energyic_SPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/ATM90E26_Arduino/energyic_UART.h"
)

target_include_directories(atm90e26-arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ATM90E26_Arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(atm90e26-arduino INTERFACE
    arduino-compat
)
