add_library(pac-arduinosound INTERFACE)

target_sources(pac-arduinosound INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSound/src/FFTAnalyzer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSound/src/AudioOutI2S.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSound/src/AudioOut.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSound/src/AudioInI2S.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSound/src/AmplitudeAnalyzer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSound/src/SDWaveFile.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSound/src/AudioAnalyzer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSound/src/AudioIn.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSound/src/AudioOutI2S.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSound/src/AudioAnalyzer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSound/src/AmplitudeAnalyzer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSound/src/SoundFile.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSound/src/FFTAnalyzer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSound/src/AudioIn.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSound/src/AudioInI2S.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSound/src/ArduinoSound.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSound/src/SDWaveFile.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoSound/src/AudioOut.h"
)

target_include_directories(pac-arduinosound INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoSound/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-arduinosound INTERFACE
    arduino-compat
    pac-sd
)
