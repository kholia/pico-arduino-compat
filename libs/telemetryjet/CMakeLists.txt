add_library(pac-telemetryjet INTERFACE)

target_sources(pac-telemetryjet INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/telemetryjet-arduino-sdk/extras/telemetryArduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/telemetryjet-arduino-sdk/extras/statelessTelemetryNode.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/telemetryjet-arduino-sdk/src/TelemetryJet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/telemetryjet-arduino-sdk/src/MessagePack.c"
  "${CMAKE_CURRENT_LIST_DIR}/telemetryjet-arduino-sdk/extras/statelessTelemetryNode.h"
  "${CMAKE_CURRENT_LIST_DIR}/telemetryjet-arduino-sdk/extras/telemetryArduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/telemetryjet-arduino-sdk/src/MessagePack.h"
  "${CMAKE_CURRENT_LIST_DIR}/telemetryjet-arduino-sdk/src/TelemetryJet.h"
)

target_include_directories(pac-telemetryjet INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/telemetryjet-arduino-sdk/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-telemetryjet INTERFACE
    arduino-compat
)
