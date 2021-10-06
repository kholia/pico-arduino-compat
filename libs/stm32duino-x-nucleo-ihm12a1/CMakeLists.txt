add_library(stm32duino-x-nucleo-ihm12a1 INTERFACE)

target_sources(stm32duino-x-nucleo-ihm12a1 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IHM12A1/src/STSpin240_250.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IHM12A1/src/Component.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IHM12A1/src/BDCMotor.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IHM12A1/src/STSpin240_250.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IHM12A1/src/STSpin240_250_def.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IHM12A1/src/motor_def.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IHM12A1/src/component_def.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IHM12A1/src/STSpin240_250_config.h"
)

target_include_directories(stm32duino-x-nucleo-ihm12a1 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IHM12A1/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(stm32duino-x-nucleo-ihm12a1 INTERFACE
    arduino-compat
)
