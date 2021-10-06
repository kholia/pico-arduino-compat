add_library(canbusdata_asukiaaa INTERFACE)

target_sources(canbusdata_asukiaaa INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CanBusData-arduino/src/CanBusData_asukiaaa.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CanBusData-arduino/src/CanBusData_asukiaaa.h"
)

target_include_directories(canbusdata_asukiaaa INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CanBusData-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(canbusdata_asukiaaa INTERFACE
    arduino-compat
)
