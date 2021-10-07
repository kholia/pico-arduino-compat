add_library(pac-sparkfun-tmp102-breakout INTERFACE)

target_sources(pac-sparkfun-tmp102-breakout INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TMP102_Arduino_Library/src/SparkFunTMP102.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TMP102_Arduino_Library/src/SparkFunTMP102.h"
)

target_include_directories(pac-sparkfun-tmp102-breakout INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TMP102_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-tmp102-breakout INTERFACE
    arduino-compat
)
