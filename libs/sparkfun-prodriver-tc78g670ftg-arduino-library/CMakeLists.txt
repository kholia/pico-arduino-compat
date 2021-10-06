add_library(sparkfun-prodriver-tc78g670ftg-arduino-library INTERFACE)

target_sources(sparkfun-prodriver-tc78g670ftg-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ProDriver_TC78H670FTG_Arduino_Library/src/SparkFun_ProDriver_TC78H670FTG_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ProDriver_TC78H670FTG_Arduino_Library/src/SparkFun_ProDriver_TC78H670FTG_Arduino_Library.h"
)

target_include_directories(sparkfun-prodriver-tc78g670ftg-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ProDriver_TC78H670FTG_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-prodriver-tc78g670ftg-arduino-library INTERFACE
    arduino-compat
)
