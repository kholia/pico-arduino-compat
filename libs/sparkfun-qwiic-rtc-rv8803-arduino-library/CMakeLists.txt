add_library(pac-sparkfun-qwiic-rtc-rv8803-arduino-library INTERFACE)

target_sources(pac-sparkfun-qwiic-rtc-rv8803-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_RV-8803_Arduino_Library/src/SparkFun_RV8803.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_RV-8803_Arduino_Library/src/SparkFun_RV8803.h"
)

target_include_directories(pac-sparkfun-qwiic-rtc-rv8803-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_RV-8803_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-qwiic-rtc-rv8803-arduino-library INTERFACE
    arduino-compat
)
