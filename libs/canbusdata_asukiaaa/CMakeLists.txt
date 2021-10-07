add_library(pac-canbusdata_asukiaaa INTERFACE)

target_sources(pac-canbusdata_asukiaaa INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CanBusData-arduino/src/CanBusData_asukiaaa.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CanBusData-arduino/src/CanBusData_asukiaaa.h"
)

target_include_directories(pac-canbusdata_asukiaaa INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CanBusData-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-canbusdata_asukiaaa INTERFACE
    arduino-compat
)
