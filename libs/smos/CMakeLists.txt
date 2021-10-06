add_library(smos INTERFACE)

target_sources(smos INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SMoS-cpp/src/smosCommon.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SMoS-cpp/src/smosDecoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SMoS-cpp/src/smosEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SMoS-cpp/src/smosEncoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/SMoS-cpp/src/smosDecoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/SMoS-cpp/src/smosCommon.h"
  "${CMAKE_CURRENT_LIST_DIR}/SMoS-cpp/src/smosDefinitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/SMoS-cpp/examples/ArduinoDemo/smosServer.h"
)

target_include_directories(smos INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SMoS-cpp/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(smos INTERFACE
    arduino-compat
)
