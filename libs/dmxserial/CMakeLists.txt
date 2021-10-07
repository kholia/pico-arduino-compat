add_library(pac-dmxserial INTERFACE)

target_sources(pac-dmxserial INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DMXSerial/src/DMXSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DMXSerial/src/DMXSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/DMXSerial/src/DMXSerial_megaavr.h"
  "${CMAKE_CURRENT_LIST_DIR}/DMXSerial/src/DMXSerial_avr.h"
  "${CMAKE_CURRENT_LIST_DIR}/DMXSerial/examples/DmxSerialNeoPixels/ws2812.h"
)

target_include_directories(pac-dmxserial INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DMXSerial/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dmxserial INTERFACE
    arduino-compat
)
