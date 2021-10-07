add_library(pac-stm32duino-x-nucleo-6180a1 INTERFACE)

target_sources(pac-stm32duino-x-nucleo-6180a1 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-6180A1/src/vl6180_x_nucleo_6180a1_class.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-6180A1/src/stmpe1600_class.h"
)

target_include_directories(pac-stm32duino-x-nucleo-6180a1 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-6180A1/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32duino-x-nucleo-6180a1 INTERFACE
    arduino-compat
)
