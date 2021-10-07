add_library(pac-sparkfun-ccs811-arduino-library INTERFACE)

target_sources(pac-sparkfun-ccs811-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_CCS811_Arduino_Library/src/SparkFunCCS811.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_CCS811_Arduino_Library/src/SparkFunCCS811.h"
)

target_include_directories(pac-sparkfun-ccs811-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_CCS811_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-ccs811-arduino-library INTERFACE
    arduino-compat
)
