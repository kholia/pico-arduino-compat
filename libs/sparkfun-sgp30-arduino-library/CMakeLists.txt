add_library(sparkfun-sgp30-arduino-library INTERFACE)

target_sources(sparkfun-sgp30-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_SGP30_Arduino_Library/src/SparkFun_SGP30_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_SGP30_Arduino_Library/src/SparkFun_SGP30_Arduino_Library.h"
)

target_include_directories(sparkfun-sgp30-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_SGP30_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-sgp30-arduino-library INTERFACE
    arduino-compat
)
