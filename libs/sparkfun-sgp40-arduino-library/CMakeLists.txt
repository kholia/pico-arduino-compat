add_library(sparkfun-sgp40-arduino-library INTERFACE)

target_sources(sparkfun-sgp40-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_SGP40_Arduino_Library/src/SparkFun_SGP40_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_SGP40_Arduino_Library/src/sensirion_voc_algorithm.c"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_SGP40_Arduino_Library/src/SparkFun_SGP40_Arduino_Library.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_SGP40_Arduino_Library/src/sensirion_arch_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_SGP40_Arduino_Library/src/sensirion_voc_algorithm.h"
)

target_include_directories(sparkfun-sgp40-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_SGP40_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-sgp40-arduino-library INTERFACE
    arduino-compat
)
