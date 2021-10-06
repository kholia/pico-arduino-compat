add_library(stm32duino-x-nucleo-53l0a1 INTERFACE)

target_sources(stm32duino-x-nucleo-53l0a1 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-53L0A1/src/vl53l0x_x_nucleo_53l0a1_class.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-53L0A1/src/stmpe1600_class.h"
)

target_include_directories(stm32duino-x-nucleo-53l0a1 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-53L0A1/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(stm32duino-x-nucleo-53l0a1 INTERFACE
    arduino-compat
)
