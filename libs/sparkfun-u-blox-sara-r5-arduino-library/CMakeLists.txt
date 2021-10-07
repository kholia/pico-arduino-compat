add_library(pac-sparkfun-u-blox-sara-r5-arduino-library INTERFACE)

target_sources(pac-sparkfun-u-blox-sara-r5-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_u-blox_SARA-R5_Arduino_Library/src/SparkFun_u-blox_SARA-R5_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_u-blox_SARA-R5_Arduino_Library/src/SparkFun_u-blox_SARA-R5_Arduino_Library.h"
)

target_include_directories(pac-sparkfun-u-blox-sara-r5-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_u-blox_SARA-R5_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-u-blox-sara-r5-arduino-library INTERFACE
    arduino-compat
)
