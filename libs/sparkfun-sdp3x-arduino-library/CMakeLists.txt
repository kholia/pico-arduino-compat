add_library(sparkfun-sdp3x-arduino-library INTERFACE)

target_sources(sparkfun-sdp3x-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_SDP3x_Arduino_Library/src/SparkFun_SDP3x_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_SDP3x_Arduino_Library/src/SparkFun_SDP3x_Arduino_Library.h"
)

target_include_directories(sparkfun-sdp3x-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_SDP3x_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-sdp3x-arduino-library INTERFACE
    arduino-compat
)
