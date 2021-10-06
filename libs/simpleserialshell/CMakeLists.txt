add_library(simpleserialshell INTERFACE)

target_sources(simpleserialshell INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SimpleSerialShell/extras/tests/simpleSerialShellTest/shellTestCommands.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleSerialShell/extras/tests/simpleSerialShellTest/SimMonitor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleSerialShell/src/SimpleSerialShell.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleSerialShell/examples/ArduinoTextInterface/MemoryUsageAVR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleSerialShell/examples/ArduinoTextInterface/memoryUsageCommands.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleSerialShell/examples/ArduinoTextInterface/memory_probe.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleSerialShell/examples/ArduinoTextInterface/ArduinoCommands.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleSerialShell/examples/ArduinoTextInterface/memoryCommands.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleSerialShell/extras/tests/simpleSerialShellTest/simpleFIFO.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleSerialShell/extras/tests/simpleSerialShellTest/shellTestHelpers.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleSerialShell/src/SimpleSerialShell.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleSerialShell/examples/ArduinoTextInterface/ArduinoCommands.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleSerialShell/examples/ArduinoTextInterface/MemoryUsageAVR.h"
)

target_include_directories(simpleserialshell INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SimpleSerialShell/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(simpleserialshell INTERFACE
    arduino-compat
)
