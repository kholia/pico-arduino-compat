add_library(pac-ssvanysensor INTERFACE)

target_sources(pac-ssvanysensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SSVAnySensor/SSVAnySensor.h"
)

target_include_directories(pac-ssvanysensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SSVAnySensor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ssvanysensor INTERFACE
    arduino-compat
)
