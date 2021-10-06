add_library(bluefairy INTERFACE)

target_sources(bluefairy INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BlueFairy/linux/Arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlueFairy/src/IO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlueFairy/src/Scheduler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlueFairy/src/Keyboard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlueFairy/src/State.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlueFairy/src/io/ESP32IO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlueFairy/src/io/ArduinoIO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlueFairy/examples/TubeClock/TubeDisplay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlueFairy/linux/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlueFairy/src/bluefairy.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlueFairy/src/Scheduler.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlueFairy/src/EdgeDetector.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlueFairy/src/IO.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlueFairy/src/List.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlueFairy/src/State.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlueFairy/src/Keyboard.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlueFairy/src/io/ESP32IO.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlueFairy/src/io/ArduinoIO.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlueFairy/examples/TubeClock/TubeDisplay.h"
)

target_include_directories(bluefairy INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BlueFairy/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bluefairy INTERFACE
    arduino-compat
)
