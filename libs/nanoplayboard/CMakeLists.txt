add_library(pac-nanoplayboard INTERFACE)

target_sources(pac-nanoplayboard INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/Button.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/NewPing.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/DHT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/NanoServo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/NanoPlayBoard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/LedMatrix.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/RotaryEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/RGB.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/LDR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/Register.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/Potentiometer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/MMA7660FC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/Buzzer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/NanoServos.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/experimental/morse_code/MorseCodeAlphabet.h"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/RGB.h"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/NanoServo.h"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/Button.h"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/NanoServos.h"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/RotaryEncoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/PinsModelB.h"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/LandscapeNumbers.h"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/LDR.h"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/Potentiometer.h"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/PinsModelA.h"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/MMA7660FC.h"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/NanoSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/NanoPlayBoard.h"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/Alphabet.h"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/Configuration.h"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/Buzzer.h"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/NewPing.h"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/Register.h"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/LedMatrix.h"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/DHT.h"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src/SoftI2CMaster.h"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/examples/14.midi/midi_note_ldr/MIDINoteNumbers.h"
  "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/examples/14.midi/midi_note_potentiometer/MIDINoteNumbers.h"
)

target_include_directories(pac-nanoplayboard INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NanoPlayBoard-Arduino-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-nanoplayboard INTERFACE
    arduino-compat
)
