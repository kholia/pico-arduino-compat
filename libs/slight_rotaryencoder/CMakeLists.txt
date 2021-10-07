add_library(pac-slight_rotaryencoder INTERFACE)

target_sources(pac-slight_rotaryencoder INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/slight_RotaryEncoder/src/slight_RotaryEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/slight_RotaryEncoder/examples/slight_RotaryEncoder__advanced2/myinput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/slight_RotaryEncoder/src/slight_RotaryEncoder_CallbackHelper.h"
  "${CMAKE_CURRENT_LIST_DIR}/slight_RotaryEncoder/src/slight_RotaryEncoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/slight_RotaryEncoder/examples/slight_RotaryEncoder__advanced2/myinput.h"
)

target_include_directories(pac-slight_rotaryencoder INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/slight_RotaryEncoder/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-slight_rotaryencoder INTERFACE
    arduino-compat
)
