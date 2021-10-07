add_library(pac-sparkfun-qwiic-led-stick-library INTERFACE)

target_sources(pac-sparkfun-qwiic-led-stick-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_LED_Stick_Arduino_Library/src/Qwiic_LED_Stick.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_LED_Stick_Arduino_Library/src/Qwiic_LED_Stick.h"
)

target_include_directories(pac-sparkfun-qwiic-led-stick-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_LED_Stick_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-qwiic-led-stick-library INTERFACE
    arduino-compat
)
