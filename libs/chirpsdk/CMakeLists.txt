add_library(chirpsdk INTERFACE)

target_sources(chirpsdk INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/chirp-arduino/src/chirp_sdk_events.h"
  "${CMAKE_CURRENT_LIST_DIR}/chirp-arduino/src/chirp_sdk.h"
  "${CMAKE_CURRENT_LIST_DIR}/chirp-arduino/src/chirp_sdk_errors.h"
  "${CMAKE_CURRENT_LIST_DIR}/chirp-arduino/src/chirp_sdk_version.h"
  "${CMAKE_CURRENT_LIST_DIR}/chirp-arduino/examples/Nano33SenseReceive/credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/chirp-arduino/examples/MKRZeroSend/credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/chirp-arduino/examples/ESP32Send/credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/chirp-arduino/examples/MXChipSendReceive/credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/chirp-arduino/examples/ESP32Receive/credentials.h"
  "${CMAKE_CURRENT_LIST_DIR}/chirp-arduino/examples/Nano33SenseSend/credentials.h"
)

target_include_directories(chirpsdk INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/chirp-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(chirpsdk INTERFACE
    arduino-compat
)
