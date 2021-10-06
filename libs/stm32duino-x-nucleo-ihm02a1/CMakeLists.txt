add_library(stm32duino-x-nucleo-ihm02a1 INTERFACE)

target_sources(stm32duino-x-nucleo-ihm02a1 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IHM02A1/src/L6470.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IHM02A1/src/XNucleoIHM02A1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IHM02A1/src/microstepping_motor_def.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IHM02A1/src/L6470_def.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IHM02A1/src/Component.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IHM02A1/src/x_nucleo_ihm02a1_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IHM02A1/src/StepperMotor.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IHM02A1/src/L6470.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IHM02A1/src/component_def.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IHM02A1/src/XNucleoIHM02A1.h"
)

target_include_directories(stm32duino-x-nucleo-ihm02a1 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IHM02A1/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(stm32duino-x-nucleo-ihm02a1 INTERFACE
    arduino-compat
)
