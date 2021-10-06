add_library(teensyview INTERFACE)

target_sources(teensyview INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TeensyView_Arduino_Library/src/hardware.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TeensyView_Arduino_Library/src/TeensyView.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TeensyView_Arduino_Library/src/TeensyView.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TeensyView_Arduino_Library/src/font5x7.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TeensyView_Arduino_Library/src/sevenSegment.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TeensyView_Arduino_Library/src/fontlargenumber.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TeensyView_Arduino_Library/src/font8x16.h"
)

target_include_directories(teensyview INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TeensyView_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(teensyview INTERFACE
    arduino-compat
)
