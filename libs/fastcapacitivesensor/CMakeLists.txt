add_library(fastcapacitivesensor INTERFACE)

target_sources(fastcapacitivesensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FastCapacitiveSensor/FastCapacitiveSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastCapacitiveSensor/FastCapacitiveSensor.h"
)

target_include_directories(fastcapacitivesensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FastCapacitiveSensor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fastcapacitivesensor INTERFACE
    arduino-compat
)
