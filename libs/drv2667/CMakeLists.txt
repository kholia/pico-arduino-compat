add_library(pac-drv2667 INTERFACE)

target_sources(pac-drv2667 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DRV2667/DRV2667.h"
  "${CMAKE_CURRENT_LIST_DIR}/DRV2667/DRV2667/Effect.h"
)

target_include_directories(pac-drv2667 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DRV2667"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-drv2667 INTERFACE
    arduino-compat
)
