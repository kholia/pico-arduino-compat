add_library(pac-sparkfun-line-follower-array INTERFACE)

target_sources(pac-sparkfun-line-follower-array INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Line_Follower_Array_Arduino_Library/src/sensorbar.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Line_Follower_Array_Arduino_Library/src/sx1509_registers.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Line_Follower_Array_Arduino_Library/src/sensorbar.h"
)

target_include_directories(pac-sparkfun-line-follower-array INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Line_Follower_Array_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-line-follower-array INTERFACE
    arduino-compat
)
