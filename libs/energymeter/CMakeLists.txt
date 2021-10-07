add_library(pac-energymeter INTERFACE)

target_sources(pac-energymeter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EnergyMeter/src/EnergyMeter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EnergyMeter/src/EnergyMeter.h"
)

target_include_directories(pac-energymeter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EnergyMeter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-energymeter INTERFACE
    arduino-compat
)
