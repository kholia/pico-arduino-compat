add_library(pac-sparkfun-rfd77402-distance-sensor-vcsel-time-of-flight INTERFACE)

target_sources(pac-sparkfun-rfd77402-distance-sensor-vcsel-time-of-flight INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_RFD77402_Arduino_Library/src/SparkFun_RFD77402_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_RFD77402_Arduino_Library/src/SparkFun_RFD77402_Arduino_Library.h"
)

target_include_directories(pac-sparkfun-rfd77402-distance-sensor-vcsel-time-of-flight INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_RFD77402_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-rfd77402-distance-sensor-vcsel-time-of-flight INTERFACE
    arduino-compat
)
