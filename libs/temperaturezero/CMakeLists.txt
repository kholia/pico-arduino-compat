add_library(pac-temperaturezero INTERFACE)

target_sources(pac-temperaturezero INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ElectronicCats_InternalTemperatureZero/src/TemperatureZero.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ElectronicCats_InternalTemperatureZero/src/TemperatureZero.h"
)

target_include_directories(pac-temperaturezero INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ElectronicCats_InternalTemperatureZero/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-temperaturezero INTERFACE
    arduino-compat
)
