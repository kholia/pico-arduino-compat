add_library(pac-sparkfun-qwiic-alphanumeric-display-arduino-library INTERFACE)

target_sources(pac-sparkfun-qwiic-alphanumeric-display-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Alphanumeric_Display_Arduino_Library/src/SparkFun_Alphanumeric_Display.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Alphanumeric_Display_Arduino_Library/src/SparkFun_Alphanumeric_Display.h"
)

target_include_directories(pac-sparkfun-qwiic-alphanumeric-display-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Alphanumeric_Display_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-qwiic-alphanumeric-display-arduino-library INTERFACE
    arduino-compat
)
