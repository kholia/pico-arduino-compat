add_library(stm32duino-i-nucleo-lrwan1 INTERFACE)

target_sources(stm32duino-i-nucleo-lrwan1 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/I-NUCLEO-LRWAN1/src/LoRaWANNode.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/I-NUCLEO-LRWAN1/src/hw_usart.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/I-NUCLEO-LRWAN1/src/LoRaRadio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/I-NUCLEO-LRWAN1/src/i_nucleo_lrwan1_wm_sg_sm_xx.c"
  "${CMAKE_CURRENT_LIST_DIR}/I-NUCLEO-LRWAN1/src/tiny_sscanf.c"
  "${CMAKE_CURRENT_LIST_DIR}/I-NUCLEO-LRWAN1/src/lora_driver.c"
  "${CMAKE_CURRENT_LIST_DIR}/I-NUCLEO-LRWAN1/src/tiny_vsnprintf.c"
  "${CMAKE_CURRENT_LIST_DIR}/I-NUCLEO-LRWAN1/src/lora_driver.h"
  "${CMAKE_CURRENT_LIST_DIR}/I-NUCLEO-LRWAN1/src/tiny_vsnprintf.h"
  "${CMAKE_CURRENT_LIST_DIR}/I-NUCLEO-LRWAN1/src/i_nucleo_lrwan1_wm_sg_sm_xx.h"
  "${CMAKE_CURRENT_LIST_DIR}/I-NUCLEO-LRWAN1/src/hw_usart.h"
  "${CMAKE_CURRENT_LIST_DIR}/I-NUCLEO-LRWAN1/src/hw.h"
  "${CMAKE_CURRENT_LIST_DIR}/I-NUCLEO-LRWAN1/src/LoRaRadio.h"
  "${CMAKE_CURRENT_LIST_DIR}/I-NUCLEO-LRWAN1/src/LoRaWANNode.h"
  "${CMAKE_CURRENT_LIST_DIR}/I-NUCLEO-LRWAN1/src/atcmd_modem.h"
  "${CMAKE_CURRENT_LIST_DIR}/I-NUCLEO-LRWAN1/src/debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/I-NUCLEO-LRWAN1/src/tiny_sscanf.h"
)

target_include_directories(stm32duino-i-nucleo-lrwan1 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/I-NUCLEO-LRWAN1/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(stm32duino-i-nucleo-lrwan1 INTERFACE
    arduino-compat
)
