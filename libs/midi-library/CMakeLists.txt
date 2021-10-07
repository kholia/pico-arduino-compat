add_library(pac-midi-library INTERFACE)

target_sources(pac-midi-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino_midi_library/test/unit-tests/unit-tests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_midi_library/test/unit-tests/tests/unit-tests_MidiMessage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_midi_library/test/unit-tests/tests/unit-tests_MidiOutput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_midi_library/test/unit-tests/tests/unit-tests_MidiInput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_midi_library/test/unit-tests/tests/unit-tests_SysExCodec.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_midi_library/test/unit-tests/tests/unit-tests_MidiInputCallbacks.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_midi_library/test/unit-tests/tests/unit-tests_Settings.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_midi_library/test/unit-tests/tests/unit-tests_MidiThru.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_midi_library/test/mocks/test-mocks.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_midi_library/test/mocks/test-mocks_SerialMock.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_midi_library/src/MIDI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_midi_library/examples/SimpleSynth/noteList.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_midi_library/test/mocks/test-mocks_SerialMock.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_midi_library/src/MIDI.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_midi_library/test/unit-tests/unit-tests_Namespace.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_midi_library/test/unit-tests/unit-tests.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_midi_library/test/unit-tests/tests/unit-tests_Settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_midi_library/test/mocks/test-mocks_SerialMock.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_midi_library/test/mocks/test-mocks_Namespace.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_midi_library/test/mocks/test-mocks.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_midi_library/doc/midi_DoxygenMainPage.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_midi_library/src/midi_Namespace.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_midi_library/src/serialMIDI.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_midi_library/src/midi_Platform.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_midi_library/src/MIDI.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_midi_library/src/midi_Defs.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_midi_library/src/midi_Message.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_midi_library/src/midi_Settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_midi_library/examples/RPN_NRPN/utility.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_midi_library/examples/SimpleSynth/noteList.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_midi_library/examples/SimpleSynth/pitches.h"
)

target_include_directories(pac-midi-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino_midi_library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-midi-library INTERFACE
    arduino-compat
)
