add_library(stm32duino-x-nucleo-6180xa1 INTERFACE)

target_sources(stm32duino-x-nucleo-6180xa1 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-6180XA1/src/vl6180x_x_nucleo_6180xa1_class.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-6180XA1/src/stmpe1600_class.h"
)

target_include_directories(stm32duino-x-nucleo-6180xa1 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-6180XA1/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(stm32duino-x-nucleo-6180xa1 INTERFACE
    arduino-compat
)
