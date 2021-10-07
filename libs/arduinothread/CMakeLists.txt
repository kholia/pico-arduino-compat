add_library(pac-arduinothread INTERFACE)

target_sources(pac-arduinothread INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoThread/Thread.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoThread/ThreadController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoThread/Thread.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoThread/StaticThreadController.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoThread/ThreadController.h"
)

target_include_directories(pac-arduinothread INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoThread"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduinothread INTERFACE
    arduino-compat
)
