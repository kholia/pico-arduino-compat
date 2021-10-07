add_library(pac-aceroutine INTERFACE)

target_sources(pac-aceroutine INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AceRoutine/src/ace_routine/Coroutine.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceRoutine/src/ace_routine/testing/TestableClockInterface.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceRoutine/examples/SoundManager/SoundManagerRoutine.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceRoutine/examples/SoundManager/SoundRoutine.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceRoutine/src/AceRoutine.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceRoutine/src/ace_routine/CoroutineScheduler.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceRoutine/src/ace_routine/compat.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceRoutine/src/ace_routine/ClockInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceRoutine/src/ace_routine/Coroutine.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceRoutine/src/ace_routine/Channel.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceRoutine/src/ace_routine/testing/TestableCoroutineScheduler.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceRoutine/src/ace_routine/testing/TestableClockInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceRoutine/src/ace_routine/testing/TestableCoroutine.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceRoutine/examples/SoundManager/SoundRoutine.h"
)

target_include_directories(pac-aceroutine INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AceRoutine/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-aceroutine INTERFACE
    arduino-compat
)
