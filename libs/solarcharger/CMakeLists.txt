add_library(pac-solarcharger INTERFACE)

target_sources(pac-solarcharger INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SolarCharger/src/SolarCharger.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SolarCharger/src/SolarCharger.h"
)

target_include_directories(pac-solarcharger INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SolarCharger/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-solarcharger INTERFACE
    arduino-compat
)
