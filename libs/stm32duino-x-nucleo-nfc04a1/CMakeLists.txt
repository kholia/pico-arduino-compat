add_library(pac-stm32duino-x-nucleo-nfc04a1 INTERFACE)

target_sources(pac-stm32duino-x-nucleo-nfc04a1 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-NFC04A1/src/x_nucleo_nfc04.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-NFC04A1/src/BSP/x_nucleo_nfc04a1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-NFC04A1/src/x_nucleo_nfc04.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-NFC04A1/src/BSP/x_nucleo_nfc04a1.h"
)

target_include_directories(pac-stm32duino-x-nucleo-nfc04a1 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-NFC04A1/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32duino-x-nucleo-nfc04a1 INTERFACE
    arduino-compat
)
