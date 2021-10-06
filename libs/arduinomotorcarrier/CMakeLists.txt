add_library(arduinomotorcarrier INTERFACE)

target_sources(arduinomotorcarrier INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/extras/D11-Firmware/DCMotor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/extras/D11-Firmware/Events.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/extras/D11-Firmware/ServoMotor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/extras/D11-Firmware/Encoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/extras/D11-Firmware/Battery.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/extras/D11-Firmware/PID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/extras/D11-Firmware/src/Encoder/Encoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/extras/D11-Firmware/src/PID/PID_v1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/DCMotor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/ServoMotor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/Encoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/Battery.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/ArduinoMotorCarrier.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/MotorController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/PID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/src/PID/PID_v1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/extras/D11-Firmware/src/FpS.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/extras/D11-Firmware/src/FpF.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/src/FpS.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/src/FpF.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/src/libfixmath/fix16.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/src/libfixmath/fix16_str.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/src/libfixmath/fix16_exp.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/src/libfixmath/fract32.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/src/libfixmath/fix16_trig.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/src/libfixmath/fix16_sqrt.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/src/libfixmath/fix16.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/src/libfixmath/uint32.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/extras/D11-Bootloader/nvm.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/extras/D11-Bootloader/reset.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/extras/D11-Firmware/Battery.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/extras/D11-Firmware/Events.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/extras/D11-Firmware/Common.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/extras/D11-Firmware/EncoderWrapper.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/extras/D11-Firmware/FreeRAM.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/extras/D11-Firmware/ServoMotor.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/extras/D11-Firmware/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/extras/D11-Firmware/PID.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/extras/D11-Firmware/DCMotor.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/extras/D11-Firmware/src/Encoder/Encoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/extras/D11-Firmware/src/Encoder/utility/direct_pin_read.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/extras/D11-Firmware/src/Encoder/utility/interrupt_pins.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/extras/D11-Firmware/src/Encoder/utility/interrupt_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/extras/D11-Firmware/src/PID/PID_v1.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/ArduinoMotorCarrier.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/MotorController.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/Battery.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/Common.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/ServoMotor.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/PID.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/Encoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/NanoMotorCarrier.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/MKRMotorCarrier.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/DCMotor.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/src/libfixmath/fract32.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/src/libfixmath/fixmath.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/src/libfixmath/fix16_trig_sin_lut.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/src/libfixmath/fix16.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/src/libfixmath/uint32.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/src/libfixmath/int64.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src/src/PID/PID_v1.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/examples/Flasher/fw_nano.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/examples/Flasher/fw_mkr.h"
)

target_include_directories(arduinomotorcarrier INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoMotorCarrier/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduinomotorcarrier INTERFACE
    arduino-compat
)
