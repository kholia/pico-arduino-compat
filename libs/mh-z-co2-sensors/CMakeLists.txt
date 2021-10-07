add_library(pac-mh-z-co2-sensors INTERFACE)

target_sources(pac-mh-z-co2-sensors INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MH-Z-CO2-Sensors/MHZ.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MH-Z-CO2-Sensors/MHZ.h"
)

target_include_directories(pac-mh-z-co2-sensors INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MH-Z-CO2-Sensors"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mh-z-co2-sensors INTERFACE
    arduino-compat
)
