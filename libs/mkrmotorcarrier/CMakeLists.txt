add_library(pac-mkrmotorcarrier INTERFACE)

target_sources(pac-mkrmotorcarrier INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/extras/D11-Firmware/DCMotor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/extras/D11-Firmware/Events.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/extras/D11-Firmware/ServoMotor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/extras/D11-Firmware/Encoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/extras/D11-Firmware/Battery.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/extras/D11-Firmware/PID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/extras/D11-Firmware/src/Encoder/Encoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/extras/D11-Firmware/src/PID/PID_v1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/src/DCMotor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/src/ServoMotor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/src/Encoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/src/Battery.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/src/ArduinoMotorCarrier.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/src/MotorController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/src/PID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/src/src/PID/PID_v1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/extras/D11-Firmware/src/FpS.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/extras/D11-Firmware/src/FpF.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/src/src/libfixmath/fix16.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/src/src/libfixmath/fix16_str.c"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/src/src/libfixmath/fix16_exp.c"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/src/src/libfixmath/fract32.c"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/src/src/libfixmath/fix16_trig.c"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/src/src/libfixmath/fix16_sqrt.c"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/src/src/libfixmath/fix16.c"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/src/src/libfixmath/uint32.c"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/extras/D11-Bootloader/nvm.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/extras/D11-Bootloader/reset.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/extras/D11-Firmware/Battery.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/extras/D11-Firmware/Events.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/extras/D11-Firmware/Common.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/extras/D11-Firmware/EncoderWrapper.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/extras/D11-Firmware/FreeRAM.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/extras/D11-Firmware/ServoMotor.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/extras/D11-Firmware/PID.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/extras/D11-Firmware/DCMotor.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/extras/D11-Firmware/src/Encoder/Encoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/extras/D11-Firmware/src/Encoder/utility/direct_pin_read.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/extras/D11-Firmware/src/Encoder/utility/interrupt_pins.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/extras/D11-Firmware/src/Encoder/utility/interrupt_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/extras/D11-Firmware/src/PID/PID_v1.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/src/ArduinoMotorCarrier.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/src/MotorController.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/src/Battery.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/src/Common.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/src/ServoMotor.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/src/PID.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/src/Encoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/src/NanoMotorCarrier.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/src/MKRMotorCarrier.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/src/DCMotor.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/src/src/libfixmath/fract32.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/src/src/libfixmath/fixmath.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/src/src/libfixmath/fix16_trig_sin_lut.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/src/src/libfixmath/fix16.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/src/src/libfixmath/uint32.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/src/src/libfixmath/int64.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/src/src/PID/PID_v1.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/examples/Flasher/fw.h"
)

target_include_directories(pac-mkrmotorcarrier INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MKRMotorCarrier/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mkrmotorcarrier INTERFACE
    arduino-compat
)
