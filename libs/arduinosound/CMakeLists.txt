add_library(arduinosound INTERFACE)

target_sources(arduinosound INTERFACE
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

target_include_directories(arduinosound INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoSound/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-sd)
    add_subdirectory(../../official-libs/sd build_official-sd)
endif()

target_link_libraries(arduinosound INTERFACE
    arduino-compat
    official-sd
)
