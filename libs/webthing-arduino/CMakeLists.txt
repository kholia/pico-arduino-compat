add_library(webthing-arduino INTERFACE)

target_sources(webthing-arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/webthing-arduino/examples/PlatformIO/TextDisplay/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/webthing-arduino/examples/PlatformIO/RGBLamp/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/webthing-arduino/examples/PlatformIO/LEDLamp/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/webthing-arduino/examples/PlatformIO/BME280/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/webthing-arduino/examples/PlatformIO/LED/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/webthing-arduino/examples/PlatformIO/AsyncProperty/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/webthing-arduino/examples/PlatformIO/LevelSensor/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/webthing-arduino/EthernetWebThingAdapter.h"
  "${CMAKE_CURRENT_LIST_DIR}/webthing-arduino/WebThingAdapter.h"
  "${CMAKE_CURRENT_LIST_DIR}/webthing-arduino/ESPWebThingAdapter.h"
  "${CMAKE_CURRENT_LIST_DIR}/webthing-arduino/Thing.h"
  "${CMAKE_CURRENT_LIST_DIR}/webthing-arduino/WiFi101WebThingAdapter.h"
)

target_include_directories(webthing-arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/webthing-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(webthing-arduino INTERFACE
    arduino-compat
    adafruit-gfx-library
)
