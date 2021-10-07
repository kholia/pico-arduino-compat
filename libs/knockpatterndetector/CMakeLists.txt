add_library(pac-knockpatterndetector INTERFACE)

target_sources(pac-knockpatterndetector INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoKnockPatternDetector/src/KnockPattern.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoKnockPatternDetector/src/KnockRecorder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoKnockPatternDetector/src/KnockAnalogHandler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoKnockPatternDetector/src/KnockDigitalHandler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoKnockPatternDetector/src/KnockRecorder.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoKnockPatternDetector/src/KnockPattern.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoKnockPatternDetector/src/KnockDigitalHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoKnockPatternDetector/src/KnockHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoKnockPatternDetector/src/KnockAnalogHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoKnockPatternDetector/src/KnockPatternDetector.h"
)

target_include_directories(pac-knockpatterndetector INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoKnockPatternDetector/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-knockpatterndetector INTERFACE
    arduino-compat
)
