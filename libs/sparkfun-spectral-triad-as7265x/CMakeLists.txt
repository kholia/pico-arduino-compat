add_library(pac-sparkfun-spectral-triad-as7265x INTERFACE)

target_sources(pac-sparkfun-spectral-triad-as7265x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AS7265x_Arduino_Library/src/SparkFun_AS7265X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AS7265x_Arduino_Library/src/SparkFun_AS7265X.h"
)

target_include_directories(pac-sparkfun-spectral-triad-as7265x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AS7265x_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-spectral-triad-as7265x INTERFACE
    arduino-compat
)
