add_library(sparkfun-vcnl4040-proximity-sensor-library INTERFACE)

target_sources(sparkfun-vcnl4040-proximity-sensor-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_VCNL4040_Arduino_Library/src/SparkFun_VCNL4040_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_VCNL4040_Arduino_Library/src/SparkFun_VCNL4040_Arduino_Library.h"
)

target_include_directories(sparkfun-vcnl4040-proximity-sensor-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_VCNL4040_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-vcnl4040-proximity-sensor-library INTERFACE
    arduino-compat
)
