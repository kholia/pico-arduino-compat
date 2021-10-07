add_library(pac-adafruit-neotrellis-m4-library INTERFACE)

target_sources(pac-adafruit-neotrellis-m4-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/Adafruit_NeoTrellisM4.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/trellis_flash_sampler/AudioSampleKick.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/trellis_flash_sampler/AudioSampleCashregister.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/trellis_flash_sampler/AudioSampleSnare.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/trellis_flash_sampler/AudioSampleGong.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/trellis_flash_sampler/AudioSampleTomtom.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/trellis_flash_sampler/AudioSampleHihat.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/Filter_FIR_trellis/filters.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/sixteen_step_sequencer/AudioSampleRs01.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/sixteen_step_sequencer/AudioSampleBd05.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/sixteen_step_sequencer/AudioSampleOh03.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/sixteen_step_sequencer/AudioSampleCr01.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/sixteen_step_sequencer/filters.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/sixteen_step_sequencer/AudioSampleHh01.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/sixteen_step_sequencer/sampler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/sixteen_step_sequencer/sequencer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/sixteen_step_sequencer/recorder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/sixteen_step_sequencer/controls.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/sixteen_step_sequencer/AudioSampleBd01.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/sixteen_step_sequencer/AudioSampleSd01.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/sixteen_step_sequencer/AudioSampleCp02.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/Filter_FIR_trellis/mel_8_256.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/trellis_audio_fft/mel_8_256.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/Adafruit_NeoTrellisM4.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/trellis_flash_sampler/AudioSampleHihat.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/trellis_flash_sampler/AudioSampleCashregister.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/trellis_flash_sampler/AudioSampleGong.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/trellis_flash_sampler/AudioSampleSnare.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/trellis_flash_sampler/AudioSampleTomtom.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/trellis_flash_sampler/AudioSampleKick.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/arpeggiator_synth/synth.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/arpeggiator_synth/settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/Filter_FIR_trellis/bandp_1200_1700.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/Filter_FIR_trellis/lopass_1000_44100.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/Filter_FIR_trellis/filters.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/sixteen_step_sequencer/AudioSampleCr01.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/sixteen_step_sequencer/controls.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/sixteen_step_sequencer/AudioSampleSd01.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/sixteen_step_sequencer/lopass_44100.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/sixteen_step_sequencer/filters.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/sixteen_step_sequencer/AudioSampleBd05.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/sixteen_step_sequencer/sampler.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/sixteen_step_sequencer/hipass_44100.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/sixteen_step_sequencer/AudioSampleBd01.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/sixteen_step_sequencer/AudioSampleOh03.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/sixteen_step_sequencer/sequencer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/sixteen_step_sequencer/AudioSampleRs01.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/sixteen_step_sequencer/recorder.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/sixteen_step_sequencer/AudioSampleHh01.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4/examples/sixteen_step_sequencer/AudioSampleCp02.h"
)

target_include_directories(pac-adafruit-neotrellis-m4-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoTrellisM4"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-neotrellis-m4-library INTERFACE
    arduino-compat
)
