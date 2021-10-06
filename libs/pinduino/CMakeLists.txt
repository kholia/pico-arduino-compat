add_library(pinduino INTERFACE)

target_sources(pinduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/pinduino/src/pinduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pinduino/src/pinduinoPins.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pinduino/src/AddressableStrip.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pinduino/src/RGBStrip.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pinduino/src/Adafruit_NeoPixel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pinduino/src/DataPort.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pinduino/src/AddressableMatrix.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pinduino/src/pinduinoPins.h"
  "${CMAKE_CURRENT_LIST_DIR}/pinduino/src/pinduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/pinduino/src/Adafruit_NeoPixel.h"
  "${CMAKE_CURRENT_LIST_DIR}/pinduino/src/AddressableMatrix.h"
  "${CMAKE_CURRENT_LIST_DIR}/pinduino/src/RGBStrip.h"
  "${CMAKE_CURRENT_LIST_DIR}/pinduino/src/AddressableStrip.h"
  "${CMAKE_CURRENT_LIST_DIR}/pinduino/src/DataPort.h"
)

target_include_directories(pinduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/pinduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pinduino INTERFACE
    arduino-compat
)
