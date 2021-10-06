add_library(sparkfun-stusb4500 INTERFACE)

target_sources(sparkfun-stusb4500 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_STUSB4500_Arduino_Library/src/SparkFun_STUSB4500.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_STUSB4500_Arduino_Library/src/SparkFun_STUSB4500.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_STUSB4500_Arduino_Library/src/stusb4500_register_map.h"
)

target_include_directories(sparkfun-stusb4500 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_STUSB4500_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-stusb4500 INTERFACE
    arduino-compat
)
