add_library(energymeter INTERFACE)

target_sources(energymeter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EnergyMeter/src/EnergyMeter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EnergyMeter/src/EnergyMeter.h"
)

target_include_directories(energymeter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EnergyMeter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(energymeter INTERFACE
    arduino-compat
)
