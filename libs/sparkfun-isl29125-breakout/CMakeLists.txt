add_library(pac-sparkfun-isl29125-breakout INTERFACE)

target_sources(pac-sparkfun-isl29125-breakout INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ISL29125_Breakout_Arduino_Library/src/SparkFunISL29125.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ISL29125_Breakout_Arduino_Library/src/SparkFunISL29125.h"
)

target_include_directories(pac-sparkfun-isl29125-breakout INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ISL29125_Breakout_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-isl29125-breakout INTERFACE
    arduino-compat
)
