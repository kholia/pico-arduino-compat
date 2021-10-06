add_library(sparkfun-qwiic-twist-arduino-library INTERFACE)

target_sources(sparkfun-qwiic-twist-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_Twist_Arduino_Library/src/SparkFun_Qwiic_Twist_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_Twist_Arduino_Library/src/SparkFun_Qwiic_Twist_Arduino_Library.h"
)

target_include_directories(sparkfun-qwiic-twist-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_Twist_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-qwiic-twist-arduino-library INTERFACE
    arduino-compat
)
