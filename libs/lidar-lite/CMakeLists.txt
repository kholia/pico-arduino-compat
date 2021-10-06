add_library(lidar-lite INTERFACE)

target_sources(lidar-lite INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LIDARLite_Arduino_Library/src/LIDARLite.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LIDARLite_Arduino_Library/src/LIDARLite_v4LED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LIDARLite_Arduino_Library/src/LIDARLite_v3HP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LIDARLite_Arduino_Library/src/LIDARLite_v4LED.h"
  "${CMAKE_CURRENT_LIST_DIR}/LIDARLite_Arduino_Library/src/LIDARLite.h"
  "${CMAKE_CURRENT_LIST_DIR}/LIDARLite_Arduino_Library/src/LIDARLite_v3HP.h"
)

target_include_directories(lidar-lite INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LIDARLite_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(lidar-lite INTERFACE
    arduino-compat
)
