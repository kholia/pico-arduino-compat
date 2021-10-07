add_library(pac-adafruit-dma-neopixel-library INTERFACE)

target_sources(pac-adafruit-dma-neopixel-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoPixel_ZeroDMA/Adafruit_NeoPixel_ZeroDMA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoPixel_ZeroDMA/pins.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoPixel_ZeroDMA/Adafruit_NeoPixel_ZeroDMA.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoPixel_ZeroDMA/bittable.h"
)

target_include_directories(pac-adafruit-dma-neopixel-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoPixel_ZeroDMA"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-dma-neopixel-library INTERFACE
    arduino-compat
)
