add_library(stm32duino-x-nucleo-idb05a1 INTERFACE)

target_sources(stm32duino-x-nucleo-idb05a1 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IDB05A1/src/X-NUCLEO-IDB05A1.h"
)

target_include_directories(stm32duino-x-nucleo-idb05a1 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IDB05A1/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(stm32duino-x-nucleo-idb05a1 INTERFACE
    arduino-compat
)
