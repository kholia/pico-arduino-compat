add_library(sparkfun-qwiic-tmf-8801-time-of-flight-library INTERFACE)

target_sources(sparkfun-qwiic-tmf-8801-time-of-flight-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TMF8801_Arduino_Library/src/SparkFun_TMF8801_IO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TMF8801_Arduino_Library/src/SparkFun_TMF8801_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TMF8801_Arduino_Library/src/SparkFun_TMF8801_Arduino_Library.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TMF8801_Arduino_Library/src/SparkFun_TMF8801_IO.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TMF8801_Arduino_Library/src/SparkFun_TMF8801_Constants.h"
)

target_include_directories(sparkfun-qwiic-tmf-8801-time-of-flight-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TMF8801_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-qwiic-tmf-8801-time-of-flight-library INTERFACE
    arduino-compat
)
