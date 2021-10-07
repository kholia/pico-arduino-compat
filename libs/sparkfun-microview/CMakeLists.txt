add_library(pac-sparkfun-microview INTERFACE)

target_sources(pac-sparkfun-microview INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MicroView_Arduino_Library/src/MicroView.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MicroView_Arduino_Library/src/MicroView.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MicroView_Arduino_Library/src/util/font5x7.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MicroView_Arduino_Library/src/util/7segment.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MicroView_Arduino_Library/src/util/space02.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MicroView_Arduino_Library/src/util/space01.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MicroView_Arduino_Library/src/util/space03.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MicroView_Arduino_Library/src/util/fontlargenumber.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MicroView_Arduino_Library/src/util/font8x16.h"
)

target_include_directories(pac-sparkfun-microview INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MicroView_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-microview INTERFACE
    arduino-compat
)
