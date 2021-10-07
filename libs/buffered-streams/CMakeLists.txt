add_library(pac-buffered-streams INTERFACE)

target_sources(pac-buffered-streams INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoBufferedStreams/src/PipedStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoBufferedStreams/src/LoopbackStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoBufferedStreams/src/LoopbackStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoBufferedStreams/src/PipedStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoBufferedStreams/examples/ESP8266_MirroredConsole/StreamPrint.h"
)

target_include_directories(pac-buffered-streams INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoBufferedStreams/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-buffered-streams INTERFACE
    arduino-compat
)
