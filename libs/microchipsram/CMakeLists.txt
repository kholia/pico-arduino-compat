add_library(pac-microchipsram INTERFACE)

target_sources(pac-microchipsram INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MicrochipSRAM/src/MicrochipSRAM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MicrochipSRAM/src/MicrochipSRAM.h"
)

target_include_directories(pac-microchipsram INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MicrochipSRAM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-microchipsram INTERFACE
    arduino-compat
)
