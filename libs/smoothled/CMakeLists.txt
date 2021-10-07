add_library(pac-smoothled INTERFACE)

target_sources(pac-smoothled INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SmoothLed/src/SmoothLed.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SmoothLed/src/SmoothLedBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmoothLed/src/SmoothLed.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmoothLed/src/SmoothLedReceiver.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmoothLed/src/SmoothLedCcl.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmoothLed/src/SmoothLedMultiply.h"
)

target_include_directories(pac-smoothled INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SmoothLed/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-smoothled INTERFACE
    arduino-compat
)
