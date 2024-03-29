add_library(pac-teensyaudiolaunchctrl INTERFACE)

target_sources(pac-teensyaudiolaunchctrl INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/teensy-audio-launch-ctrl/extras/sample_launcher/sample_launcher.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-audio-launch-ctrl/test/test_polyphonic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-audio-launch-ctrl/src/polyphonic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-audio-launch-ctrl/src/sampleplaymidicontroller.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-audio-launch-ctrl/test/polyphonicfixture.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-audio-launch-ctrl/src/polyphonic.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-audio-launch-ctrl/src/sampleplaymidicontrollerenums.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-audio-launch-ctrl/src/sampleplaymidicontroller.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-audio-launch-ctrl/src/st7735display.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-audio-launch-ctrl/src/serialdisplay.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-audio-launch-ctrl/src/extracolors.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-audio-launch-ctrl/src/TeensyAudioLaunchCtrl.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-audio-launch-ctrl/src/abstractdisplay.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-audio-launch-ctrl/src/sdsampleplayernote.h"
)

target_include_directories(pac-teensyaudiolaunchctrl INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/teensy-audio-launch-ctrl/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-teensyaudiolaunchctrl INTERFACE
    arduino-compat
    pac-sd
)
