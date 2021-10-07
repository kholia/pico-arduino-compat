add_library(pac-mirobot INTERFACE)

target_sources(pac-mirobot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mirobot-arduino/src/Mirobot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mirobot-arduino/src/lib/Base64.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mirobot-arduino/src/lib/ShiftStepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mirobot-arduino/src/lib/HotStepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mirobot-arduino/src/lib/Discovery.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mirobot-arduino/src/lib/SerialWebSocket.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mirobot-arduino/src/lib/sha1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mirobot-arduino/src/Mirobot.h"
  "${CMAKE_CURRENT_LIST_DIR}/mirobot-arduino/src/lib/WS2812B.h"
  "${CMAKE_CURRENT_LIST_DIR}/mirobot-arduino/src/lib/ShiftStepper.h"
  "${CMAKE_CURRENT_LIST_DIR}/mirobot-arduino/src/lib/HotStepper.h"
  "${CMAKE_CURRENT_LIST_DIR}/mirobot-arduino/src/lib/SerialWebSocket.h"
  "${CMAKE_CURRENT_LIST_DIR}/mirobot-arduino/src/lib/Base64.h"
  "${CMAKE_CURRENT_LIST_DIR}/mirobot-arduino/src/lib/sha1.h"
  "${CMAKE_CURRENT_LIST_DIR}/mirobot-arduino/src/lib/Discovery.h"
  "${CMAKE_CURRENT_LIST_DIR}/mirobot-arduino/examples/firmware-v3/web.h"
)

target_include_directories(pac-mirobot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mirobot-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mirobot INTERFACE
    arduino-compat
)
