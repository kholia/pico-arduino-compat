add_library(pac-sparkfun-bq27441-lipo-fuel-gauge-arduino-library INTERFACE)

target_sources(pac-sparkfun-bq27441-lipo-fuel-gauge-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_BQ27441_Arduino_Library/src/SparkFunBQ27441.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_BQ27441_Arduino_Library/src/SparkFunBQ27441.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_BQ27441_Arduino_Library/src/BQ27441_Definitions.h"
)

target_include_directories(pac-sparkfun-bq27441-lipo-fuel-gauge-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_BQ27441_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-bq27441-lipo-fuel-gauge-arduino-library INTERFACE
    arduino-compat
)
