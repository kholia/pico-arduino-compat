add_library(cf-rotary-encoder INTERFACE)

target_sources(cf-rotary-encoder INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/cf-arduino-lib-rotary-encoder/src/CFRotaryEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cf-arduino-lib-rotary-encoder/src/CFRotaryEncoder.h"
)

target_include_directories(cf-rotary-encoder INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/cf-arduino-lib-rotary-encoder/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(cf-rotary-encoder INTERFACE
    arduino-compat
)
