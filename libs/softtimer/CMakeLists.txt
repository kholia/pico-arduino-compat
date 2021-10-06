add_library(softtimer INTERFACE)

target_sources(softtimer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-softtimer/src/DelayRun.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-softtimer/src/SoftTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-softtimer/src/FrequencyTask.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-softtimer/src/SoftPwmTask.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-softtimer/src/BlinkTask.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-softtimer/src/Dimmer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-softtimer/src/Task.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-softtimer/src/Rotary.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-softtimer/src/HardDimmer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-softtimer/src/Debouncer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-softtimer/src/Heartbeat.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-softtimer/src/TonePlayer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-softtimer/src/Rotary.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-softtimer/src/TonePlayer.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-softtimer/src/Debouncer.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-softtimer/src/HardDimmer.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-softtimer/src/SoftTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-softtimer/src/Heartbeat.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-softtimer/src/FrequencyTask.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-softtimer/src/DelayRun.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-softtimer/src/BlinkTask.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-softtimer/src/Task.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-softtimer/src/Dimmer.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-softtimer/src/SoftPwmTask.h"
)

target_include_directories(softtimer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-softtimer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(softtimer INTERFACE
    arduino-compat
)
