add_library(pac-acespi INTERFACE)

target_sources(pac-acespi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AceSPI/src/AceSPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSPI/src/ace_spi/SimpleSpiInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSPI/src/ace_spi/SimpleSpiFastInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSPI/src/ace_spi/HardSpiFastInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceSPI/src/ace_spi/HardSpiInterface.h"
)

target_include_directories(pac-acespi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AceSPI/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-acespi INTERFACE
    arduino-compat
)
