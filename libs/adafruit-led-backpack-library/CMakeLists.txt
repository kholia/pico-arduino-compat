add_library(pac-adafruit-led-backpack-library INTERFACE)

target_sources(pac-adafruit-led-backpack-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LED_Backpack/Adafruit_LEDBackpack.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LED_Backpack/Adafruit_LEDBackpack.h"
)

target_include_directories(pac-adafruit-led-backpack-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LED_Backpack"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-led-backpack-library INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
    pac-adafruit-busio
)
