add_library(pac-adafruit-protomatter INTERFACE)

target_sources(pac-adafruit-protomatter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Protomatter/src/Adafruit_Protomatter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Protomatter/src/core.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Protomatter/src/Adafruit_Protomatter.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Protomatter/src/core.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Protomatter/src/arch/samd21.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Protomatter/src/arch/samd51.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Protomatter/src/arch/stm32.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Protomatter/src/arch/nrf52.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Protomatter/src/arch/rp2040.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Protomatter/src/arch/samd-common.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Protomatter/src/arch/arch.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Protomatter/src/arch/teensy4.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Protomatter/src/arch/esp32.h"
)

target_include_directories(pac-adafruit-protomatter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Protomatter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-adafruit-protomatter INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
