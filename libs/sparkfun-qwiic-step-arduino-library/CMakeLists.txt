add_library(pac-sparkfun-qwiic-step-arduino-library INTERFACE)

target_sources(pac-sparkfun-qwiic-step-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_Step_Arduino_Library/src/SparkFun_Qwiic_Step.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_Step_Arduino_Library/src/SparkFun_Qwiic_Step.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_Step_Arduino_Library/src/registers.h"
)

target_include_directories(pac-sparkfun-qwiic-step-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_Step_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-qwiic-step-arduino-library INTERFACE
    arduino-compat
)
