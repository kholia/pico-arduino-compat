add_library(basictinkering INTERFACE)

target_sources(basictinkering INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BasicTinkering/src/BtButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BasicTinkering/src/BtLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BasicTinkering/src/BtSevenSegmentDisplay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BasicTinkering/src/BtButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/BasicTinkering/src/BtStopWatch.h"
  "${CMAKE_CURRENT_LIST_DIR}/BasicTinkering/src/BtLED.h"
  "${CMAKE_CURRENT_LIST_DIR}/BasicTinkering/src/BtSevenSegmentDisplay.h"
  "${CMAKE_CURRENT_LIST_DIR}/BasicTinkering/src/BtPotentiometer.h"
)

target_include_directories(basictinkering INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BasicTinkering/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(basictinkering INTERFACE
    arduino-compat
)
