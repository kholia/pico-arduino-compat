add_library(pac-esp32encoder INTERFACE)

target_sources(pac-esp32encoder INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Encoder/src/InterruptEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Encoder/src/ESP32Encoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Encoder/src/InterruptEncoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Encoder/src/ESP32Encoder.h"
)

target_include_directories(pac-esp32encoder INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP32Encoder/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp32encoder INTERFACE
    arduino-compat
)
