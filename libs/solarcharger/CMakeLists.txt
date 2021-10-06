add_library(solarcharger INTERFACE)

target_sources(solarcharger INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SolarCharger/src/SolarCharger.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SolarCharger/src/SolarCharger.h"
)

target_include_directories(solarcharger INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SolarCharger/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(solarcharger INTERFACE
    arduino-compat
)
