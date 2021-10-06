add_library(sparkfun-vkey-arduino-library INTERFACE)

target_sources(sparkfun-vkey-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_VKey_Voltage_Keypad_Arduino_Library/src/SparkFunVKeyVoltageKeypad.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_VKey_Voltage_Keypad_Arduino_Library/src/SparkFunVKeyVoltageKeypad.h"
)

target_include_directories(sparkfun-vkey-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_VKey_Voltage_Keypad_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-vkey-arduino-library INTERFACE
    arduino-compat
)
