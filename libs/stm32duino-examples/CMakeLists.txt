add_library(pac-stm32duino-examples INTERFACE)

target_sources(pac-stm32duino-examples INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/STM32Examples/examples/NonReg/Basics/STLTest/test_stl.c"
  "${CMAKE_CURRENT_LIST_DIR}/STM32Examples/src/STM32Examples.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32Examples/examples/Benchmarking/Dhrystone/dhry.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32Examples/examples/NonReg/Basics/STLTest/test_stl.h"
)

target_include_directories(pac-stm32duino-examples INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/STM32Examples/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32duino-examples INTERFACE
    arduino-compat
)
