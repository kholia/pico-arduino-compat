add_library(pac-sparkfun-as6212-qwiic-arduino-library INTERFACE)

target_sources(pac-sparkfun-as6212-qwiic-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AS6212_Qwiic_Arduino_Library/src/SparkFun_AS6212_Qwiic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AS6212_Qwiic_Arduino_Library/src/SparkFun_AS6212_Qwiic.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AS6212_Qwiic_Arduino_Library/src/registers/AS6212_Registers.h"
)

target_include_directories(pac-sparkfun-as6212-qwiic-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AS6212_Qwiic_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-as6212-qwiic-arduino-library INTERFACE
    arduino-compat
)
