add_library(midi-device-controller INTERFACE)

target_sources(midi-device-controller INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Devices/MIDI_Digital_IO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Devices/MIDI_SN74HC595N.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Devices/byteNoteRegister.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Devices/MIDI_Pitch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Collection_Controller/MIDI_Collection_Controller.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Collection_Controller/MIDI_Pitch_Node.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Collection_Controller/Base_MIDI_Pitch_Collection.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Collection_Controller/Collections/RoundRobin_Collection.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Collection_Controller/Collections/Direct_Collection.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Collection_Controller/Collections/FirstAvailable_Collection.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Device_Controller/MIDI_Periods.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Device_Controller/MIDI_Device_Controller.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Device_Controller/ITimer/TimerOne_Timer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Device_Factory/MIDI_Device_Factory.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/SerialDebug/SerialDebug.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Pulse_Controller/MIDI_Pulse_Controller.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Collection_Factory/MIDI_Collection_Factory.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/examples/3Buzzers_HairlessMIDI/src/MIDI_Serial/MIDI_Message.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/examples/3Buzzers_HairlessMIDI/src/MIDI_Serial/MIDI_Handler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/examples/3Buzzers_HairlessMIDI/src/MIDI_Serial/MIDI_Serial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/Settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Device_Controller.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MDC_Extras.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Devices/MIDI_SN74HC595N.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Devices/PulseDeviceEnum.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Devices/MIDI_Digital_IO.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Devices/byteNoteRegister.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Devices/MIDI_Pitch.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Devices/noteDurationTracker.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Devices/IPulseNotes.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Devices/byteBits.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Collection_Controller/MIDI_Pitch_Node.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Collection_Controller/MIDI_Collection_Controller.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Collection_Controller/Base_MIDI_Pitch_Collection.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Collection_Controller/Collections/RoundRobin_Collection.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Collection_Controller/Collections/Direct_Collection.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Collection_Controller/Collections/FirstAvailable_Collection.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Device_Controller/MIDI_Periods.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Device_Controller/ITimer/ITimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Device_Controller/ITimer/TimerOne_Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Device_Factory/MIDI_Device_Factory.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/SerialDebug/SerialDebug.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Pulse_Controller/MIDI_Pulse_Controller.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src/MIDI_Collection_Factory/MIDI_Collection_Factory.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/examples/3Buzzers_HairlessMIDI/src/MIDI_Serial/MIDI_Message.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/examples/3Buzzers_HairlessMIDI/src/MIDI_Serial/MIDI_Handler.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/examples/3Buzzers_HairlessMIDI/src/MIDI_Serial/MIDI_Serial.h"
  "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/examples/3Buzzers_HairlessMIDI/src/MIDI_Serial/MIDI_Enums.h"
)

target_include_directories(midi-device-controller INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MIDI_Device_Controller/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(midi-device-controller INTERFACE
    arduino-compat
)
