add_library(capacitivesensor INTERFACE)

target_sources(capacitivesensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CapacitiveSensor/CapacitiveSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CapacitiveSensor/CapacitiveSensor.h"
)

target_include_directories(capacitivesensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CapacitiveSensor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(capacitivesensor INTERFACE
    arduino-compat
)
