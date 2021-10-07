add_library(pac-sparkfun-ak9750-human-presence-sensor-library INTERFACE)

target_sources(pac-sparkfun-ak9750-human-presence-sensor-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AK9750_Arduino_Library/src/SparkFun_AK975X_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AK9750_Arduino_Library/src/SparkFun_AK975X_Arduino_Library.h"
)

target_include_directories(pac-sparkfun-ak9750-human-presence-sensor-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AK9750_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-ak9750-human-presence-sensor-library INTERFACE
    arduino-compat
)
