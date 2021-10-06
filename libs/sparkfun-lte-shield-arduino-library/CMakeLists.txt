add_library(sparkfun-lte-shield-arduino-library INTERFACE)

target_sources(sparkfun-lte-shield-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LTE_Shield_Arduino_Library/src/SparkFun_LTE_Shield_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LTE_Shield_Arduino_Library/src/SparkFun_LTE_Shield_Arduino_Library.h"
)

target_include_directories(sparkfun-lte-shield-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_LTE_Shield_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-lte-shield-arduino-library INTERFACE
    arduino-compat
)
