add_library(pac-fastledmanager INTERFACE)

target_sources(pac-fastledmanager INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FastLEDManager/FastLEDManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLEDManager/FastLEDManager/LEDController.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLEDManager/FastLEDManager/LEDSequencer.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLEDManager/FastLEDManager/LEDSequencer/Line.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLEDManager/FastLEDManager/LEDSequencer/Random.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLEDManager/FastLEDManager/LEDSequencer/Base.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLEDManager/FastLEDManager/LEDSequencer/Tween.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLEDManager/FastLEDManager/LEDSequencer/Delay.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLEDManager/FastLEDManager/LEDSequencer/Flash.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLEDManager/FastLEDManager/LEDSequencer/MoodMachine.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLEDManager/FastLEDManager/LEDSequencer/Sequence.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLEDManager/FastLEDManager/LEDSequencer/Progress.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLEDManager/FastLEDManager/LEDSequencer/RGBW.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLEDManager/FastLEDManager/LEDSequencer/Fill.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastLEDManager/FastLEDManager/LEDSequencer/Triangle.h"
)

target_include_directories(pac-fastledmanager INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FastLEDManager"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fastledmanager INTERFACE
    arduino-compat
)
