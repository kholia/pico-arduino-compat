add_library(pac-encoder INTERFACE)

target_sources(pac-encoder INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Encoder/Encoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Encoder/Encoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/Encoder/utility/direct_pin_read.h"
  "${CMAKE_CURRENT_LIST_DIR}/Encoder/utility/interrupt_pins.h"
  "${CMAKE_CURRENT_LIST_DIR}/Encoder/utility/interrupt_config.h"
)

target_include_directories(pac-encoder INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Encoder"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-encoder INTERFACE
    arduino-compat
)
