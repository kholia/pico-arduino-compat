add_library(pac-stm32duino-x-nucleo-s2868a2 INTERFACE)

target_sources(pac-stm32duino-x-nucleo-s2868a2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-S2868A2/src/X-NUCLEO-S2868A2.h"
)

target_include_directories(pac-stm32duino-x-nucleo-s2868a2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-S2868A2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32duino-x-nucleo-s2868a2 INTERFACE
    arduino-compat
)
