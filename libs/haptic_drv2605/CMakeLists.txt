add_library(pac-haptic_drv2605 INTERFACE)

target_sources(pac-haptic_drv2605 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Haptic_DRV2605/src/Haptic_DRV2605.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Haptic_DRV2605/src/Haptic_DRV2605_registers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Haptic_DRV2605/src/Haptic_DRV2605.h"
)

target_include_directories(pac-haptic_drv2605 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Haptic_DRV2605/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-haptic_drv2605 INTERFACE
    arduino-compat
)
