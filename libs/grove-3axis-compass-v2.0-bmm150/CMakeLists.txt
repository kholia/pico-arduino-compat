add_library(pac-grove-3axis-compass-v2.0-bmm150 INTERFACE)

target_sources(pac-grove-3axis-compass-v2.0-bmm150 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_3_Axis_Compass_V2.0_BMM150/bmm150.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_3_Axis_Compass_V2.0_BMM150/bmm150.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_3_Axis_Compass_V2.0_BMM150/bmm150_defs.h"
)

target_include_directories(pac-grove-3axis-compass-v2.0-bmm150 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_3_Axis_Compass_V2.0_BMM150"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-grove-3axis-compass-v2.0-bmm150 INTERFACE
    arduino-compat
)
