add_library(pac-stm32duino-asm330lhh INTERFACE)

target_sources(pac-stm32duino-asm330lhh INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ASM330LHH/src/ASM330LHHSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ASM330LHH/src/asm330lhh_reg.c"
  "${CMAKE_CURRENT_LIST_DIR}/ASM330LHH/src/asm330lhh_reg.h"
  "${CMAKE_CURRENT_LIST_DIR}/ASM330LHH/src/ASM330LHHSensor.h"
)

target_include_directories(pac-stm32duino-asm330lhh INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ASM330LHH/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32duino-asm330lhh INTERFACE
    arduino-compat
)
