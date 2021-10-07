add_library(pac-goldilocks-analogue-dac-library INTERFACE)

target_sources(pac-goldilocks-analogue-dac-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Goldilocks_Analogue_DAC_Library/src/DAC.c"
  "${CMAKE_CURRENT_LIST_DIR}/Goldilocks_Analogue_DAC_Library/src/DAC.h"
  "${CMAKE_CURRENT_LIST_DIR}/Goldilocks_Analogue_DAC_Library/src/mult16x8.h"
  "${CMAKE_CURRENT_LIST_DIR}/Goldilocks_Analogue_DAC_Library/src/mult16x16.h"
  "${CMAKE_CURRENT_LIST_DIR}/Goldilocks_Analogue_DAC_Library/src/mult32x16.h"
)

target_include_directories(pac-goldilocks-analogue-dac-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Goldilocks_Analogue_DAC_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-goldilocks-analogue-dac-library INTERFACE
    arduino-compat
)
