add_library(pac-adafruit-neopixel INTERFACE)

target_sources(pac-adafruit-neopixel INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoPixel/Adafruit_NeoPixel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoPixel/examples/StrandtestBLE/BLESerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoPixel/esp.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoPixel/kendyte_k210.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoPixel/rp2040.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoPixel/esp8266.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoPixel/Adafruit_NeoPixel.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoPixel/rp2040_pio.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoPixel/examples/StrandtestBLE/BLESerial.h"
)

target_include_directories(pac-adafruit-neopixel INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_NeoPixel"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-neopixel INTERFACE
    arduino-compat
)
