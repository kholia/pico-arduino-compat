add_library(pac-gfx4d INTERFACE)

target_sources(pac-gfx4d INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GFX4d/src/GFX4d.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GFX4d/src/GFX4d.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX4d/src/Examples/IoDkBTestAuto/IoDkBTestAutoConst.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX4d/src/Examples/Meter/DRtest2Const.h"
  "${CMAKE_CURRENT_LIST_DIR}/GFX4d/src/Examples/coolgaugeiod/coolgaugeiodConst.h"
)

target_include_directories(pac-gfx4d INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GFX4d/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-gfx4d INTERFACE
    arduino-compat
    pac-sd
)
