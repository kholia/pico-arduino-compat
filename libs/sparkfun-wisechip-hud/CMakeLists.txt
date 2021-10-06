add_library(sparkfun-wisechip-hud INTERFACE)

target_sources(sparkfun-wisechip-hud INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_WiseChip_HUD_Library/src/WiseChipHUD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_WiseChip_HUD_Library/src/WiseChipHUD.h"
)

target_include_directories(sparkfun-wisechip-hud INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_WiseChip_HUD_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-wisechip-hud INTERFACE
    arduino-compat
)
