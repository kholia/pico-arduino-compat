add_library(microchipsram INTERFACE)

target_sources(microchipsram INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MicrochipSRAM/src/MicrochipSRAM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MicrochipSRAM/src/MicrochipSRAM.h"
)

target_include_directories(microchipsram INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MicrochipSRAM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(microchipsram INTERFACE
    arduino-compat
)
