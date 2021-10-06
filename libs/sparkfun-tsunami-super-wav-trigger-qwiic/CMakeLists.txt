add_library(sparkfun-tsunami-super-wav-trigger-qwiic INTERFACE)

target_sources(sparkfun-tsunami-super-wav-trigger-qwiic INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Tsunami_Qwiic_Arduino_Library/src/SparkFun_Tsunami_Qwiic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Tsunami_Qwiic_Arduino_Library/src/SparkFun_Tsunami_Qwiic.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Tsunami_Qwiic_Arduino_Library/examples/Example_08_DrumMachine/set_functions.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Tsunami_Qwiic_Arduino_Library/examples/Example_08_DrumMachine/drum_beats.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Tsunami_Qwiic_Arduino_Library/examples/Example_08_DrumMachine/track_numbers.h"
)

target_include_directories(sparkfun-tsunami-super-wav-trigger-qwiic INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Tsunami_Qwiic_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-tsunami-super-wav-trigger-qwiic INTERFACE
    arduino-compat
)
