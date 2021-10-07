add_library(pac-teensyaudiosampler INTERFACE)

target_sources(pac-teensyaudiosampler INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/teensy-polyphony/extras/linux/array/array.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-polyphony/extras/linux/sample_launcher/sample_launcher.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-polyphony/src/loopsampler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-polyphony/src/polyphonicsampler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-polyphony/src/sampler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-polyphony/src/stringsampler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-polyphony/src/playcontroller/sampleplaymidicontroller.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-polyphony/src/polyphonicsampler.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-polyphony/src/sampler.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-polyphony/src/loopsampler.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-polyphony/src/TeensyPolyphony.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-polyphony/src/stringsampler.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-polyphony/src/loopsamplerenums.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-polyphony/src/playcontroller/sampleplaymidicontrollerenums.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-polyphony/src/playcontroller/sampleplaymidicontroller.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-polyphony/src/playcontroller/st7735display.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-polyphony/src/playcontroller/serialdisplay.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-polyphony/src/playcontroller/extracolors.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-polyphony/src/playcontroller/abstractdisplay.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-polyphony/examples/polyphony_demo/kick_raw.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-polyphony/examples/polyphony_demo/piano-studio-octave0_raw.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-polyphony/examples/polyphony_demo/piano-studio-octave2_raw.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-polyphony/examples/polyphony_demo/piano-studio-octave1_raw.h"
)

target_include_directories(pac-teensyaudiosampler INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/teensy-polyphony/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-teensyaudiosampler INTERFACE
    arduino-compat
    pac-sd
)
