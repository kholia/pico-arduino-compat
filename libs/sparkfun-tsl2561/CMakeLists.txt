add_library(sparkfun-tsl2561 INTERFACE)

target_sources(sparkfun-tsl2561 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TSL2561_Arduino_Library/src/SparkFunTSL2561.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TSL2561_Arduino_Library/src/SparkFunTSL2561.h"
)

target_include_directories(sparkfun-tsl2561 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TSL2561_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-tsl2561 INTERFACE
    arduino-compat
)
