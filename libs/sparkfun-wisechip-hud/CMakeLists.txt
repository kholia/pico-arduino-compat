add_library(pac-sparkfun-wisechip-hud INTERFACE)

target_sources(pac-sparkfun-wisechip-hud INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_WiseChip_HUD_Library/src/WiseChipHUD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_WiseChip_HUD_Library/src/WiseChipHUD.h"
)

target_include_directories(pac-sparkfun-wisechip-hud INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_WiseChip_HUD_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-wisechip-hud INTERFACE
    arduino-compat
)
