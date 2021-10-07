add_library(pac-energyboard INTERFACE)

target_sources(pac-energyboard INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EnergyBoard/src/EnergyBoard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EnergyBoard/src/EnergyBoard.h"
)

target_include_directories(pac-energyboard INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EnergyBoard/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-energyboard INTERFACE
    arduino-compat
)
