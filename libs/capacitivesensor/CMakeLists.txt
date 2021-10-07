add_library(pac-capacitivesensor INTERFACE)

target_sources(pac-capacitivesensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CapacitiveSensor/CapacitiveSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CapacitiveSensor/CapacitiveSensor.h"
)

target_include_directories(pac-capacitivesensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CapacitiveSensor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-capacitivesensor INTERFACE
    arduino-compat
)
