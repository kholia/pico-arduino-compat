add_library(goldilocks-analogue-spi-ram-library INTERFACE)

target_sources(goldilocks-analogue-spi-ram-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Goldilocks_Analogue_SPIRAM_Library/src/SPIRAM.c"
  "${CMAKE_CURRENT_LIST_DIR}/Goldilocks_Analogue_SPIRAM_Library/src/SPIRAM.h"
  "${CMAKE_CURRENT_LIST_DIR}/Goldilocks_Analogue_SPIRAM_Library/src/SPIRAM_ringBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Goldilocks_Analogue_SPIRAM_Library/src/ringBuffer.h"
)

target_include_directories(goldilocks-analogue-spi-ram-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Goldilocks_Analogue_SPIRAM_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(goldilocks-analogue-spi-ram-library INTERFACE
    arduino-compat
)
