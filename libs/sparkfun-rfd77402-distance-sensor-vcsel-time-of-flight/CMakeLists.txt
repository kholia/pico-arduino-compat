add_library(sparkfun-rfd77402-distance-sensor-vcsel-time-of-flight INTERFACE)

target_sources(sparkfun-rfd77402-distance-sensor-vcsel-time-of-flight INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_RFD77402_Arduino_Library/src/SparkFun_RFD77402_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_RFD77402_Arduino_Library/src/SparkFun_RFD77402_Arduino_Library.h"
)

target_include_directories(sparkfun-rfd77402-distance-sensor-vcsel-time-of-flight INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_RFD77402_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-rfd77402-distance-sensor-vcsel-time-of-flight INTERFACE
    arduino-compat
)
