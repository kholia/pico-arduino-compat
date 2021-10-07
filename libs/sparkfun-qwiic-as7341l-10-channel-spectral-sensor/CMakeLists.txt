add_library(pac-sparkfun-qwiic-as7341l-10-channel-spectral-sensor INTERFACE)

target_sources(pac-sparkfun-qwiic-as7341l-10-channel-spectral-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AS7341X_Arduino_Library/src/SparkFun_AS7341X_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AS7341X_Arduino_Library/src/SparFun_AS7341X_IO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AS7341X_Arduino_Library/src/SparkFun_AS7341X_IO.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AS7341X_Arduino_Library/src/SparkFun_AS7341X_Arduino_Library.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AS7341X_Arduino_Library/src/SparkFun_AS7341X_Constants.h"
)

target_include_directories(pac-sparkfun-qwiic-as7341l-10-channel-spectral-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AS7341X_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-qwiic-as7341l-10-channel-spectral-sensor INTERFACE
    arduino-compat
)
