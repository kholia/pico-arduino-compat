add_library(pac-fastcapacitivesensor INTERFACE)

target_sources(pac-fastcapacitivesensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FastCapacitiveSensor/FastCapacitiveSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastCapacitiveSensor/FastCapacitiveSensor.h"
)

target_include_directories(pac-fastcapacitivesensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FastCapacitiveSensor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fastcapacitivesensor INTERFACE
    arduino-compat
)
