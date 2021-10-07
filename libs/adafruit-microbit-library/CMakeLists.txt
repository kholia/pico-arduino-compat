add_library(pac-adafruit-microbit-library INTERFACE)

target_sources(pac-adafruit-microbit-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Microbit/Adafruit_Microbit.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Microbit/examples/ble_controller/packetParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Microbit/Adafruit_Microbit.h"
)

target_include_directories(pac-adafruit-microbit-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Microbit"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-adafruit-microbit-library INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
