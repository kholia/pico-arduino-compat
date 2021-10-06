add_library(stm32duino-x-nucleo-53l1a2 INTERFACE)

target_sources(stm32duino-x-nucleo-53l1a2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-53L1A2/src/vl53l1_x_nucleo_53l1a2_class.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-53L1A2/src/stmpe1600_class.h"
)

target_include_directories(stm32duino-x-nucleo-53l1a2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-53L1A2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(stm32duino-x-nucleo-53l1a2 INTERFACE
    arduino-compat
)
