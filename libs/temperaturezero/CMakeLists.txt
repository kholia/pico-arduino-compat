add_library(temperaturezero INTERFACE)

target_sources(temperaturezero INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ElectronicCats_InternalTemperatureZero/src/TemperatureZero.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ElectronicCats_InternalTemperatureZero/src/TemperatureZero.h"
)

target_include_directories(temperaturezero INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ElectronicCats_InternalTemperatureZero/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(temperaturezero INTERFACE
    arduino-compat
)
