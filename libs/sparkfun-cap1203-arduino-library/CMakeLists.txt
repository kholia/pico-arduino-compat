add_library(sparkfun-cap1203-arduino-library INTERFACE)

target_sources(sparkfun-cap1203-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_CAP1203_Arduino_Library/src/SparkFun_CAP1203.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_CAP1203_Arduino_Library/src/SparkFun_CAP1203.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_CAP1203_Arduino_Library/src/SparkFun_CAP1203_Registers.h"
)

target_include_directories(sparkfun-cap1203-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_CAP1203_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-cap1203-arduino-library INTERFACE
    arduino-compat
)
