add_library(sparkfun-stc3x-arduino-library INTERFACE)

target_sources(sparkfun-stc3x-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_STC3x_Arduino_Library/src/SparkFun_STC3x_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_STC3x_Arduino_Library/src/SparkFun_STC3x_Arduino_Library.h"
)

target_include_directories(sparkfun-stc3x-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_STC3x_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-stc3x-arduino-library INTERFACE
    arduino-compat
)
