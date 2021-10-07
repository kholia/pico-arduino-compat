add_library(pac-roxmux INTERFACE)

target_sources(pac-roxmux INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RoxMux/src/RoxTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/RoxMux/src/RoxEncoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/RoxMux/src/RoxDebug.h"
  "${CMAKE_CURRENT_LIST_DIR}/RoxMux/src/RoxScroller.h"
  "${CMAKE_CURRENT_LIST_DIR}/RoxMux/src/Rox74HC595.h"
  "${CMAKE_CURRENT_LIST_DIR}/RoxMux/src/Rox74HC165.h"
  "${CMAKE_CURRENT_LIST_DIR}/RoxMux/src/RoxTCA9548A.h"
  "${CMAKE_CURRENT_LIST_DIR}/RoxMux/src/RoxSerialMonitor.h"
  "${CMAKE_CURRENT_LIST_DIR}/RoxMux/src/RoxLedMeter.h"
  "${CMAKE_CURRENT_LIST_DIR}/RoxMux/src/RoxLed.h"
  "${CMAKE_CURRENT_LIST_DIR}/RoxMux/src/RoxMidiClock.h"
  "${CMAKE_CURRENT_LIST_DIR}/RoxMux/src/RoxMCP2301X.h"
  "${CMAKE_CURRENT_LIST_DIR}/RoxMux/src/RoxNonLatchingRelay.h"
  "${CMAKE_CURRENT_LIST_DIR}/RoxMux/src/RoxPot.h"
  "${CMAKE_CURRENT_LIST_DIR}/RoxMux/src/RoxMux.h"
  "${CMAKE_CURRENT_LIST_DIR}/RoxMux/src/RoxLatchingRelay.h"
  "${CMAKE_CURRENT_LIST_DIR}/RoxMux/src/RoxMidiActiveSense.h"
  "${CMAKE_CURRENT_LIST_DIR}/RoxMux/src/RoxButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/RoxMux/src/RoxIntervals.h"
  "${CMAKE_CURRENT_LIST_DIR}/RoxMux/src/Rox74HC40XX.h"
  "${CMAKE_CURRENT_LIST_DIR}/RoxMux/src/RoxFlags.h"
  "${CMAKE_CURRENT_LIST_DIR}/RoxMux/src/RoxLogLifo.h"
)

target_include_directories(pac-roxmux INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RoxMux/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-roxmux INTERFACE
    arduino-compat
)
