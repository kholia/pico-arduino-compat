add_library(pac-autoanalogaudio INTERFACE)

target_sources(pac-autoanalogaudio INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AutoAnalogAudio/src/avr/AutoAnalogAudio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AutoAnalogAudio/src/esp32/AutoAnalogAudio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AutoAnalogAudio/src/sam/AutoAnalogAudio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AutoAnalogAudio/examples/WirelessTx_RPi/wirelessSpeaker.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AutoAnalogAudio/examples/WirelessTx_RPi/radioRelay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AutoAnalogAudio/src/AutoAnalog_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoAnalogAudio/src/AutoAnalogAudio.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoAnalogAudio/examples/AudioRadioRelay/myRadio.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoAnalogAudio/examples/WirelessSpeaker/myRadio.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoAnalogAudio/examples/ESP32/ESP32_AudioTest/myWAV.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoAnalogAudio/examples/ESP32/ESP32_AudioTest/volume.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoAnalogAudio/examples/ESP32/ESP32_AudioTest/mySine.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoAnalogAudio/examples/WirelessMicrophone/myRadio.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoAnalogAudio/examples/SDAudio/SdAudioRecording/myWAV.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoAnalogAudio/examples/SDAudio/SdAudioRecording/myRecording.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoAnalogAudio/examples/SDAudio/SdAudioWavPlayer/myWAV.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoAnalogAudio/examples/SimpleSine/myRadio.h"
)

target_include_directories(pac-autoanalogaudio INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AutoAnalogAudio/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-autoanalogaudio INTERFACE
    arduino-compat
)
