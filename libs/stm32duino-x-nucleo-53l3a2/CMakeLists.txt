add_library(pac-stm32duino-x-nucleo-53l3a2 INTERFACE)

target_sources(pac-stm32duino-x-nucleo-53l3a2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-53L3A2/src/vl53lx_x_nucleo_53l3a2_class.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-53L3A2/src/stmpe1600_class.h"
)

target_include_directories(pac-stm32duino-x-nucleo-53l3a2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-53L3A2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32duino-x-nucleo-53l3a2 INTERFACE
    arduino-compat
)
