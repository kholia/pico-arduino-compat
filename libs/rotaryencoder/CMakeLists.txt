add_library(rotaryencoder INTERFACE)

target_sources(rotaryencoder INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RotaryEncoder/src/RotaryEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RotaryEncoder/src/RotaryEncoder.h"
)

target_include_directories(rotaryencoder INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RotaryEncoder/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rotaryencoder INTERFACE
    arduino-compat
)
