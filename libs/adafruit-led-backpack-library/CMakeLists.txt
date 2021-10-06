add_library(adafruit-led-backpack-library INTERFACE)

target_sources(adafruit-led-backpack-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LED_Backpack/Adafruit_LEDBackpack.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LED_Backpack/Adafruit_LEDBackpack.h"
)

target_include_directories(adafruit-led-backpack-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_LED_Backpack"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-led-backpack-library INTERFACE
    arduino-compat
    adafruit-gfx-library
    adafruit-busio
)
