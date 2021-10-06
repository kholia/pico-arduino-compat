add_library(mh-z-co2-sensors INTERFACE)

target_sources(mh-z-co2-sensors INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MH-Z-CO2-Sensors/MHZ.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MH-Z-CO2-Sensors/MHZ.h"
)

target_include_directories(mh-z-co2-sensors INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MH-Z-CO2-Sensors"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mh-z-co2-sensors INTERFACE
    arduino-compat
)
