add_library(ssvanysensor INTERFACE)

target_sources(ssvanysensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SSVAnySensor/SSVAnySensor.h"
)

target_include_directories(ssvanysensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SSVAnySensor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ssvanysensor INTERFACE
    arduino-compat
)
