add_library(teensyvariableplayback INTERFACE)

target_sources(teensyvariableplayback INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/extras/soundio/sd_play_all/sd_play_all.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/extras/soundio/save_raw/save_raw.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/extras/soundio/save_raw_sd/save_raw_sd.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/extras/soundio/save_wav/save_wav.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/extras/linux/array/array.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/extras/linux/sd_raw/sd_raw.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/test/audio/output_test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/test/audio/array/test_array_mono_loop_forward_playback.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/test/audio/array/test_array_stereo_loop_forward_playback.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/test/audio/wav/test_wav_tags.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/test/audio/wav/test_wav_stereo_loop_forward_playback.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/test/audio/wav/test_wav_mono_loop_forward_playback.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/test/low_level/array/test_array_mono_loop_forward_playback.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/test/low_level/array/test_array_stereo_loop_forward_playback.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/test/low_level/wav_header/test_parse_wave_header.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/test/low_level/sd/test_wav_mono_loop_forward_playback.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/test/low_level/sd/test_wav_mono_noloop_forward_playback.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/test/low_level/sd/test_raw_mono_loop_forward_playback.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/test/low_level/sd/test_wav_mono_noloop_backward_playback.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/test/low_level/sd/test_raw_mono_noloop_forward_double_rate_playback.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/test/low_level/sd/test_raw_mono_noloop_forward_playback.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/test/low_level/indexedfile/test_indexablefile.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/test/low_level/arraywav/test_array_mono_loop_forward_playback.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/test/low_level/arraywav/test_array_stereo_loop_forward_playback.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/src/IndexableFile.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/src/ResamplingSdReader.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/src/playsdresmp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/src/playarrayresmp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/src/interpolation.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/src/ResamplingArrayReader.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/test/embedfile.c"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/test/audio/output_test.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/test/audio/array/AudioArrayFixture.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/test/audio/wav/AudioWavFixture.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/test/low_level/array/ResamplingArrayFixture.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/test/low_level/wav_header/WaveHeaderParserFixture.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/test/low_level/sd/ResamplingReaderFixture.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/test/low_level/indexedfile/IndexedFileFixture.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/test/low_level/arraywav/ResamplingArrayWavFixture.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/src/loop_type.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/src/playresmp.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/src/IndexableFile.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/src/ResamplingSdReader.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/src/waveheaderparser.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/src/playarrayresmp.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/src/playsdresmp.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/src/interpolation.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/src/TeensyVariablePlayback.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/src/ResamplingArrayReader.h"
)

target_include_directories(teensyvariableplayback INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/teensy-variable-playback/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-sd)
    add_subdirectory(../../official-libs/sd build_official-sd)
endif()

target_link_libraries(teensyvariableplayback INTERFACE
    arduino-compat
    official-sd
)
