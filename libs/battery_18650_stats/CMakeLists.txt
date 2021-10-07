add_library(pac-battery_18650_stats INTERFACE)

target_sources(pac-battery_18650_stats INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Battery18650Stats/src/Battery18650Stats.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Battery18650Stats/src/Battery18650Stats.h"
)

target_include_directories(pac-battery_18650_stats INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Battery18650Stats/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-battery_18650_stats INTERFACE
    arduino-compat
)
