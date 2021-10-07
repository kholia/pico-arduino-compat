add_library(pac-stm32duino-x-nucleo-led61a1 INTERFACE)

target_sources(pac-stm32duino-x-nucleo-led61a1 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-LED61A1/src/Led.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-LED61A1/src/Component.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-LED61A1/src/component_def.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-LED61A1/src/Led6001.h"
)

target_include_directories(pac-stm32duino-x-nucleo-led61a1 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-LED61A1/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32duino-x-nucleo-led61a1 INTERFACE
    arduino-compat
)
