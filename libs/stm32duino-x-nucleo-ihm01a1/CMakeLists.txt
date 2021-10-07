add_library(pac-stm32duino-x-nucleo-ihm01a1 INTERFACE)

target_sources(pac-stm32duino-x-nucleo-ihm01a1 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IHM01A1/src/L6474.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IHM01A1/src/L6474_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IHM01A1/src/Component.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IHM01A1/src/StepperMotor.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IHM01A1/src/motor_def.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IHM01A1/src/L6474_def.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IHM01A1/src/component_def.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IHM01A1/src/L6474.h"
)

target_include_directories(pac-stm32duino-x-nucleo-ihm01a1 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IHM01A1/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32duino-x-nucleo-ihm01a1 INTERFACE
    arduino-compat
)
