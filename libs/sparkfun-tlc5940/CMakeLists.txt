add_library(pac-sparkfun-tlc5940 INTERFACE)

target_sources(pac-sparkfun-tlc5940 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TLC5940_Arduino_Library/src/SparkFun_Tlc5940.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TLC5940_Arduino_Library/extras/pinouts/ATmega_xx4.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TLC5940_Arduino_Library/extras/pinouts/ATmega_xx8.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TLC5940_Arduino_Library/extras/pinouts/Teensypp_xxx6.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TLC5940_Arduino_Library/extras/pinouts/ATmega_8.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TLC5940_Arduino_Library/extras/pinouts/chip_includes.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TLC5940_Arduino_Library/extras/pinouts/Arduino_Mega.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TLC5940_Arduino_Library/extras/pinouts/Teensy_xxU4.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TLC5940_Arduino_Library/src/tlc_fades.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TLC5940_Arduino_Library/src/tlc_progmem_utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TLC5940_Arduino_Library/src/tlc_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TLC5940_Arduino_Library/src/tlc_shifts.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TLC5940_Arduino_Library/src/tlc_servos.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TLC5940_Arduino_Library/src/tlc_animations.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TLC5940_Arduino_Library/src/SparkFun_Tlc5940.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TLC5940_Arduino_Library/src/pinouts/ATmega_xx4.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TLC5940_Arduino_Library/src/pinouts/ATmega_xx8.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TLC5940_Arduino_Library/src/pinouts/Teensypp_xxx6.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TLC5940_Arduino_Library/src/pinouts/ATmega_8.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TLC5940_Arduino_Library/src/pinouts/chip_includes.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TLC5940_Arduino_Library/src/pinouts/Arduino_Mega.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TLC5940_Arduino_Library/src/pinouts/Teensy_xxU4.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TLC5940_Arduino_Library/examples/BasicAnimations/ani_arduino.h"
)

target_include_directories(pac-sparkfun-tlc5940 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TLC5940_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-tlc5940 INTERFACE
    arduino-compat
)
