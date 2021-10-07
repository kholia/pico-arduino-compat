add_library(pac-sparkfun-qwiic-button-and-qwiic-switch-library INTERFACE)

target_sources(pac-sparkfun-qwiic-button-and-qwiic-switch-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_Button_Arduino_Library/src/SparkFun_Qwiic_Button.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_Button_Arduino_Library/src/SparkFun_Qwiic_Button.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_Button_Arduino_Library/src/registers.h"
)

target_include_directories(pac-sparkfun-qwiic-button-and-qwiic-switch-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_Button_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-qwiic-button-and-qwiic-switch-library INTERFACE
    arduino-compat
)
