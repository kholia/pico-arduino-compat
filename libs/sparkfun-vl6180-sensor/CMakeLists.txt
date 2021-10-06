add_library(sparkfun-vl6180-sensor INTERFACE)

target_sources(sparkfun-vl6180-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ToF_Range_Finder-VL6180_Arduino_Library/src/SparkFun_VL6180X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ToF_Range_Finder-VL6180_Arduino_Library/src/SparkFun_VL6180X.h"
)

target_include_directories(sparkfun-vl6180-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ToF_Range_Finder-VL6180_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-vl6180-sensor INTERFACE
    arduino-compat
)
