add_library(pac-ai-esp32-rotary-encoder INTERFACE)

target_sources(pac-ai-esp32-rotary-encoder INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ai-esp32-rotary-encoder/src/AiEsp32RotaryEncoderNumberSelector.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ai-esp32-rotary-encoder/src/AiEsp32RotaryEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ai-esp32-rotary-encoder/src/AiEsp32RotaryEncoderNumberSelector.h"
  "${CMAKE_CURRENT_LIST_DIR}/ai-esp32-rotary-encoder/src/AiEsp32RotaryEncoder.h"
)

target_include_directories(pac-ai-esp32-rotary-encoder INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ai-esp32-rotary-encoder/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ai-esp32-rotary-encoder INTERFACE
    arduino-compat
)
