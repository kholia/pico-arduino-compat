add_library(pac-adafruit-ps2-trackpad INTERFACE)

target_sources(pac-adafruit-ps2-trackpad INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-PS2-Trackpad/Adafruit_PS2_Trackpad.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit-PS2-Trackpad/Adafruit_PS2_Trackpad.h"
)

target_include_directories(pac-adafruit-ps2-trackpad INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit-PS2-Trackpad"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-ps2-trackpad INTERFACE
    arduino-compat
)
