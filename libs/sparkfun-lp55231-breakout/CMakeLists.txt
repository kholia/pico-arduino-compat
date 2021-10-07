add_library(pac-sparkfun-lp55231-breakout INTERFACE)

target_sources(pac-sparkfun-lp55231-breakout INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LP55231_Arduino_Library/src/lp55231.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LP55231_Arduino_Library/src/lp55231.h"
)

target_include_directories(pac-sparkfun-lp55231-breakout INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LP55231_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-lp55231-breakout INTERFACE
    arduino-compat
)
