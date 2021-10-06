add_library(ala INTERFACE)

target_sources(ala INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ALA/src/ExtNeoPixel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ALA/src/ExtTlc5940.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ALA/src/AlaLed.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ALA/src/AlaLedRgb.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ALA/src/Ala.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ALA/src/ExtNeoPixel.h"
  "${CMAKE_CURRENT_LIST_DIR}/ALA/src/AlaLedRgb.h"
  "${CMAKE_CURRENT_LIST_DIR}/ALA/src/ExtTlc5940.h"
  "${CMAKE_CURRENT_LIST_DIR}/ALA/src/Ala.h"
  "${CMAKE_CURRENT_LIST_DIR}/ALA/src/AlaLed.h"
  "${CMAKE_CURRENT_LIST_DIR}/ALA/src/ExtTlc5940Config.h"
  "${CMAKE_CURRENT_LIST_DIR}/ALA/src/pinouts/ATmega_xx4.h"
  "${CMAKE_CURRENT_LIST_DIR}/ALA/src/pinouts/ATmega_xx8.h"
  "${CMAKE_CURRENT_LIST_DIR}/ALA/src/pinouts/Teensypp_xxx6.h"
  "${CMAKE_CURRENT_LIST_DIR}/ALA/src/pinouts/ATmega_8.h"
  "${CMAKE_CURRENT_LIST_DIR}/ALA/src/pinouts/chip_includes.h"
  "${CMAKE_CURRENT_LIST_DIR}/ALA/src/pinouts/Arduino_Mega.h"
  "${CMAKE_CURRENT_LIST_DIR}/ALA/src/pinouts/Teensy_xxU4.h"
)

target_include_directories(ala INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ALA/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ala INTERFACE
    arduino-compat
)
