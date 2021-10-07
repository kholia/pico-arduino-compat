add_library(pac-stm32duino-x-nucleo-iks01a2 INTERFACE)

target_sources(pac-stm32duino-x-nucleo-iks01a2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IKS01A2/src/X-NUCLEO-IKS01A2.h"
)

target_include_directories(pac-stm32duino-x-nucleo-iks01a2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IKS01A2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32duino-x-nucleo-iks01a2 INTERFACE
    arduino-compat
)
