add_library(pac-edushield INTERFACE)

target_sources(pac-edushield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/edushield/src/edushield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/libraries/TinyWireS/TinyWireS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/empty/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/HardwareSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/TinyDebugSerialErrors.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/TinyDebugSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/Tone.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/TinyDebugSerial38400.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/TinyDebugSerial9600.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/TinyDebugSerial115200.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/WString.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/Print.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/WMath.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/libraries/TinyWireS/usiTwiSlave.c"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/wiring_analog.c"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/WInterrupts.c"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/wiring.c"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/wiring_shift.c"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/wiring_pulse.c"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/pins_arduino.c"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/wiring_digital.c"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/src/edushield.h"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/libraries/TinyWireS/TinyWireS.h"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/libraries/TinyWireS/usiTwiSlave.h"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/empty/WProgram.h"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/empty/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/WConstants.h"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/wiring.h"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/HardwareSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/core_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/ToneTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/WCharacter.h"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/PwmTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/Print.h"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/binary.h"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/UserTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/core_adc.h"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/WProgram.h"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/WString.h"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/wiring_private.h"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/Stream.h"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/core_timers.h"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/TinyDebugSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/core_pins.h"
  "${CMAKE_CURRENT_LIST_DIR}/edushield/_firmware/hardware/tiny/avr/cores/tiny/core_build_options.h"
)

target_include_directories(pac-edushield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/edushield/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-edushield INTERFACE
    arduino-compat
)
