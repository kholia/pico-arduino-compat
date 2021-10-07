add_library(pac-stm32duino-x-nucleo-s2915a1 INTERFACE)

target_sources(pac-stm32duino-x-nucleo-s2915a1 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-S2915A1/src/X-NUCLEO-S2915A1.h"
)

target_include_directories(pac-stm32duino-x-nucleo-s2915a1 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-S2915A1/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32duino-x-nucleo-s2915a1 INTERFACE
    arduino-compat
)
