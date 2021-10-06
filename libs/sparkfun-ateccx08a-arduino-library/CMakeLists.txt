add_library(sparkfun-ateccx08a-arduino-library INTERFACE)

target_sources(sparkfun-ateccx08a-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ATECCX08a_Arduino_Library/src/SparkFun_ATECCX08a_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ATECCX08a_Arduino_Library/src/SparkFun_ATECCX08a_Arduino_Library.h"
)

target_include_directories(sparkfun-ateccx08a-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ATECCX08a_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-ateccx08a-arduino-library INTERFACE
    arduino-compat
)
