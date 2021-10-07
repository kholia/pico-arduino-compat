add_library(pac-sparkfun-micropressure-library INTERFACE)

target_sources(pac-sparkfun-micropressure-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MicroPressure_Arduino_Library/src/SparkFun_MicroPressure.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MicroPressure_Arduino_Library/src/SparkFun_MicroPressure.h"
)

target_include_directories(pac-sparkfun-micropressure-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MicroPressure_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-micropressure-library INTERFACE
    arduino-compat
)
