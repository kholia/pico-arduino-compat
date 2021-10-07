add_library(pac-arduino-opl2 INTERFACE)

target_sources(pac-arduino-opl2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/examples_pi/frequency_sweep/sweep.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/examples_pi/OPL3Duo/DemoTune/DemoTune.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/examples_pi/OPL3Duo/DemoTune/TuneParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/examples_pi/OPL3Duo/HardwareTest/HardwareTest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/examples_pi/simpletone/simpletone.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/examples_pi/demotune/demotune.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/examples_pi/drums/drums.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/examples_pi/opl2play/opl2play.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/test/OPL2_Functions/Test_OPL2_Functions.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/test/OPL2_Registers/Test_OPL2_Registers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/src/OPL2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/src/OPL3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/src/TuneParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/src/OPL3Duo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/examples/OPL3Duo/TeensyMidi/TeensyMidi.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/examples/OPL2AudioBoard/Teensy/TeensyMidi/name.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/examples_pi/OPL3Duo/DemoTune/midi_instruments_4op.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/examples_pi/OPL3Duo/DemoTune/TuneParser.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/examples_pi/OPL3Duo/HardwareTest/instruments.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/examples_pi/demotune/midi_instruments.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/examples_pi/drums/instruments.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/examples_pi/opl2play/opl2play.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/src/OPL3.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/src/midi_instruments_4op.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/src/TuneParser.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/src/midi_instruments.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/src/OPL3Duo.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/src/midi_drums_4op.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/src/instruments.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/src/midi_drums.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/src/midi_instruments2_4op.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/src/OPL2.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/examples/OPL3Duo/TeensyMidi/usb_names.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/examples/OPL3Duo/TeensyMidi/TeensyMidi.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/examples/OPL2AudioBoard/Teensy/TeensyMidi/usb_names.h"
)

target_include_directories(pac-arduino-opl2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoOPL2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduino-opl2 INTERFACE
    arduino-compat
)
