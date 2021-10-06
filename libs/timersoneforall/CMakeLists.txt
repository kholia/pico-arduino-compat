add_library(timersoneforall INTERFACE)

target_sources(timersoneforall INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TimersOneForAll/src/Internal/Registers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TimersOneForAll/src/TimersOneForAll.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimersOneForAll/src/Internal/SquareWave.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimersOneForAll/src/Internal/Debugger.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimersOneForAll/src/Internal/ShutDown.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimersOneForAll/src/Internal/Timing.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimersOneForAll/src/Internal/DoAfter.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimersOneForAll/src/Internal/RepeatAfter.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimersOneForAll/src/Internal/Delay.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimersOneForAll/src/Internal/Kernel.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimersOneForAll/src/Internal/PlayTone.h"
)

target_include_directories(timersoneforall INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TimersOneForAll/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(timersoneforall INTERFACE
    arduino-compat
)
