add_library(pac-sparkfun-serlcd-arduino-library INTERFACE)

target_sources(pac-sparkfun-serlcd-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_SerLCD_Arduino_Library/src/SerLCD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_SerLCD_Arduino_Library/src/SerLCD.h"
)

target_include_directories(pac-sparkfun-serlcd-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_SerLCD_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-serlcd-arduino-library INTERFACE
    arduino-compat
)
