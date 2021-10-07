add_library(pac-grove-haptic-motor INTERFACE)

target_sources(pac-grove-haptic-motor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Haptic_Motor/drv2605.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Haptic_Motor/drv2605.h"
)

target_include_directories(pac-grove-haptic-motor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_Haptic_Motor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-grove-haptic-motor INTERFACE
    arduino-compat
)
